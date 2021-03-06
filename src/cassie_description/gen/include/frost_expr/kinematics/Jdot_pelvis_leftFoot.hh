/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 16:09:36 GMT-08:00
 */

#ifndef JDOT_PELVIS_LEFTFOOT_HH
#define JDOT_PELVIS_LEFTFOOT_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void Jdot_pelvis_leftFoot_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void Jdot_pelvis_leftFoot_raw(double *p_output1, const double *var1,const double *var2);

  inline void Jdot_pelvis_leftFoot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jdot_pelvis_leftFoot_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JDOT_PELVIS_LEFTFOOT_HH
