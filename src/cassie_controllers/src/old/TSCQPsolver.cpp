//
// Created by dm on 8/12/21.
//
#include <cassie_controllers/TSCQPsolver.hpp>
#include <cassie_common_toolbox/motion_transition.hpp>
#include <cassie_common_toolbox/RadioButtonMap.hpp>
#include <cassie_controllers/feedforward_controller.hpp>
#include <cassie_common_toolbox/bezier_tools.hpp>
#include <roslib_utilities/ros_package_utilities.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_common_toolbox/linear_interpolation.hpp>

using namespace Eigen;
using namespace cassie_model;
using namespace control_utilities;
USING_NAMESPACE_QPOASES

void TSCQPsolver::Cache::init(Config* config) {
    // Size all QP matrices for speeeeeed
    this->b_y.resize(config->outputsize);
    this->Proj.resize(config->qsize,config->qsize);
    this->d2y.resize(config->outputsize);

    this->Js.resize(config->holsize, config->qsize);
    this->dJs.resize(config->holsize, config->qsize);

    this->qpsol.resize(config->nV);
    this->Fdes.resize(config->holsize);
    this->u.resize(config->usize);
    this->ddqtar.resize(config->qsize);

    this->G.resize(config->nV, config->nV);
    this->g.resize(config->nV);
    this->Aconstr.resize(config->nC, config->nV);
    this->lbA.resize(config->nC);
    this->ubA.resize(config->nC);

    this->reset();
}

void TSCQPsolver::Cache::reset() {
    this->Jc.setZero();
    this->dJc.setZero();
    this->Js.setZero();
    this->dJs.setZero();
    this->Jcs.setZero();
    this->dJcs.setZero();

    this->Proj.setZero();
    this->b_y.setZero();
    this->d2y.setZero();

    this->qpsol.setZero();
    this->ddqtar.setZero();
    this->u.setZero();
    this->Fdes.setZero();

    this->G.setZero();
    this->g.setZero();
    this->Aconstr.setZero();
    this->lbA.setZero();
    this->ubA.setZero();
}

void TSCQPsolver::Memory::init() {
    this->u_prev.resize(10);
    this->reset();
}

void TSCQPsolver::Memory::reset() {
    this->qp_initialized = false;
    this->u_prev.setZero();
}

void TSCQPsolver::Config::init() {
    this->W_outputs.resize(this->outputsize,this->outputsize);
    this->Reg_Matrix.resize(this->nV,this->nV);
}

