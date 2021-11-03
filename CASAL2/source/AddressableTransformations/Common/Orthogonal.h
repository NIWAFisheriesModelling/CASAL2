/**
 * @file Orthogonal.h
 * @author C.Marsh
 * @date 13/04/2017
 * @section LICENSE
 *
 * Copyright NIWA Science �2017 - www.niwa.co.nz
 *
 * @section DESCRIPTION
 *
 * Transfomration parameters x1 and x2 to estimate y1 = x1/x2 and y2 x1 * x2 see the manual for more infomration.
 */
#ifndef SOURCE_ESTIMATETRANSFORMATIONS_CHILDREN_ORTHOGONAL_H_
#define SOURCE_ESTIMATETRANSFORMATIONS_CHILDREN_ORTHOGONAL_H_

// headers
#include "../EstimableTransformation.h"

// namespaces
namespace niwa {
namespace addressableransformations {

/**
 *
 */
class Orthogonal : public AddressableTransformation {
public:
  Orthogonal() = delete;
  explicit Orthogonal(shared_ptr<Model> model);
  virtual ~Orthogonal() = default;
  Double           GetScore() override final;
  void             FillReportCache(ostringstream& cache) override final;
  Double           GetRestoredValue(unsigned index) override final;

protected:
  // methods
  void DoValidate() override final;
  void DoBuild() override final;
  void DoRestore() override final;

private:
  Double quotient_parameter_;
  Double product_parameter_;


};

} /* namespace estimabletransformations */
} /* namespace niwa */

#endif /* SOURCE_ESTIMATETRANSFORMATIONS_CHILDREN_ORTHOGONAL_H_ */
