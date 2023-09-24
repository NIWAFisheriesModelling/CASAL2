/**
 * @file HockeyStick.h
 * @author  Arnaud Grüss and Vidette McGregor
 * @version 1.0
 * @date 20/09/2023
 * @section LICENSE
 *
 * Copyright NIWA Science �2023 - www.niwa.co.nz
 *
 * @section DESCRIPTION
 *
 * The time class represents a moment of time.
 *
 * $Date: 2023-09-20 12:00:00 NZ (Wed, 20 Sep 2023) $
 */
#ifndef HOCKEYSTICK_H_
#define HOCKEYSTICK_H_

// Headers
#include "../../Selectivities/Selectivity.h"

// Namespaces
namespace niwa {
namespace selectivities {

/**
 * Class Definition
 */
class HockeyStick : public niwa::Selectivity {
public:
  // Methods
  explicit HockeyStick(shared_ptr<Model> model);
  virtual ~HockeyStick() = default;
  void DoValidate() override final{};

  Double get_value(Double value)  override final;
  Double get_value(unsigned value)  override final; 
 
private:
  // Members
  Double lowedge_;
  Double highedge_;
  Double alpha_;
};

} /* namespace selectivities */
} /* namespace niwa */
#endif /* HOCKEYSTICK_H_ */