void TSCQPsolver::Config::reconfigure() {
    this->isSim = false;
    ros::param::get("/cassie/is_simulation", this->isSim);
    VectorXd weights;
    VectorXd reg(this->nV);
    reg.setZero();
    if (this->control_mode == 1) {
        //walking
        this->paramChecker.checkAndUpdateYaml("walking_qp/kp", this->Kpy);
        this->paramChecker.checkAndUpdateYaml("walking_qp/kd", this->Kdy);
        this->paramChecker.checkAndUpdateYaml("walking_qp/output_selec", this->output_selec);
        this->paramChecker.checkAndUpdateYaml("walking_qp/weights", weights);
        this->paramChecker.checkAndUpdate("walking_qp/w_outputs",     this->w_outputs);
        this->paramChecker.checkAndUpdate("walking_qp/nQPIter", this->nQPIter);
        reg.segment(this->qsize,this->nV-this->qsize).setConstant(0.000001);
    }else if (this->control_mode ==0) {
        //standing
        this->paramChecker.checkAndUpdateYaml("standing_qp/kp", this->Kpy);
        this->paramChecker.checkAndUpdateYaml("standing_qp/kd", this->Kdy);
        this->paramChecker.checkAndUpdateYaml("standing_qp/output_selec", this->output_selec);
        this->paramChecker.checkAndUpdateYaml("standing_qp/weights", weights);

        this->paramChecker.checkAndUpdate("standing_qp/w_outputs",     this->w_outputs);
        this->paramChecker.checkAndUpdate("standing_qp/nQPIter", this->nQPIter);
        VectorXd reg_u, reg_Fcontact,reg_Finteral;
        this->paramChecker.checkAndUpdateYaml("standing_qp/reg_u", reg_u);
        this->paramChecker.checkAndUpdateYaml("standing_qp/reg_Fcontact", reg_Fcontact);
        this->paramChecker.checkAndUpdateYaml("standing_qp/reg_Finteral", reg_Finteral);
        reg.segment(this->qsize,5) = reg_u;
        reg.segment(this->qsize+5,5) = reg_u;
        reg.segment(this->qsize+this->usize,5) = reg_Fcontact;
        reg.segment(this->qsize+this->usize+5,5) = reg_Fcontact;
        reg.segment(this->qsize+this->usize+10,6) = reg_Finteral;
    }
    this->W_outputs.diagonal() << weights;
    this->Reg_Matrix.diagonal() << reg;



    // Robot torque
    this->Be.resize(22,10);
    this->Be.setZero();
    this->Be(LeftHipRoll,    0) = 25.;
    this->Be(LeftHipYaw,     1) = 25.;
    this->Be(LeftHipPitch,   2) = 16.;
    this->Be(LeftKneePitch,  3) = 16.;
    this->Be(LeftFootPitch,  4) = 50.;
    this->Be(RightHipRoll,   5) = 25.;
    this->Be(RightHipYaw,    6) = 25.;
    this->Be(RightHipPitch,  7) = 16.;
    this->Be(RightKneePitch, 8) = 16.;
    this->Be(RightFootPitch, 9) = 50.;

    // Contact conditions
    double mu = .6;
    double foot_length = 0.0873;
//    double foot_length = 0.05;
    /*
    double half_foot_length = 0.06;

//    this->contact_pyramid.resize(9, 5);
//    this->contact_pyramid << 0., 0., -1., 0., 0.,
//    1., 0., -mu/sqrt(2.), 0., 0.,
//    -1., 0., -mu/sqrt(2.), 0., 0.,
//    0., 1., -mu/sqrt(2.), 0., 0.,
//    0., -1., -mu/sqrt(2.), 0., 0.,
//    0., -half_foot_length, 0., 0., 1.,
//    0., -half_foot_length, 0., 0, -1.,
//    0., 0., -half_foot_length, 1., 0.,
//    0., 0., -half_foot_length, -1., 0.;


//    this->contact_pyramid.resize(8, 5);
//    this->contact_pyramid << 0., 0., -1., 0., 0.,
//    1., 0., -mu/sqrt(2.), 0., 0.,
//    -1., 0., -mu/sqrt(2.), 0., 0.,
//    0., 1., -mu/sqrt(2.), 0., 0.,
//    0., -1., -mu/sqrt(2.), 0., 0.,
//    0., 0., 0., 0.,         -1.,
//    0., 0., 0., 1.,  -mu/sqrt(2.),
//    0., 0., 0., -1., -mu/sqrt(2.);
     */



//    double foot_length = 0.14;
    //    double foot_length = 0.14;
    this->contact_pyramid.resize(9, 5);
    this->contact_pyramid << 0., 0., -1., 0., 0.,
    1., 0., -mu/sqrt(2.), 0., 0.,
    -1., 0., -mu/sqrt(2.), 0., 0.,
    0., 1., -mu/sqrt(2.), 0., 0.,
    0., -1., -mu/sqrt(2.), 0., 0.,
    0., 0., -foot_length*mu, 0., 1.,
    0., 0., -foot_length*mu, 0, -1.,
    0., 0., -foot_length*mu, 1., 0.,
    0., 0., -foot_length*mu, -1., 0.;

    // Safe torque bounds
    this->torque_bounds.resize(10);
    this->torque_bounds << 112.5/25, 112.5/25, 195.2/16, 195.2/16, 0.9,
    112.5/25, 112.5/25, 195.2/16, 195.2/16, 0.9;

    // Bounds on in the air
    this->lb.resize(this->nV);
    this->lb << -INFTY * VectorXd::Ones(this->qsize),      // ddq
            -this->torque_bounds,    // torque
            -INFTY * VectorXd::Ones(this->holsize); //holonomic
    this->ub.resize(this->nV);
    this->ub << INFTY * VectorXd::Ones(this->qsize),       // ddq
            this->torque_bounds,     // torque
            INFTY * VectorXd::Ones(this->holsize); //holonomic
}

