/**
 * @file Factory.h
 * @author Scott Rasmussen (scott.rasmussen@zaita.com)
 * @github https://github.com/Zaita
 * @date Dec 7, 2015
 * @section LICENSE
 *
 * Copyright NIWA Science �2015 - www.niwa.co.nz
 *
 * @section DESCRIPTION
 *
 * << Add Description >>
 */
#ifndef SOURCE_ESTIMABLETRANSFORMATIONS_FACTORY_H_
#define SOURCE_ESTIMABLETRANSFORMATIONS_FACTORY_H_

// headers
#include <string>

#include "EstimableTransformation.h"

// namespaces
namespace niwa {
namespace estimabletransformations {

// classes
class Factory {
public:
  static EstimableTransformation* Create(shared_ptr<Model> model, const string& object_type, const string& sub_type);

private:
  Factory()          = delete;
  virtual ~Factory() = delete;
};

} /* namespace estimabletransformations */
} /* namespace niwa */

#endif /* SOURCE_ESTIMABLETRANSFORMATIONS_FACTORY_H_ */
