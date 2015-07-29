/**
 * @file VonBertalanffy.cpp
 * @author  Scott Rasmussen (scott.rasmussen@zaita.com)
 * @date 14/08/2013
 * @section LICENSE
 *
 * Copyright NIWA Science �2013 - www.niwa.co.nz
 *
 */

// headers
#include "VonBertalanffy.h"

#include "Partition/Category.h"
#include "LengthWeights/Manager.h"
#include "TimeSteps/Manager.h"

// namespaces
namespace niwa {
namespace agelengths {

/**
 * Default constructor
 *
 * Bind any parameters that are allowed to be loaded from the configuration files.
 * Set bounds on registered parameters
 * Register any parameters that can be an estimated or utilised in other run modes (e.g profiling, yields, projections etc)
 * Set some initial values
 *
 * Note: The constructor is parsed to generate Latex for the documentation.
 */
VonBertalanffy::VonBertalanffy() {
  parameters_.Bind<Double>(PARAM_LINF, &linf_, "TBA", "")->set_lower_bound(0.0);
  parameters_.Bind<Double>(PARAM_K, &k_, "TBA", "")->set_lower_bound(0.0);
  parameters_.Bind<Double>(PARAM_T0, &t0_, "TBA", "");
  parameters_.Bind<string>(PARAM_LENGTH_WEIGHT, &length_weight_label_, "TBA", "");
  parameters_.Bind<Double>(PARAM_CV_FIRST, &cv_first_, "CV for minimum age class of if no CV2 supplied then this CV is assumed to be constant for all age classes", "", 0.0)->set_lower_bound(0.0);
  parameters_.Bind<Double>(PARAM_CV_LAST, &cv_last_, "CV for maximum age class if supplied, then a CV is calculated for each age class based on linear interpolation between CV1 and CV2", "", 0.0)->set_lower_bound(0.0);
  parameters_.Bind<string>(PARAM_DISTRIBUTION, &distribution_, "TBA", "", PARAM_NORMAL);
  parameters_.Bind<bool>(PARAM_BY_LENGTH, &by_length_, "Specifies if the linear interpolation of CV's is a linear function of mean length at age. Default is just by age", "", true);

  RegisterAsEstimable(PARAM_LINF, &linf_);
  RegisterAsEstimable(PARAM_K, &k_);
  RegisterAsEstimable(PARAM_T0, &t0_);
  RegisterAsEstimable(PARAM_CV_MIN, &cv_first_);
  RegisterAsEstimable(PARAM_CV_MAX, &cv_last_);

}

/**
 * Build any objects that will need to be utilised by this object.
 * Obtain smart_pointers to any objects that will be used by this object.
 */
void VonBertalanffy::DoBuild() {
  length_weight_ = lengthweights::Manager::Instance().GetLengthWeight(length_weight_label_);
  if (!length_weight_)
    LOG_ERROR_P(PARAM_LENGTH_WEIGHT) << "(" << length_weight_label_ << ") could not be found. Have you defined it?";
}

/**
 * Get the mean length of a single population
 *
 * @param year The year we want mean length for
 * @param age The age of the population we want mean length for
 * @return The mean length for 1 member
 */
Double VonBertalanffy::mean_length(unsigned year, unsigned age) {
  Double proportion = time_step_proportions_[timesteps::Manager::Instance().current_time_step()];

  if ((-k_ * ((age + proportion) - t0_)) > 10)
    LOG_ERROR_P(PARAM_K) << "exp(-k*(age-t0)) is enormous. The k or t0 parameters are probably wrong.";

  Double size = linf_ * (1 - exp(-k_ * ((age + proportion) - t0_)));
  if (size < 0.0)
    return 0.0;

  return size;
}

/**
 * Create look up vector of CV's that gets feed into mean_weight
 * And Age Length Key.
 * if cv_last_ and cv_first_ are time varying then this should be built every year
 * also if by_length_ is called, it will be time varying because it calls mean_weight which has time_varying
 * parameters. Otherwise it only needs to be built once a model run I believe
 */
void VonBertalanffy::cv_lookup(unsigned year) {
  unsigned min_age = category -> min_age_;
  unsigned max_age = category -> max_age_;

  if (cv_last_==0) { // A test that is robust... If cv_last_ is not in the input then assume cv_first_ represents the cv for all age classes i.e constant cv
    for (unsigned i = min_age; i <= max_age; ++i) {
      cv_vec_.pusback(cv_first_);
    }
  } else if(by_length_) {  // if passed the first test we have a min and max CV. So ask if this is interpolated by length at age
    for (unsigned i = min_age; i <= max_age; ++i) {
      cv_vec_.pushback((mean_length(year, i) - mean_length(year, min_age)) * (cv_last_ - cv_first_) / (mean_length(year, max_age) - mean_length(year, min_age)) + cv_first_);
    }

  } else {
    // else Do linear interpolation between cv_first_ and cv_last_ based on age class
    for (unsigned i = min_age; i <= max_age; ++i) {
      cv_vec_.pushback(cv_first_ + (cv_last_ - cv_first_) * AS_DOUBLE(i - min_age) / AS_DOUBLE(max_age - min_age));
    }
  }

}


/**
 * Get the mean weight of a single population
 *
 * @param year The year we want mean weight for
 * @param age The age of the population we want mean weight for
 * @return mean weight for 1 member
 */
Double VonBertalanffy::mean_weight(unsigned year, unsigned age) {
  Double size = this->mean_length(year, age);
  Double mean_weight = 0.0; //
   mean_weight = length_weight_->mean_weight(size, distribution_, cv_vec_[age]);
  return mean_weight;
}

} /* namespace agelengths */
} /* namespace niwa */
