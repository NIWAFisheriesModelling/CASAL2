/*
 * CorrelationMatrix.cpp
 *
 *  Created on: 28/06/2016
 *      Author: C Marsh
 */

#include "CorrelationMatrix.h"

#include "../../Minimisers/Manager.h"

namespace niwa {
namespace reports {
namespace ublas = boost::numeric::ublas;

/**
 * Default constructor
 */
CorrelationMatrix::CorrelationMatrix() {
  run_mode_    = (RunMode::Type)(RunMode::kEstimation | RunMode::kProfiling);
  model_state_ = State::kIterationComplete;
}

/**
 * Execute the report
 */
void CorrelationMatrix::DoExecute(shared_ptr<Model> model) {
  LOG_TRACE();
  /*
   * This reports the covariance, correlation and Hessian matrix
   */
  auto minimiser_ = model->managers()->minimiser()->active_minimiser();
  if (!minimiser_)
    return;

  correlation_matrix_ = minimiser_->correlation_matrix();

  cache_ << ReportHeader(type_, label_, format_);
  cache_ << "correlation_matrix " << REPORT_R_MATRIX << REPORT_EOL;
  for (unsigned i = 0; i < correlation_matrix_.size1(); ++i) {
    for (unsigned j = 0; j < correlation_matrix_.size2(); ++j) cache_ << correlation_matrix_(i, j) << " ";
    cache_ << REPORT_EOL;
  }
  ready_for_writing_ = true;
}

void CorrelationMatrix::DoPrepareTabular(shared_ptr<Model> model) {
  LOG_INFO() << "Tabular mode for reports of type " << PARAM_CORRELATION_MATRIX << " has not been implemented";
}

} /* namespace reports */
} /* namespace niwa */
