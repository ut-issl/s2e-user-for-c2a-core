#include "c2a_core_sample_case.h"

C2aCoreSampleCase::C2aCoreSampleCase(std::string ini_fname)
: SimulationCase(ini_fname)
{
}

C2aCoreSampleCase::~C2aCoreSampleCase()
{
  delete spacecraft_;
}

void C2aCoreSampleCase::Initialize()
{
  // Instantiate the target of the simulation
  const int sat_id = 0;  // `sat_id=0` corresponds to the index of `sat_file` in Simbase.ini
  spacecraft_ = new C2aCoreSampleSat(&sim_config_, glo_env_, sat_id);

  // Register the log output
  glo_env_->LogSetup(*(sim_config_.main_logger_));
  spacecraft_->LogSetup(*(sim_config_.main_logger_));

  // Write headers to the log
  sim_config_.main_logger_->WriteHeaders();

  // Start the simulation
  std::cout << "\nSimulationDateTime \n";
  glo_env_->GetSimTime().PrintStartDateTime();

}

void C2aCoreSampleCase::Main()
{
  glo_env_->Reset(); // for MonteCarlo Sim
  while (!glo_env_->GetSimTime().GetState().finish)
  {
    // Logging
    if (glo_env_->GetSimTime().GetState().log_output)
    {
      sim_config_.main_logger_->WriteValues();
    }
    // Global Environment Update
    glo_env_->Update();
    // Spacecraft Update
    spacecraft_->Update(&(glo_env_->GetSimTime()));
    // Debug output
    if (glo_env_->GetSimTime().GetState().disp_output)
    {
      std::cout << "Progresss: " << glo_env_->GetSimTime().GetProgressionRate() << "%\r";
    }
  }
}

std::string C2aCoreSampleCase::GetLogHeader() const
{
  std::string str_tmp = "";

  return str_tmp;
}

std::string C2aCoreSampleCase::GetLogValue() const
{
  std::string str_tmp = "";

  return str_tmp;
}
