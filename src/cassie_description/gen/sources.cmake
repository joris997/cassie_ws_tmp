set(SRCS
    gen/src/Be_cassie_v4.cc
    gen/src/De_cassie_v4.cc
    gen/src/Ge_cassie_v4.cc
    # gen/src/Ce_cassie_v4.cc
    gen/src/F_spring_cassie_v4.cc
    # gen/src/Fvectot_cassie_v4.cc

    gen/src/p_achilles_constraint.cc
    gen/src/p_leftPoint_constraint.cc
    gen/src/p_rightPoint_constraint.cc
    gen/src/p_leftHeel_constraint.cc
    gen/src/p_leftToe_constraint.cc
    gen/src/p_leftSole_constraint.cc
    gen/src/p_rightHeel_constraint.cc
    gen/src/p_rightToe_constraint.cc
    gen/src/p_rightSole_constraint.cc
    gen/src/p_left_fixed_constraint.cc
    gen/src/p_right_fixed_constraint.cc
    gen/src/J_achilles_constraint.cc
    gen/src/J_leftPoint_constraint.cc
    gen/src/J_rightPoint_constraint.cc
    gen/src/J_leftHeel_constraint.cc
    gen/src/J_leftToe_constraint.cc
    gen/src/J_leftSole_constraint.cc
    gen/src/J_rightHeel_constraint.cc
    gen/src/J_rightToe_constraint.cc
    gen/src/J_rightSole_constraint.cc
    gen/src/J_left_fixed_constraint.cc
    gen/src/J_right_fixed_constraint.cc
    gen/src/Jdot_leftPoint_constraint.cc
    gen/src/Jdot_rightPoint_constraint.cc
    gen/src/Jdot_achilles_constraint.cc
    gen/src/Jdot_leftHeel_constraint.cc
    gen/src/Jdot_leftToe_constraint.cc
    gen/src/Jdot_leftSole_constraint.cc
    gen/src/Jdot_rightHeel_constraint.cc
    gen/src/Jdot_rightToe_constraint.cc
    gen/src/Jdot_rightSole_constraint.cc
    gen/src/Jdot_left_fixed_constraint.cc
    gen/src/Jdot_right_fixed_constraint.cc

    gen/src/p_com_LeftStance.cc
    gen/src/J_com_LeftStance.cc
    gen/src/p_com_RightStance.cc
    gen/src/J_com_RightStance.cc
    gen/src/Jdot_com_LeftStance.cc 
    gen/src/Jdot_com_RightStance.cc
    gen/src/p_com_absolute.cc
    gen/src/dp_com_absolute.cc

    gen/src/pose_leftFoot.cc
    gen/src/pose_rightFoot.cc
    gen/src/J_leftFoot.cc
    gen/src/J_rightFoot.cc
    gen/src/p_leftToe.cc
    gen/src/position_leftFoot.cc
    gen/src/position_rightFoot.cc
    gen/src/J_position_leftFoot.cc
    gen/src/J_position_rightFoot.cc
    gen/src/p_leftToe.cc
    gen/src/p_rightToe.cc
    gen/src/J_leftToe.cc
    gen/src/J_rightToe.cc
    gen/src/yaLeftStance.cc
    gen/src/yaRightStance.cc
    gen/src/yaStandCOM.cc
    gen/src/dyaLeftStance.cc
    gen/src/dyaRightStance.cc
    gen/src/dyaStandCOM.cc
    gen/src/J_yaLeftStance.cc
    gen/src/J_yaRightStance.cc
    gen/src/Jya_standCOM.cc
    gen/src/DLfya_LeftStanceActual.cc
    gen/src/DLfya_RightStanceActual.cc
    gen/src/leftLegPitch.cc
    gen/src/rightLegPitch.cc
    gen/src/leftLegPitchVelocity.cc
    gen/src/rightLegPitchVelocity.cc
    gen/src/leftLegRoll.cc
    gen/src/rightLegRoll.cc
    gen/src/leftLegRollVelocity.cc
    gen/src/rightLegRollVelocity.cc
    gen/src/DLfya_standCOM.cc
    gen/src/Jdot_yaLeftStance.cc
    gen/src/Jdot_yaRightStance.cc
    gen/src/Dya_LeftStanceActual.cc
    gen/src/Dya_RightStanceActual.cc
    gen/src/Dya_standCOM.cc

    gen/src/yaStandCOM_new.cc
    gen/src/dyaStandCOM_new.cc
    gen/src/Dya_standCOM_new.cc
    gen/src/DLfya_standCOM_new.cc


    gen/src/yaRightStance_new.cc
    gen/src/yaLeftStance_new.cc
    gen/src/dyaRightStance_new.cc
    gen/src/dyaLeftStance_new.cc
    gen/src/J_yaRightStance_new.cc
    gen/src/J_yaLeftStance_new.cc
    gen/src/J_yaRightStance_all.cc
    gen/src/J_yaLeftStance_all.cc
    gen/src/Jdot_yRightStanceActual.cc
    gen/src/Jdot_yLeftStanceActual.cc
    gen/src/Dya_RightStanceActual_new.cc
    gen/src/Dya_LeftStanceActual_new.cc
    gen/src/DLfya_RightStanceActual_new.cc
    gen/src/DLfya_LeftStanceActual_new.cc
    gen/src/CentroidalMomentum.cc

    gen/src/J_rightFootPitchYaw.cc
    gen/src/dJ_rightFootPitchYaw.cc
    gen/src/J_leftFootPitchYaw.cc
    gen/src/dJ_leftFootPitchYaw.cc

    # human SLIP outputs 
    gen/src/ya1_SLIP.cc 
    gen/src/dya1_SLIP.cc 
    gen/src/Dya_1Actual_SLIP.cc 
    gen/src/DLfya_1Actual_SLIP.cc

    gen/src/yaLeftStance_SLIP.cc 
    gen/src/yaRightStance_SLIP.cc 
    gen/src/dyaLeftStance_SLIP.cc
    gen/src/dyaRightStance_SLIP.cc

    gen/src/J_yaLeftStance_SLIP.cc 
    gen/src/J_yaRightStance_SLIP.cc
    gen/src/J_yaLeftStance_all_SLIP.cc 
    gen/src/J_yaRightStance_all_SLIP.cc
    gen/src/Jdot_yLeftStanceActual_SLIP.cc 
    gen/src/Jdot_yRightStanceActual_SLIP.cc 
    gen/src/Dya_LeftStanceActual_SLIP.cc 
    gen/src/Dya_RightStanceActual_SLIP.cc 
    gen/src/DLfya_LeftStanceActual_SLIP.cc 
    gen/src/DLfya_RightStanceActual_SLIP.cc

    # with xcom in RD2 outputs
    gen/src/yaLeftStance_SLIP_with_xcom.cc 
    gen/src/yaRightStance_SLIP_with_xcom.cc 
    gen/src/dyaLeftStance_SLIP_with_xcom.cc
    gen/src/dyaRightStance_SLIP_with_xcom.cc

    gen/src/J_yaLeftStance_SLIP_with_xcom.cc 
    gen/src/J_yaRightStance_SLIP_with_xcom.cc
    gen/src/J_yaLeftStance_all_SLIP_with_xcom.cc 
    gen/src/J_yaRightStance_all_SLIP_with_xcom.cc
    gen/src/Jdot_yLeftStanceActual_SLIP_with_xcom.cc 
    gen/src/Jdot_yRightStanceActual_SLIP_with_xcom.cc 
    gen/src/Dya_LeftStanceActual_SLIP_with_xcom.cc 
    gen/src/Dya_RightStanceActual_SLIP_with_xcom.cc 
    gen/src/DLfya_LeftStanceActual_SLIP_with_xcom.cc 
    gen/src/DLfya_RightStanceActual_SLIP_with_xcom.cc

    # outputs for Xiaobin's EKF
    gen/src/footPositionLeft
    gen/src/footPositionRight 
    gen/src/J_footPositionLeft
    gen/src/J_footPositionRight

        )
include_directories(
    gen/include
    gen/include/frost_expr
    gen/include/frost_expr/dynamics
    gen/include/frost_expr/kinematics
    gen/include/frost_expr/constraints
    gen/include/frost_expr/outputs
    gen/include/frost_expr/Xiaobin_outputs
    gen/include/frost_expr/Joris_outputs
    )