TSCQPsolver::TSCQPsolver(ros::NodeHandle &nh, cassie_model::Cassie &robot, int control_mode) : nh(&nh), tarsusSolver(robot) {
    this->robot = &robot;
    this->config.control_mode = control_mode;

    if (this->config.control_mode == 1) {
        //walking with line contact
        this->config.outputsize = 9;
        this->config.holsize = 11;
        this->config.qsize = 22;
        this->config.usize = 10;
        this->config.othercons_size = 9;
    } else if (this->config.control_mode == 0){
        //standing
        this->config.outputsize = 6;
        this->config.holsize = 16;
        this->config.qsize = 22;
        this->config.usize = 10;
        this->config.othercons_size = 18;
    } else if (this->config.control_mode == -1){
        //in air
        this->config.outputsize = 10;
        this->config.holsize = 12;
        this->config.qsize = 22;
        this->config.usize = 10;
        this->config.othercons_size = 0;
    }else {
        ROS_ERROR("INVALID CONTROL MODE");
    }

    this->config.nV = this->config.qsize + this->config.usize + this->config.holsize;
    this->config.nC = this->config.qsize + this->config.othercons_size + this->config.holsize;

    // Create the QP solver
    qpsolver = new SQProblem(this->config.nV, this->config.nC); // (num vars, num constr)

    // Set QP Options
    Options options;
    options.setToMPC(); //options.setToDefault();
    options.enableRegularisation = BT_FALSE;
    options.printLevel = PL_LOW;//PL_MEDIUM;
    qpsolver->setOptions( options );

    // Parameter checker
    this->config.paramChecker.init(nh.getNamespace() + "/stepping");

    // All the storage
    this->cache.init(&this->config);
    this->memory.init();
    this->config.init();

    this->reconfigure();
}

void TSCQPsolver::reset() {
    this->cache.reset();
    this->memory.reset();
}

bool TSCQPsolver::reconfigure() {
    std::cout << "Polling QP rosparams under: " << this->config.paramChecker.node.getNamespace() << std::endl;
    this->config.reconfigure();
    return true;
}

void TSCQPsolver::update(VectorXd &u, OUTPUT_HLIP &output) {
    this->cache.u = this->getTorqueQP(output);
    u = this->cache.u;
}

