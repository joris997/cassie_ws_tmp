/*
 * Automatically Generated from Mathematica.
 * Mon 20 Dec 2021 14:46:15 GMT-08:00
 */

#ifndef DYA_RIGHTSTANCEACTUAL_SLIP_WITH_XCOM_HH
#define DYA_RIGHTSTANCEACTUAL_SLIP_WITH_XCOM_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void Dya_RightStanceActual_SLIP_with_xcom_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void Dya_RightStanceActual_SLIP_with_xcom_raw(double *p_output1, const double *var1);

  inline void Dya_RightStanceActual_SLIP_with_xcom(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 10, 44);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Dya_RightStanceActual_SLIP_with_xcom_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DYA_RIGHTSTANCEACTUAL_SLIP_WITH_XCOM_HH
