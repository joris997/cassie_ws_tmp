// //
// // Created by dm on 8/12/21.
// //

// // ROS
// #include <ros/ros.h>
// #include "std_msgs/Int16.h"

// // Robot descriptions
// #include <cassie_description/cassie_model.hpp>
// #include <cassie_common_toolbox/RadioButtonMap.hpp>

// // Controllers
// #include <cassie_controllers/standing_control_qp.hpp>

// #include <cassie_controllers/walking_onedomain.hpp>

// #include <cassie_controllers/TSCQPsolver.hpp>
// #include <cassie_controllers/OUTPUT_HZD.hpp>
// #include <cassie_controllers/OUTPUT_HLIP.hpp>

// // Load in message types
// #include <cassie_common_toolbox/callback_helpers.hpp>
// #include <cassie_common_toolbox/cassie_control_msg.h>
// #include <cassie_common_toolbox/cassie_proprioception_msg.h>
// #include <cassie_common_toolbox/cassie_velocity_estimation_msg.h>

// #include <realtime_utilities/timing.hpp>

// // Logging
// #include <fstream>
// #include <cmath>

// using namespace Eigen;
// using namespace cassie_model;

// // Robotic states
// static bool is_initialized = false;
// static Cassie robot;
// static VectorXd radio(16);
// static int mode_command = -1; // Coming from the radio
// // static int controller_type = 0;
// std_msgs::Int16 controller_type;


// // Callback for proprioception subscriber
// void proprioception_callback(const cassie_common_toolbox::cassie_proprioception_msg::ConstPtr &propmsg) {
//     unpack_proprioception(propmsg, robot.q, robot.dq, radio, robot.gyroscope, robot.accelerometer, robot.torque,
//                           robot.leftContact, robot.rightContact);
//     get_proprioception_orientation(*propmsg, robot.q, robot.dq, robot.quat_pelvis);
//     mode_command = (int) radio(RadioButtonMap::SB);

//     is_initialized = true;

// }

// void velocity_estimation_callback(const cassie_common_toolbox::cassie_velocity_estimation_msg::ConstPtr &velmsg) {
//     robot.dq(BasePosX) = velmsg->linear_velocity.x;
//     robot.dq(BasePosY) = velmsg->linear_velocity.y;
//     robot.dq(BasePosZ) = velmsg->linear_velocity.z;
// }

// // void controller_type_callback(const std_msgs::Int16::ConstPtr& msg){
// //     controller_type = msg.data;
// // }

// // Main node
// int main(int argc, char *argv[]) {
//     // Establish the current ROS node and associated timing
//     ros::init(argc, argv, "locomotion_control_new");
//     ros::NodeHandle nh("/cassie/locomotion_control");

//     // Setup ROS publisher/subscriber networks
//     double dt_des;
//     ros::param::get("/cassie/locomotion_control/dt", dt_des);
//     int control_mode;
//     ros::param::get("/cassie/locomotion_control/HLIP/control_mode", control_mode);
//     double control_switch_time;
//     ros::param::get("/cassie/locomotion_control/HLIP/control_switch",control_switch_time);

//     int qpulog_size;
//     int qplog_size;

//     if (control_mode == 1) {
//         //walking
//         qpulog_size = 74;
//         qplog_size = 83;
//     } else if (control_mode == 0) {
//         //standing
//         qpulog_size = 76;
//         qplog_size = 68;
//     } else if (control_mode == -1) {
//         //in air
//         qpulog_size = 76;
//         qplog_size = 88;
//     }


//     ros::Rate looprate(1 / dt_des); // Run at 2 kHz
//     ros::Publisher controller_pub = nh.advertise<cassie_common_toolbox::cassie_control_msg>("/cassie_control", 1);
//     ros::Subscriber vel_est_sub = nh.subscribe("/cassie_velocity_estimation", 1, velocity_estimation_callback,
//                                                ros::TransportHints().tcpNoDelay(true));
//     ros::Subscriber proprioception_sub = nh.subscribe("/cassie_proprioception", 1, proprioception_callback,
//                                                       ros::TransportHints().tcpNoDelay(true));
//     // ros::Subscriber controller_sub = nh.subscribe("/cassie_controller",1,controller_type_callback);

//     cassie_common_toolbox::cassie_control_msg control_message;

