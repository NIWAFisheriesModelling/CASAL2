/**
 * @file Decreasing.h
 * @author  Scott Rasmussen (scott.rasmussen@zaita.com)
 * @version 1.0
 * @date 14/01/2013
 * @section LICENSE
 *
 * Copyright NIWA Science �2013 - www.niwa.co.nz
 *
 * @section DESCRIPTION
 *
 * The time class represents a moment of time.
 *
 * $Date: 2008-03-04 16:33:32 +1300 (Tue, 04 Mar 2008) $
 */
#ifndef DECREASING_H_
#define DECREASING_H_

// Headers
#include "../../Selectivities/Selectivity.h"

// Namespaces
namespace niwa {
namespace selectivities {

/**
 * Class definition
 */
class Decreasing : public niwa::Selectivity {
public:
  // Methods
  explicit Decreasing(shared_ptr<Model> model);
  virtual ~Decreasing() = default;
  void DoValidate() override final;

  Double get_value(Double value)  override final; 
  Double get_value(unsigned value)  override final; 

private:
  // Members
  Double         decreasing_;
  unsigned       low_;
  unsigned       high_;
  vector<Double> v_;
  Double         alpha_;

  unsigned       lower_length_bin_;
};

} /* namespace selectivities */
} /* namespace niwa */
#endif /* DECREASING_H_ */
