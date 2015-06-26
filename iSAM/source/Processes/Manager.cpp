/*
 * Manager.cpp
 *
 *  Created on: 13/12/2012
 *      Author: Admin
 */

#include "Manager.h"

#include "Model/Model.h"
#include "Logging/Logging.h"

namespace niwa {
namespace processes {

Manager::Manager() {
}

Manager::~Manager() noexcept(true) {
}

/**
 * Validate any loaded processes we have.
 */
void Manager::Validate() {
  LOG_TRACE();

  if (objects_.size() == 0)
    LOG_ERROR() << "The configuration file requires you specify at least one type of process. E.g @recruitment, @mortality, @ageing";

  PartitionStructure model_structure = Model::Instance()->partition_structure();

  for (ProcessPtr process : objects_) {
    if ((PartitionStructure)(process->partition_structure() & PartitionStructure::kInvalid) == PartitionStructure::kInvalid)
      LOG_CODE_ERROR() << "Process: " << process->label() << " has not been properly configured to have a partition structure";

    if ((PartitionStructure)(process->partition_structure() & model_structure) != model_structure
        && process->partition_structure() != PartitionStructure::kAny) {
      string label = "unknown";
      ParameterPtr param = process->parameters().Get(PARAM_LABEL);
      if (param)
        label = param->values()[0];

      LOG_ERROR() << process->location() << "the process " << label << " is not allowed to be created when the model type is set to " << Model::Instance()->type();
    }

    process->Validate();
  }
}

/**
 * Return the process with the name passed in as a parameter.
 * If no process is found then an empty pointer will
 * be returned.
 *
 * @param label The name of the process to find
 * @return A pointer to the process or empty pointer
 */
ProcessPtr Manager::GetProcess(const string& label) {
  for (ProcessPtr process : objects_) {
    if (process->label() == label)
      return process;
  }

  return ProcessPtr();
}

} /* namespace processes */
} /* namespace niwa */