//     // Create the associated controllers
//     bool is_one_domain = true;
//     ros::param::get("/cassie/locomotion_control/use_one_domain", is_one_domain);


//     StandingControlQP stand_control(nh, robot); //kept intact
//     Walking1DControl walk_control(nh, robot);


// //    OUTPUT_HZD output(nh,robot);
//     OUTPUT_HLIP output(nh, robot, control_mode);
//     TSCQPsolver tscqpsolver(nh, robot, control_mode);


//     // Logging things
//     VectorXf qplog(qplog_size);
//     qplog.setZero();//for HLIP
//     VectorXf qpulog(qpulog_size);
//     qpulog.setZero();
//     VectorXf standlog(60);
//     standlog.setZero();

//     // std::fstream logfileStand, logfileWalk, logfileWalku;
//     std::ofstream logfileStand, logfileWalk, logfileWalku;
//     bool log_controller = true;
//     ros::param::get("/cassie/log_controller", log_controller);
//     if (log_controller) {
//         std::string home = getenv("HOME");
//         {
//             std::string path = home + "/datalog/qp_y_walk_log_HLIP.txt";
//             logfileWalk.open(path);//, std::ios::out | std::ios::binary);
//         }
//         {
//             std::string path = home + "/datalog/qp_u_walk_log_HLIP.txt";
//             logfileWalku.open(path);//, std::ios::out | std::ios::binary);
//         }
//         {
//             std::string path = home + "/datalog/stand_log_HLIP.txt";
//             logfileStand.open(path);//, std::ios::out | std::ios::binary);
//         }
//     }

//     // Listen/respond loop
//     int mode = -1;
//     VectorXd u(10);
//     u.setZero();
//     VectorXd u_old(10);
//     u_old.setZero();

//     while (ros::ok()) {
//         // Do things
//         ros::spinOnce();

//         // Zero the torque and set the message timestamp
//         control_message.motor_torque.fill(0.0);

//         // This node does the initial control. We switch to the SLIP 
//         // controller after some time (see control_switch in .launch)
//         double secs = ros::Time::now().toSec();
//         // if (secs > control_switch_time){
//         if (secs > control_switch_time){
//             continue;
//         }

//         /*
//         // Main state machine
//         if (is_initialized) {

//             switch (mode) {
//                 case -1 : {
//                     for (unsigned int i = 0; i < 10; ++i) {
//                         control_message.motor_torque[i] = 0.0;
//                     }

//                     if (mode_command > -1) {
//                         ROS_INFO("Transitioning to standing control!");
//                         stand_control.reset();
//                         mode = 0;
//                     }
//                     break;
//                 }
//                 case 0 : {

//                     stand_control.update(radio, u);
//                     for (unsigned int i = 0; i < 10; ++i) {
//                         control_message.motor_torque[i] = u(i);
//                     }
//                     if (log_controller) {
//                         stand_control.getDebug(standlog);
//                         logfileStand.write(reinterpret_cast<char *>(standlog.data()),
//                                            (standlog.size()) * sizeof(float));
//                     }

//                     if (mode_command < 0) {
//                         ROS_INFO("Transitioning to null control!");
//                         mode = -1;
//                     }
//                     if ((mode_command > 0) && (stand_control.isReadyToTransition())) {
//                         ROS_INFO("Transitioning to stepping control!");
//                         output.reset();
//                         tscqpsolver.reset();
//                         mode = 1;
//                         stand_control.reset();
//                     }
//                     break;
//                 }
//                 case 1: {
//                     output.update(radio);
//                     tscqpsolver.update(u, output);

//                     for (unsigned int i = 0; i < 10; ++i) {
//                         control_message.motor_torque[i] = u(i);
//                     }

//                     if (log_controller) {
// //                        walk_control.getDebug(qplog);
//                         output.getDebug(qplog);
//                         tscqpsolver.getDebug(qpulog);

//                         logfileWalk.write(reinterpret_cast<char *>(qplog.data()), (qplog.size()) * sizeof(float));
//                         logfileWalku.write(reinterpret_cast<char *>(qpulog.data()), (qpulog.size()) * sizeof(float));
//                     }

// //                    if ( (mode_command == 0) && ( walk_control.isReadyToTransition() ) ) {

