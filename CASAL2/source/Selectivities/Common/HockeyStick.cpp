/**
 * @file HockeyStick.cpp
 * @author  Arnaud Grüss & Vidette McGregor
 * @version 1.0
 * @date 20/09/2023
 * @section LICENSE
 *
 * Copyright NIWA Science �2023 - www.niwa.co.nz
 *
 * $Date: 2023-09-20 12:00:00 NZ (Wed, 20 Sep 2023) $
 */

// Headers
#include "HockeyStick.h"

#include "../../Model/Model.h"

// namespaces
namespace niwa {
namespace selectivities {

/**
 * Default Constructor
 */
HockeyStick::HockeyStick(shared_ptr<Model> model) : Selectivity(model) {
  parameters_.Bind<Double>(PARAM_LE, &lowedge_, "The low edge value", "");
  parameters_.Bind<Double>(PARAM_HE, &highedge_, "The high edge value", "");
  parameters_.Bind<Double>(PARAM_ALPHA, &alpha_, "The slope of the hockey stick", "", 1.0);

  RegisterAsAddressable(PARAM_ALPHA, &alpha_);
  RegisterAsAddressable(PARAM_LE, &lowedge_);
  RegisterAsAddressable(PARAM_HE, &highedge_);
  allowed_length_based_in_age_based_model_ = true;

}

/**
 * The core function
 */
Double HockeyStick::get_value(Double value) {
  if (value >= highedge_)
    return 1.0; 
  else if (value <= lowedge_)
    return 0.0; 
  else 
    return alpha_ * ( value - lowedge_ ) / ( highedge_ - lowedge_ ); 
  return 1.0;
}

/**
 * The core function
 */
Double HockeyStick::get_value(unsigned value) {
  if (value >= highedge_)
    return 1.0; 
  else if (value <= lowedge_)
    return 0.0; 
  else 
    return alpha_ * ( value - lowedge_ ) / ( highedge_ - lowedge_ ); 
  return 1.0;
}

} /* namespace selectivities */
} /* namespace niwa */
