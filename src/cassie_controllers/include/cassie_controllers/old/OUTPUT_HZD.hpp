
#ifndef OUTPUT_HZD_HPP
#define OUTPUT_HZD_HPP

#include <cassie_description/cassie_model.hpp>
#include <ros_utilities/ros_utilities.hpp>
#include <cassie_common_toolbox/PhaseVariable.hpp>
#include <cassie_common_toolbox/smoothing.hpp>
#include <std_srvs/Empty.h>
#include <ros_utilities/timing.hpp>
#include <cassie_controllers/feedforward_controller.hpp>
#include <qpOASES.hpp>
#include <control_utilities/filters.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_estimation/rigidtarsus_solver.hpp>
#include <Eigen/Sparse>

USING_NAMESPACE_QPOASES

class OUTPUT_HZD {
public:

    OUTPUT_HZD(ros::NodeHandle &nh, cassie_model::Cassie &robot);
    void update(VectorXd &radio); //update output
    void reset();
    bool reconfigure();
    bool isReadyToTransition() {return this->memory.readyToStop;}
    int getDomain() {return this->memory.iDomain;}
    void getDebug(VectorXf &dbg);

    /**
* @brief Computations that can be reproduced given a Config and Memory object
* Meant to only be valid during one computation frame. Anything meant to persist across time should be stored in Memory.
*/
    struct Cache {
        //later
        // y = ya(t,q) - yd(t,q)
        // dy = d/dx(y)*dx + dydt
        // ddy = d/dx(dy)*dx + ddydt

        //from SymFunction
        VectorXd ya;
        VectorXd dya;
        MatrixXd Dya;
        MatrixXd DLfya;

        //compute from bezier polynomial
        VectorXd yd;
        VectorXd dyd;
        VectorXd d2yd;

        //compute from library
        VectorXd ddqd;
        VectorXd pd;
        VectorXd vd;
        VectorXd Fd;
        VectorXd uff;

        //compute from updateRaibert
        VectorXd raibert_offset;

        void init();
        void reset();
    } cache;

private:
    typedef enum {
        PelvisRoll = 0,
        PelvisPitch = 1,
        StanceHipYaw = 2,
        StanceLegLength = 3,
        SwingLegLength = 4,
        SwingLegPitch = 5,
        SwingHipRoll = 6,
        SwingHipYaw = 7,
        SwingFootPitch = 8
    }HLIPOutputEnum;



    /**
    * @brief Data meant to persist across data frames
    */
    struct Memory {
        // Timer to compute phase variable
        ros_utilities::Timer timer = ros_utilities::Timer(true);
        //contact domain
        int iDomain;
        bool isInitialized;

        //??????
        bool readyToStop;
        bool queueStop;
        VectorXd yd_last;
        VectorXd dyd_last;

        VectorXd raibert_offset_last;
        double   leg_angle_offset;
        double   leg_roll_offset;

        VectorXd vd_integral_error;

        MatrixXd paramCurrent;

        Vector2d raibert_deltaX;
        Vector2d raibert_deltaY;
        Vector2d lastStepVelocity;
        Vector2d velocityAllocator;
        int nVelocitySamplesThisStep;
//        double lastTau;
//        double s_feet; // (left) -1 <--> 1 (right)


        void init();
        void reset();
    } memory;

    /**
    * @brief Persistent controller configurations
    */
    struct Config {
        bool isSim;
        //used for nextDomain
        int nDomain;
        // get Phase variable
        double time_scale;


        double vx_offset;
        double vy_offset;
        double leg_angle_offset_center;


        //affect yd
        double swing_foot_offset;


        double stoppable_velocity_threshold;

        //compute guard
        bool use_contact_switching;
        //used in updateRaibert
        bool swing_angle_absolute;
        double raibert_KpX;
        double raibert_KpY;
        double raibert_KdX;
        double raibert_KdY;
        double raibert_KiX;
        double raibert_KiY;

        //updateAccelerations
        double ddq_KpX;
        double ddq_KdX;
        double ddq_KiX;
        double ddq_KpY;
        double ddq_KdY;
        double ddq_KiY;


        //?
        double velocity_integrator_bleed_constant;