//                     if ((mode_command == 0) && (output.isReadyToTransition())) {
//                         ROS_INFO("Transitioning to standing control!");
// //                        walk_control.reset();
//                         output.reset();
//                         tscqpsolver.reset();
//                         stand_control.reset();
//                         mode = 0;
//                     }
//                     if (mode_command == -1) {
//                         ROS_INFO("Transitioning to null control!");
//                         mode = -1;
//                     }
//                     break;
//                 }
//                 default :
//                     ROS_ERROR("The controller state machine done broke itself...");
//                     return 1;
//             }
//         }
// */

//         /*
//         //skip Jenna's standing controller
//         if (is_initialized) {

//             switch (mode) {
//                 case -1 : {
//                     for (unsigned int i = 0; i < 10; ++i) {
//                         control_message.motor_torque[i] = 0.0;
//                     }
//                     if (mode_command  == 1 ) {
//                         ROS_INFO("Transitioning to stepping control!");
//                         output.reset();
//                         tscqpsolver.reset();
//                         mode = 1;
//                         stand_control.reset();
//                     }
//                     break;
//                 }
//                 case 1: {
//                     output.update(radio);
//                     tscqpsolver.update(u, output);
//                     for (unsigned int i = 0; i < 10; ++i) {
//                         control_message.motor_torque[i] = u(i);
//                     }
//                     if (log_controller) {
//                         output.getDebug(qplog);
//                         tscqpsolver.getDebug(qpulog);

//                         logfileWalk.write(reinterpret_cast<char *>(qplog.data()), (qplog.size()) * sizeof(float));
//                         logfileWalku.write(reinterpret_cast<char *>(qpulog.data()), (qpulog.size()) * sizeof(float));
//                     }
//                     if (mode_command == -1) {
//                         ROS_INFO("Transitioning to null control!");
//                         mode = -1;
//                     }
//                     break;
//                 }
//                 default :
//                     ROS_ERROR("The controller state machine done broke itself...");
//                     return 1;
//             }
//         }
//          */

//         //run Jenna's standing and log my standing data
//         /*
//         // Main state machine
//         if (is_initialized) {

//             switch (mode) {
//                 case -1 : {
//                     for (unsigned int i = 0; i < 10; ++i) {
//                         control_message.motor_torque[i] = 0.0;
//                     }

//                     if (mode_command > -1) {
//                         ROS_INFO("Transitioning to standing control!");
//                         stand_control.reset();
//                         mode = 0;
//                     }
//                     break;
//                 }
//                 case 0 : {
//                     output.update(radio);
//                     tscqpsolver.update(u, output);

//                     stand_control.update(radio, u);
//                     for (unsigned int i = 0; i < 10; ++i) {
//                         control_message.motor_torque[i] = u(i);
//                     }
//                     if (log_controller) {
//                         stand_control.getDebug(standlog);
//                         logfileStand.write(reinterpret_cast<char *>(standlog.data()),
//                                            (standlog.size()) * sizeof(float));
//                         output.getDebug(qplog);
//                         tscqpsolver.getDebug(qpulog);

//                         logfileWalk.write(reinterpret_cast<char *>(qplog.data()), (qplog.size()) * sizeof(float));
//                         logfileWalku.write(reinterpret_cast<char *>(qpulog.data()), (qpulog.size()) * sizeof(float));
//                     }

//                     if (mode_command < 0) {
//                         ROS_INFO("Transitioning to null control!");
//                         mode = -1;
//                     }
//                     if ((mode_command > 0) && (stand_control.isReadyToTransition())) {
//                         ROS_INFO("Transitioning to stepping control!");
//                         output.reset();
//                         tscqpsolver.reset();
//                         mode = 1;
//                         stand_control.reset();
//                     }
//                     break;
//                 }
//                 case 1: {
//                     output.update(radio);
//                     tscqpsolver.update(u, output);

//                     for (unsigned int i = 0; i < 10; ++i) {
//                         control_message.motor_torque[i] = u(i);
//                     }

//                     if (log_controller) {
//                         //                        walk_control.getDebug(qplog);
//                         output.getDebug(qplog);
//                         tscqpsolver.getDebug(qpulog);

//                         logfileWalk.write(reinterpret_cast<char *>(qplog.data()), (qplog.size()) * sizeof(float));
//                         logfileWalku.write(reinterpret_cast<char *>(qpulog.data()), (qpulog.size()) * sizeof(float));
//                     }

//                     //                    if ( (mode_command == 0) && ( walk_control.isReadyToTransition() ) ) {

