#include "c2a_core_sample_case.hpp"

C2aCoreSampleCase::C2aCoreSampleCase(std::string ini_fname) : SimulationCase(ini_fname) {}

C2aCoreSampleCase::~C2aCoreSampleCase() { delete spacecraft_; }

void C2aCoreSampleCase::InitializeTargetObjects() {
  // Instantiate the target of the simulation
  // `spacecraft_id` corresponds to the index of `spacecraft_file` in simulation_base.ini
  const int spacecraft_id = 0;
  spacecraft_ = new C2aCoreSampleSat(&simulation_configuration_, global_environment_, spacecraft_id);

  // Register the log output
  spacecraft_->LogSetup(*(simulation_configuration_.main_logger_));
}

void C2aCoreSampleCase::UpdateTargetObjects() {
  // Spacecraft Update
  spacecraft_->Update(&(global_environment_->GetSimulationTime()));
}

std::string C2aCoreSampleCase::GetLogHeader() const {
  std::string str_tmp = "";

  return str_tmp;
}

std::string C2aCoreSampleCase::GetLogValue() const {
  std::string str_tmp = "";

  return str_tmp;
}