        double vdx_ub;
        double vdx_lb;
        double vdy_ub;
        double vdy_lb;
        //update forces
        double Kp_grf_leglength;
        double Kd_grf_leglength;
        double k1_grf;
        double k2_grf;
        double k3_grf;
        double k4_grf;
        double k_grf_offset;

        double force_z_scale;
        double force_sp_scale;

        struct GaitLibrary {
            struct StanceParameters{
                std::vector< std::vector<VectorXd> > amat_array;
                std::vector< std::vector<VectorXd> > apos_base_array;
                std::vector< std::vector<VectorXd> > avelocity_array;
                std::vector< std::vector<VectorXd> > addq_array;
                std::vector< std::vector<VectorXd> > af_array;
                std::vector< std::vector<VectorXd> > au_array;

                void resize_vectors(unsigned long sz) {
                    amat_array.resize(sz);
                    apos_base_array.resize(sz);
                    avelocity_array.resize(sz);
                    addq_array.resize(sz);
                    af_array.resize(sz);
                    au_array.resize(sz);
                }
            };
            StanceParameters left;
            StanceParameters right;
            int nDomain;
            Vector2d phaseRange;
            VectorXd vd_x;
            VectorXd vd_y;

        } gaitlib;

        // Parameter checker
        ros_utilities::ParamChecker paramChecker;

        // Methods
        void init();
        void reconfigure();

    } config;

    // Pointer to the controlling nodehandle and related ROS things
    ros::NodeHandle *nh;
//    ros::ServiceServer reconfigureService;

    control_utilities::LowPassFilter lpVdX    = control_utilities::LowPassFilter(0.001, 0.75);
    control_utilities::LowPassFilter lpVdY    = control_utilities::LowPassFilter(0.001, 0.25);
    control_utilities::LowPassFilter lpVdTurn = control_utilities::LowPassFilter(0.001, 0.25);

    control_utilities::LowPassFilter lpVaX = control_utilities::LowPassFilter(0.001, 0.0001);
    control_utilities::LowPassFilter lpVaY = control_utilities::LowPassFilter(0.001, 0.0001);

    control_utilities::LowPassFilter lpVaXlastStep = control_utilities::LowPassFilter(0.001, 0.0001);
    control_utilities::LowPassFilter lpVaYlastStep = control_utilities::LowPassFilter(0.001, 0.0001);

    control_utilities::RateLimiter rateRaibertX    = control_utilities::RateLimiter(-75, 75); // (-0.2, 0.2);
    control_utilities::RateLimiter rateRaibertY    = control_utilities::RateLimiter(-75, 75); // (-0.2, 0.2);

    control_utilities::RateLimiter rateStepX    = control_utilities::RateLimiter(-0.15, 0.15);
    control_utilities::RateLimiter rateStepY    = control_utilities::RateLimiter(-0.10, 0.10);

    control_utilities::RateLimiter rateJoyX    = control_utilities::RateLimiter(-0.30, 0.30);
    control_utilities::RateLimiter rateJoyY    = control_utilities::RateLimiter(-0.30, 0.30);
    control_utilities::RateLimiter rateJoyTurn = control_utilities::RateLimiter(-0.15, 0.15);

    cassie_common_toolbox::MovingAverage stepPeriodAverager = cassie_common_toolbox::MovingAverage(400, 2); // Moving average for one step period (T=0.4s)

    // Pointer to robot model
    cassie_model::Cassie *robot;

    // Feedforward controller
//    feedforward_underactuated ff;

    // Gait phasing variable
    PhaseVariable phase;

    // Swing leg tarsus ik solver
    RigidTarsusSolver tarsusSolver;

    // Private methods
    void nextDomain();
    void computeGuard(bool requestTransition);
    void computeActual(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya);
    void computeDesired(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd);

    void updateTurning(double yawUpdate);
    void updateRaibert(double xVd, double yVd);
    void updateAccelerations(double xVd, double yVd);
    void updateForces(double xVd, double yVd);
    void computeLibrary();

    int SwingLegInverseKinematics(VectorXd &qmd, VectorXd &dqmd, VectorXd &ddqmd);
};


#endif // OUTPUT_HZD_HPP