//                     if ((mode_command == 0) && (output.isReadyToTransition())) {
//                         ROS_INFO("Transitioning to standing control!");
//                         //                        walk_control.reset();
//                         output.reset();
//                         tscqpsolver.reset();
//                         stand_control.reset();
//                         mode = 0;
//                     }
//                     if (mode_command == -1) {
//                         ROS_INFO("Transitioning to null control!");
//                         mode = -1;
//                     }
//                     break;
//                 }
//                 default :
//                     ROS_ERROR("The controller state machine done broke itself...");
//                     return 1;
//             }
//         }
//          */

//         //run Jenna's stepping and log my stepping data

//         // Main state machine
//         if (is_initialized) {
//             switch (mode) {
//                 case -1 : {
//                     for (unsigned int i = 0; i < 10; ++i) {
//                         control_message.motor_torque[i] = 0.0;
//                     }
//                     if (mode_command > -1) {
//                         ROS_INFO("Transitioning to standing control!");
//                         stand_control.reset();
//                         mode = 0;
//                     }
//                     break;
//                 }
//                 case 0 : {
//                     stand_control.update(radio, u);
//                     for (unsigned int i = 0; i < 10; ++i) {
//                         control_message.motor_torque[i] = u(i);
//                     }
//                     if (log_controller) {
//                         stand_control.getDebug(standlog);
//                         // logfileStand.write(reinterpret_cast<char *>(standlog.data()),
//                         //                    (standlog.size()) * sizeof(float));
//                         logfileStand << standlog << "\n\n";
//                     }

//                     if (mode_command < 0) {
//                         ROS_INFO("Transitioning to null control!");
//                         mode = -1;
//                     }
//                     if ((mode_command > 0) && (stand_control.isReadyToTransition())) {
//                         ROS_INFO("Transitioning to stepping control!");
//                         walk_control.reset();
//                         output.reset();
//                         tscqpsolver.reset();
//                         mode = 1;
//                         stand_control.reset();
//                     }
//                     break;
//                 }
//                 case 1: {
//                     output.update(radio);
//                     tscqpsolver.update(u, output);

// //                    walk_control.update(radio,u);

//                     for (unsigned int i = 0; i < 10; ++i) {
//                         control_message.motor_torque[i] = u(i);
//                     }

//                     if (log_controller) {
// //                        walk_control.getDebug(qplog);
//                         output.getDebug(qplog);
//                         tscqpsolver.getDebug(qpulog);

//                         // logfileWalk.write(reinterpret_cast<char *>(qplog.data()), (qplog.size()) * sizeof(float));
//                         // logfileWalku.write(reinterpret_cast<char *>(qpulog.data()), (qpulog.size()) * sizeof(float));

//                         logfileWalk << qplog << "\n\n";
//                         logfileWalku << qpulog << "\n\n";
//                     }

// //                    if ( (mode_command == 0) && ( walk_control.isReadyToTransition() ) ) {
// //
//                     if ((mode_command == 0) && (output.isReadyToTransition())) {
//                         ROS_INFO("Transitioning to standing control!");
//                         walk_control.reset();
//                         output.reset();
//                         tscqpsolver.reset();
//                         stand_control.reset();
//                         mode = 0;
//                     }
//                     if (mode_command == -1) {
//                         ROS_INFO("Transitioning to null control!");
//                         mode = -1;
//                     }
//                     break;
//                 }
//                 default :
//                     ROS_ERROR("The controller state machine done broke itself...");
//                     return 1;
//             }
//         }




//         for (unsigned int i = 0; i < 10; ++i) {
//             bool val = std::isnan(control_message.motor_torque[i]);
//             if (val) {
//                 control_message.motor_torque.fill(0.0);
//                 control_message.header.stamp = ros::Time::now();
//                 controller_pub.publish(control_message);

//                 ROS_ERROR("The controller generated a nan torque!!!!!!!");
//                 return 1;
//             }
//         }

//         // Publish the control message
//         control_message.header.stamp = ros::Time::now();
//         controller_pub.publish(control_message);

//         looprate.sleep();
//     }

//     if (log_controller) {
//         logfileWalk.close();
//         logfileWalku.close();
//         logfileStand.close();
//     }

//     return 0;
// }










//
// Created by dm on 8/12/21.
//

// ROS
#include <ros/ros.h>