VectorXd TSCQPsolver::getTorqueQP(OUTPUT_HLIP &output) {
    // Formulate the QP
    // States are X = [ddq; u; F] \in \mathbb{R}^{43} (22,10,11)

    // Output error
    VectorXd eta(this->config.outputsize*2);
    eta << output.cache.ya - output.cache.yd,
    output.cache.dya - output.cache.dyd;



    //use rigid simulation instead
    this->robot->q(LeftHeelSpring) = 0;
    this->robot->q(RightHeelSpring) = 0;
    this->robot->dq(LeftHeelSpring) = 0;
    this->robot->dq(RightHeelSpring) = 0;
    this->robot->q(LeftShinPitch) = 0;
    this->robot->q(RightShinPitch) = 0;
    this->robot->dq(LeftShinPitch) = 0;
    this->robot->dq(RightShinPitch) = 0;

    this->tarsusSolver.update();
    this->robot->q(LeftTarsusPitch)   = this->tarsusSolver.getLeftRigidTarsusPosition();
    this->robot->q(RightTarsusPitch)  = this->tarsusSolver.getRightRigidTarsusPosition();
    this->robot->dq(LeftTarsusPitch)  = this->tarsusSolver.getLeftRigidTarsusVelocity();
    this->robot->dq(RightTarsusPitch) = this->tarsusSolver.getRightRigidTarsusVelocity();


    // Compute model dynamics
    this->robot->dynamics.calcHandC(this->robot->model, this->robot->q, this->robot->dq);

    // Compute the robot constraints
    this->robot->kinematics.update(this->robot->model, this->robot->q, this->robot->dq);

    int inx;
    if (this->config.control_mode == 1) {
        //walking with line contact
        // hol for walking
        inx = 5;
        if (output.getDomain() == 0) {
            //right stance
            this->cache.Js.block(0, 0, inx, this->config.qsize)  << this->robot->kinematics.cache.J_poseRightConstraint;
            this->cache.dJs.block(0, 0, inx, this->config.qsize) << this->robot->kinematics.cache.Jdot_poseRightConstraint;
        } else {
            this->cache.Js.block(0, 0, inx, this->config.qsize)  << this->robot->kinematics.cache.J_poseLeftConstraint;
            this->cache.dJs.block(0, 0, inx, this->config.qsize)  << this->robot->kinematics.cache.Jdot_poseLeftConstraint;
        }
    } else if (this->config.control_mode == 0){
        //standing
        inx = 10;
        this->cache.Js.block(0, 0, inx, this->config.qsize) << this->robot->kinematics.cache.J_poseLeftConstraint,
                                                                            this->robot->kinematics.cache.J_poseRightConstraint;
        this->cache.dJs.block(0, 0, inx, this->config.qsize) << this->robot->kinematics.cache.Jdot_poseLeftConstraint,
                                                                                this->robot->kinematics.cache.Jdot_poseRightConstraint;

    } else if (this->config.control_mode == -1){
        //in air
        //pelvis fixed in the air
        inx = 6;
        this->cache.Js.block(0,0,inx,inx) << MatrixXd::Identity(inx,inx);
    }

/*
//    // hol for walking with two point contact
//    int inx = 5;
//    MatrixXd Jtmp(3,22),Jtmp2(3,22);
//    Jtmp.setZero();Jtmp2.setZero();
//
//    if (output.getDomain() == 0) {
//        //right stance
//        SymFunction::J_rightHeel_constraint(Jtmp,this->robot->q);
//        SymFunction::J_rightToe_constraint(Jtmp2,this->robot->q);
//        this->cache.Js.block(0, 0, inx, this->config.qsize)  << Jtmp,
//                                                                               Jtmp2.block(0,0,1,22),
//                                                                               Jtmp2.block(2,0,1,22);
//        SymFunction::Jdot_rightHeel_constraint(Jtmp,this->robot->q, this->robot->dq);
//        SymFunction::Jdot_rightToe_constraint(Jtmp2,this->robot->q, this->robot->dq);
//        this->cache.dJs.block(0, 0, inx, this->config.qsize) << Jtmp,
//                                                                               Jtmp2.block(0,0,1,22),
//                                                                               Jtmp2.block(2,0,1,22);
//    } else {
//        SymFunction::J_leftHeel_constraint(Jtmp,this->robot->q);
//        SymFunction::J_leftToe_constraint(Jtmp2,this->robot->q);
//        this->cache.Js.block(0, 0, inx, this->config.qsize)  << Jtmp,
//                                                                               Jtmp2.block(0,0,1,22),
//                                                                               Jtmp2.block(2,0,1,22);
//        SymFunction::Jdot_leftHeel_constraint(Jtmp,this->robot->q, this->robot->dq);
//        SymFunction::Jdot_leftToe_constraint(Jtmp2,this->robot->q, this->robot->dq);
//        this->cache.dJs.block(0, 0, inx, this->config.qsize) << Jtmp,
//                                                                               Jtmp2.block(0,0,1,22),
//                                                                               Jtmp2.block(2,0,1,22);
//    }
*/



    this->cache.Js.block(inx, 0, 6, this->config.qsize) << this->robot->kinematics.cache.J_achilles,
                                                                           this->robot->kinematics.cache.J_rigid;
    this->cache.dJs.block(inx, 0, 6, this->config.qsize) << this->robot->kinematics.cache.Jdot_achilles,
                                                                             this->robot->kinematics.cache.Jdot_rigid;




    //projected inertia matrix (H=D)
    this->cache.Aconstr.block(0,0,this->config.qsize,this->config.qsize)   << this->robot->dynamics.H;
    //projected input matrix
    this->cache.Aconstr.block(0,this->config.qsize, this->config.qsize,this->config.usize) << - this->config.Be;
    //projected jacobian
    this->cache.Aconstr.block(0,this->config.qsize+this->config.usize, this->config.qsize,this->config.holsize)  << - this->cache.Js.transpose();
    //constrained dynamics equality constriant
    this->cache.lbA.segment(0,this->config.qsize) = - this->robot->dynamics.C ;
    this->cache.ubA.segment(0,this->config.qsize) = this->cache.lbA.segment(0,this->config.qsize);


    //add friction cone if walking/standing ->other_constraints
    if (this->config.control_mode == 1) {
        // Friction cone for walking
        this->cache.Aconstr.block(this->config.qsize, this->config.qsize+this->config.usize, 9,5) = this->config.contact_pyramid;
        //    this->cache.Aconstr.block(this->config.qsize+9, this->config.qsize+this->config.usize+5, 9,5) = this->config.contact_pyramid;
        this->cache.lbA.segment(this->config.qsize,this->config.othercons_size).setConstant(-INFTY); // -inf
        this->cache.ubA.segment(this->config.qsize,this->config.othercons_size).setZero();

        // for walking : zero stance foot torque
        // Zero stance foot torque
        if (output.getDomain() == 0) {
            // Right Stance
            this->config.lb(22+10 - 1) = 0.;
            this->config.ub(22+10 - 1) = 0.;

            this->config.lb(22+5 - 1) = -this->config.torque_bounds(4);
            this->config.ub(22+5 - 1) =  this->config.torque_bounds(4);
        } else {
            // Left Stance
            this->config.lb(22+5 - 1) = 0.;
            this->config.ub(22+5 - 1) = 0.;

            this->config.lb(22+10 - 1) = -this->config.torque_bounds(9);
            this->config.ub(22+10 - 1) =  this->config.torque_bounds(9);
        }

    } else if (this->config.control_mode == 0) {
        // Friction cone for standing
        this->cache.Aconstr.block(this->config.qsize, this->config.qsize+this->config.usize, 9,5) = this->config.contact_pyramid;
            this->cache.Aconstr.block(this->config.qsize+9, this->config.qsize+this->config.usize+5, 9,5) = this->config.contact_pyramid;
        this->cache.lbA.segment(this->config.qsize,this->config.othercons_size).setConstant(-INFTY); // -inf
        this->cache.ubA.segment(this->config.qsize,this->config.othercons_size).setZero();
    }

/*
//    // two point contact friction cone
//    this->cache.Aconstr.block(this->config.qsize, this->config.qsize+this->config.usize, 5,3) = this->config.contact_pyramid.block(0,0,5,3);
//    this->cache.Aconstr.block(this->config.qsize+5, this->config.qsize+this->config.usize+3, 5,3) = this->config.contact_pyramid.block(0,0,5,3);
//    this->cache.lbA.segment(this->config.qsize,this->config.othercons_size).setConstant(-INFTY); // -inf
//    this->cache.ubA.segment(this->config.qsize,this->config.othercons_size).setZero();

//    // two point contact friction cone
//    this->cache.Aconstr.block(this->config.qsize, this->config.qsize+this->config.usize, 8,5) = this->config.contact_pyramid;
//    this->cache.lbA.segment(this->config.qsize,this->config.othercons_size).setConstant(-INFTY); // -inf
//    this->cache.ubA.segment(this->config.qsize,this->config.othercons_size).setZero();
*/



    //holonomic constriant term
    this->cache.Aconstr.block(this->config.qsize+this->config.othercons_size,0,this->config.holsize,this->config.qsize) = this->cache.Js;
    this->cache.lbA.segment(this->config.qsize+this->config.othercons_size,this->config.holsize) = -this->cache.dJs*this->robot->dq;
    this->cache.ubA.segment(this->config.qsize+this->config.othercons_size,this->config.holsize) = -this->cache.dJs*this->robot->dq;

    // Construct the cost
    // 0.5*x'*H*x + f'*x
    // Task space terms
    MatrixXd JY  = output.cache.Dya.block(0,0,this->config.outputsize,22) ;
    MatrixXd dJY = output.cache.DLfya.block(0,0,this->config.outputsize,22) ;
    this->cache.b_y = output.cache.d2yd - dJY * this->robot->dq - this->config.Kpy.cwiseProduct(eta.segment(0,this->config.outputsize)) - this->config.Kdy.cwiseProduct(eta.segment(this->config.outputsize,this->config.outputsize));

//    MatrixXd output_Su(this->config.outputsize,this->config.outputsize);
//    output_Su.setZero();
//    output_Su.diagonal() = this->config.output_selec;
//    JY = output_Su*JY;
//    dJY = output_Su*dJY;
//    this->cache.b_y = output_Su*this->cache.b_y;

//    // uniform weight on all outputs
//    this->cache.G.block(0,0,this->config.qsize,this->config.qsize) = (JY.transpose() * JY) * pow(this->config.w_outputs,2) ;
//    this->cache.g.segment(0, this->config.qsize) << -pow(this->config.w_outputs, 2) * JY.transpose() * this->cache.b_y;

    //different weights for output
    this->cache.G.block(0,0,this->config.qsize,this->config.qsize) = (JY.transpose() * this->config.W_outputs * JY) ;
    this->cache.g.segment(0,this->config.qsize) << - JY.transpose() * this->config.W_outputs * this->cache.b_y;


//    this->cache.G.block(this->config.qsize, this->config.qsize, this->config.nV - this->config.qsize,
//                        this->config.nV - this->config.qsize)
//                        += 0.000001 * MatrixXd::Identity(this->config.nV - this->config.qsize, this->config.nV - this->config.qsize);


    this->cache.G += this->config.Reg_Matrix;

    // Flatten matrices in row-major format.
    Map<VectorXd> Gflat(this->cache.G.data(), this->cache.G.size());
    //Map<VectorXd> Gflat(G.data(), G.size());
    Map<VectorXd> AConstrFlat(this->cache.Aconstr.data(), this->cache.Aconstr.size());

    // Run the QP
    qpOASES::returnValue success = RET_QP_NOT_SOLVED;
    int_t nWSR = this->config.nQPIter;
    if (this->memory.qp_initialized) {
        success = this->qpsolver->hotstart(static_cast<real_t*>(Gflat.data()), static_cast<real_t*>(this->cache.g.data()),
                                           static_cast<real_t*>(AConstrFlat.data()),
                                           static_cast<real_t*>(this->config.lb.data()), static_cast<real_t*>(this->config.ub.data()),
                                           static_cast<real_t*>(this->cache.lbA.data()),static_cast<real_t*>(this->cache.ubA.data()),
                                           nWSR );
    } else {
        success = this->qpsolver->init(static_cast<real_t*>(Gflat.data()), static_cast<real_t*>(this->cache.g.data()),
                                       static_cast<real_t*>(AConstrFlat.data()),
                                       static_cast<real_t*>(this->config.lb.data()), static_cast<real_t*>(this->config.ub.data()),
                                       static_cast<real_t*>(this->cache.lbA.data()),static_cast<real_t*>(this->cache.ubA.data()),
                                       nWSR );
        this->memory.qp_initialized = true;
    }
    VectorXd torqueScale(10);
    torqueScale << 25., 25., 16., 16., 50., 25., 25., 16., 16., 50.;
    // Get solution
    this->cache.qpsol.setZero();
    this->qpsolver->getPrimalSolution(static_cast<real_t*>(this->cache.qpsol.data()));
    if (success != SUCCESSFUL_RETURN) {
        ROS_WARN("THE QP DID NOT CONVERGE!");
        this->qpsolver->reset();
        this->memory.qp_initialized = false;
        this->memory.u_prev.setZero();
    } else {
//        this->memory.u_prev << this->cache.qpsol.segment(this->config.qsize,this->config.usize);
        this->cache.u << torqueScale.cwiseProduct(this->cache.qpsol.segment(this->config.qsize,this->config.usize));
    }

    double obj = this->qpsolver->getObjVal();
//    std::cout << "obj: " << obj << std::endl;

    this->cache.ddqtar << this->cache.qpsol.segment(0,this->config.qsize);
    this->cache.Fdes << this->cache.qpsol.segment(this->config.qsize+this->config.usize,this->config.holsize);
    this->cache.d2y =JY*this->cache.ddqtar + dJY * this->robot->dq;//JY*this->cache.ddqtar - this->cache.b_y; //

//    std::cout << "error squared:  " << 0.5* pow(this->config.w_outputs,2)*(JY*this->cache.ddqtar-this->cache.b_y).transpose()*(JY*this->cache.ddqtar-this->cache.b_y) << std::endl;
//    std::cout << "reg in objective: " << 0.5* this->cache.qpsol.segment(this->config.qsize,this->config.nV-this->config.qsize).transpose()*this->cache.qpsol.segment(this->config.qsize,this->config.nV-this->config.qsize)*0.000001 <<std::endl;

    // Return
    return this->cache.u;
}