// Robot descriptions
#include <cassie_description/cassie_model.hpp>
#include <cassie_common_toolbox/RadioButtonMap.hpp>

// Controllers
#include <cassie_controllers/standing_control_qp.hpp>

#include <cassie_controllers/walking_onedomain.hpp>

#include <cassie_controllers/TSCQPsolver.hpp>
#include <cassie_controllers/TSCQPsolver_DEBUG.hpp>
#include <cassie_controllers/OUTPUT_HZD.hpp>
#include <cassie_controllers/OUTPUT_HLIP.hpp>

// Load in message types
#include <cassie_common_toolbox/callback_helpers.hpp>
#include <cassie_common_toolbox/cassie_control_msg.h>
#include <cassie_common_toolbox/cassie_proprioception_msg.h>
#include <cassie_common_toolbox/cassie_velocity_estimation_msg.h>

#include <realtime_utilities/timing.hpp>

// Logging
#include <fstream>
#include <cmath>

using namespace Eigen;
using namespace cassie_model;

// Robotic states
static bool is_initialized = false;
static Cassie robot;
static VectorXd radio(16);
static int mode_command = -1; // Coming from the radio


// Callback for proprioception subscriber
void proprioception_callback(const cassie_common_toolbox::cassie_proprioception_msg::ConstPtr &propmsg) {
    unpack_proprioception(propmsg, robot.q, robot.dq, radio, robot.gyroscope, robot.accelerometer, robot.torque,
                          robot.leftContact, robot.rightContact);
    get_proprioception_orientation(*propmsg, robot.q, robot.dq, robot.quat_pelvis);
    mode_command = (int) radio(RadioButtonMap::SB);

    is_initialized = true;

}

void velocity_estimation_callback(const cassie_common_toolbox::cassie_velocity_estimation_msg::ConstPtr &velmsg) {
    robot.dq(BasePosX) = velmsg->linear_velocity.x;
    robot.dq(BasePosY) = velmsg->linear_velocity.y;
    robot.dq(BasePosZ) = velmsg->linear_velocity.z;
}


// Main node
int main(int argc, char *argv[]) {
    // Establish the current ROS node and associated timing
    ros::init(argc, argv, "locomotion_control_new");
    ros::NodeHandle nh("/cassie/locomotion_control");

    // Setup ROS publisher/subscriber networks
    double dt_des;
    ros::param::get("/cassie/locomotion_control/dt", dt_des);
    int control_mode;
    ros::param::get("/cassie/locomotion_control/HLIP/control_mode", control_mode);
    bool isRigid;
    ros::param::get("/cassie/locomotion_control/HLIP/isRigid", isRigid);
    int qpulog_size;
    int qplog_size;

    if (control_mode == 1) {
        //walking
        if (isRigid){
            qpulog_size = 74;
        } else{
            qpulog_size = 70;
        }
        qplog_size = 83+2+5; //HLIP stepping desired speed
    } else if (control_mode == 0) {
        //standing
        if (isRigid){
            qpulog_size = 76;
        } else{
            qpulog_size = 76-4;
        }
        qplog_size = 68;
    } else if (control_mode == -1) {
        //in air
        qpulog_size = 76;
        qplog_size = 88;
    }


    ros::Rate looprate(1 / dt_des); // Run at 2 kHz
    ros::Publisher controller_pub = nh.advertise<cassie_common_toolbox::cassie_control_msg>("/cassie_control", 1);
    ros::Subscriber vel_est_sub = nh.subscribe("/cassie_velocity_estimation", 1, velocity_estimation_callback,
                                               ros::TransportHints().tcpNoDelay(true));
    ros::Subscriber proprioception_sub = nh.subscribe("/cassie_proprioception", 1, proprioception_callback,
                                                      ros::TransportHints().tcpNoDelay(true));

    cassie_common_toolbox::cassie_control_msg control_message;

    // Create the associated controllers
    bool is_one_domain = true;
    ros::param::get("/cassie/locomotion_control/use_one_domain", is_one_domain);


    StandingControlQP stand_control(nh, robot); //kept intact
//    Walking1DControl walk_control(nh, robot);


//    OUTPUT_HZD output(nh,robot);
    OUTPUT_HLIP output(nh, robot, control_mode);
    TSCQPsolver tscqpsolver(nh, robot, control_mode);


    // Logging things
    VectorXf qplog(qplog_size);
    qplog.setZero();//for HLIP
    VectorXf qpulog(qpulog_size);
    qpulog.setZero();
    VectorXf standlog(60);
    standlog.setZero();

    std::ofstream logfileStand, logfileWalk, logfileWalku, logfileTime;
    bool log_controller = true;
    ros::param::get("/cassie/log_controller", log_controller);
    if (log_controller) {
        std::string home = getenv("HOME");
        std::cout << "home: " << home << std::endl;
        {
            std::string path = home + "/cassie_ws_2/log/qp_y_walk_log_SLIP.txt";
            logfileWalk.open(path);
        }
        {
            std::string path = home + "/cassie_ws_2/log/qp_u_walk_log_SLIP.txt";
            logfileWalku.open(path);
        }
        {
            std::string path = home + "/cassie_ws_2/log/stand_log_SLIP.txt";
            logfileStand.open(path);
        }
        {
            std::string path = home + "/cassie_ws_2/log/time_log_SLIP.txt";
            logfileTime.open(path);
        }
    }

    // Listen/respond loop
    int mode = -1;
    VectorXd u(10);
    u.setZero();
    VectorXd u_old(10);
    u_old.setZero();

    while (ros::ok()) {
        // Do things
        ros::spinOnce();

        // Zero the torque and set the message timestamp
        control_message.motor_torque.fill(0.0);

        double secs = ros::Time::now().toSec();

        // Main state machine
        if (is_initialized) {
            switch (mode) {
                case -1 : {
                    for (unsigned int i = 0; i < 10; ++i) {
                        control_message.motor_torque[i] = 0.0;
                    }
                    if (mode_command > -1) {
                        ROS_INFO("Transitioning to standing control!");
                        stand_control.reset();
                        mode = 0;
                    }
                    break;
                }
                case 0 : {
                    stand_control.update(radio, u);
                    for (unsigned int i = 0; i < 10; ++i) {
                        control_message.motor_torque[i] = u(i);
                    }
                    if (log_controller) {
                        stand_control.getDebug(standlog);
                        logfileStand.write(reinterpret_cast<char *>(standlog.data()),
                                           (standlog.size()) * sizeof(float));
                    }

                    if (mode_command < 0) {
                        ROS_INFO("Transitioning to null control!");
                        mode = -1;
                    }
                    if ((mode_command > 0) && (stand_control.isReadyToTransition())) {
                        ROS_INFO("Transitioning to stepping control!");
//                        walk_control.reset();
                        output.reset();
                        tscqpsolver.reset();
                        mode = 1;
                        stand_control.reset();
                    }
                    break;
                }
                case 1: {
                    output.update(radio);
                    tscqpsolver.update(u, output);

//                    walk_control.update(radio,u);

                    for (unsigned int i = 0; i < 10; ++i) {
                        control_message.motor_torque[i] = u(i);
                    }

                    if (log_controller) {
//                        walk_control.getDebug(qplog);
                        output.getDebug(qplog);
                        tscqpsolver.getDebug(qpulog);

                        logfileWalk << qplog << "\n\n";
                        logfileWalku << qpulog << "\n\n";
                        logfileTime << secs << "\n";
                    }

                    if ((mode_command == 0) && (output.isReadyToTransition())) {
                        ROS_INFO("Transitioning to standing control!");
                        // walk_control.reset();
                        output.reset();
                        tscqpsolver.reset();
                        stand_control.reset();
                        mode = 0;
                    }
                    if (mode_command == -1) {
                        ROS_INFO("Transitioning to null control!");
                        mode = -1;
                    }
                    break;
                }
                default :
                    ROS_ERROR("The controller state machine done broke itself...");
                    return 1;
            }
        }




        for (unsigned int i = 0; i < 10; ++i) {
            bool val = std::isnan(control_message.motor_torque[i]);
            if (val) {
                control_message.motor_torque.fill(0.0);
                control_message.header.stamp = ros::Time::now();
                controller_pub.publish(control_message);

                ROS_ERROR("The controller generated a nan torque!!!!!!!");
                return 1;
            }
        }

        // Publish the control message
        control_message.header.stamp = ros::Time::now();
        controller_pub.publish(control_message);

        looprate.sleep();
    }

    if (log_controller) {
        logfileWalk.close();
        logfileWalku.close();
        logfileStand.close();
        logfileTime.close();
    }

    return 0;
}