void TSCQPsolver::getDebug(VectorXf &dbg) {
    // Use floats for logging size and speed
    //76 if QP
    //74 if hardconstriant
    dbg <<
//    static_cast<float>(this->cache.V),     // 1
    this->cache.u.cast <float> (),         // 10
    this->cache.Fdes.cast <float> (),      // 11/9/12 if hardconstriant/in air
//    static_cast<float>(this->cache.delta), // 1
    this->cache.d2y.cast <float> (),       //9/10
    this->cache.ddqtar.cast<float>(),      //22
    this->robot->q.cast<float>();         //22
}


/*
VectorXd TSCQPsolver::getTorqueID(OUTPUT_HLIP &output) {
    // https://journals.sagepub.com/doi/pdf/10.1177/0278364910388677
    // Learning, planning, and control for quadruped locomotion over challenging terrain
    // Controller based on ^^
    MatrixXd J(9,10);
    if (output.getDomain() == 0) {
        SymFunction::J_yaRightStance(J, this->robot->q);
    } else {
        SymFunction::J_yaLeftStance(J, this->robot->q);
    }

    // Get output PD tracking torques
    this->cache.u = - J.completeOrthogonalDecomposition().solve(this->config.Kp.cwiseProduct(output.cache.ya - output.cache.yd) + this->config.Kd.cwiseProduct(output.cache.dya - output.cache.dyd));

    // Compute model dynamics
    MatrixXd Ge(22,1); Ge.setZero();
    SymFunction::Ge_cassie_v4(Ge, this->robot->q);
    this->robot->dynamics.calcHandC(this->robot->model, this->robot->q, this->robot->dq);

    // Compute the robot constraints
    MatrixXd Jc(11,22);
    double gravScale = 0.;
    if (output.getDomain() == 0) {
        gravScale = this->config.right_stance_gravity_scale;

        Jc << this->robot->kinematics.cache.J_achilles,
        this->robot->kinematics.cache.J_poseRightConstraint,
        this->robot->kinematics.cache.J_rigid;
    } else {
        gravScale = this->config.left_stance_gravity_scale;

        Jc << this->robot->kinematics.cache.J_achilles,
        this->robot->kinematics.cache.J_poseLeftConstraint,
        this->robot->kinematics.cache.J_rigid;
    }
    this->robot->dynamics.C = this->robot->dynamics.C - (1. - gravScale) * Ge;

    // Compute feedforward
    // https://journals.sagepub.com/doi/pdf/10.1177/0278364913519834
    // https://journals.sagepub.com/doi/pdf/10.1177/0278364910388677
    // https://ieeexplore.ieee.org/stamp/stamp.jsp?arnumber=5509646
    // Selection matrices for constrained/unconstrained
    // QR decomposition
    HouseholderQR<MatrixXd> qr(Jc.transpose());
    MatrixXd Q, RO, R; Q.setZero(); R.setZero();
    RO = qr.matrixQR().triangularView<Upper>();
    Q = qr.householderQ();
    R = RO.block(0,0,11,11);

    // Feedforward
    VectorXd H(22);
    H = this->robot->dynamics.H*(output.cache.ddqd) + this->robot->dynamics.C;
    output.cache.uff = (this->config.Su*Q.transpose()*this->config.Be).completeOrthogonalDecomposition().solve(this->config.Su) * Q.transpose() * H;
    this->cache.u += output.cache.uff;

    // Compute GRF and force control
    VectorXd forces(11);
    forces = R.inverse() * this->config.Sc * Q.transpose() * (H - this->config.Be*this->cache.u);
    this->cache.Fdes << forces;

    // Store the resulting grf
    this->cache.Fdes.setZero();
    this->cache.Fdes.segment(0,2) = forces.segment(0,2); // Pushrods
    this->cache.Fdes.segment(7,4) = forces.segment(7,4); // Pseudo-fixed springs
    if (output.getDomain() == 0) {
        this->cache.Fdes.segment(2,5) = forces.segment(2,5); // Left foot
    } else {
        this->cache.Fdes.segment(2,5) = forces.segment(2,5); // Right foot
    }

    // Cap saggital moment on foot from torque
    double moment_scale = 1.0;
    double foot_length = 0.14;
    double pitch_constr = moment_scale * forces(4) * foot_length / 2;
    if (output.getDomain() == 0) {
        this->cache.u(9) += this->config.u_stancetoe_offset*50.;
        if (this->cache.u(9) > pitch_constr)
            this->cache.u(9) = pitch_constr;
        if (this->cache.u(9) < -pitch_constr)
            this->cache.u(9) = -pitch_constr;
    } else {
        this->cache.u(4) += this->config.u_stancetoe_offset*50.;
        if (this->cache.u(4) > pitch_constr)
            this->cache.u(4) = pitch_constr;
        if (this->cache.u(4) < -pitch_constr)
            this->cache.u(4) = -pitch_constr;
    }

    // Return
    return this->cache.u;
}
*/
