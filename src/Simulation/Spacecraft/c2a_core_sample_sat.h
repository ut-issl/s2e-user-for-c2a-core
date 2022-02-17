#pragma once

#include "Spacecraft.h"
#include "c2a_core_sample_components.h"

class C2aCoreSampleSat : public Spacecraft
{
public:
  C2aCoreSampleSat(SimulationConfig* sim_config, const GlobalEnvironment* glo_env, const int sat_id);
  ~C2aCoreSampleSat();

  virtual void Initialize(SimulationConfig* sim_config, const GlobalEnvironment* glo_env, const int sat_id);
  virtual void LogSetup(Logger& logger);
  virtual void Update(const SimTime* sim_time);

private:
  C2aCoreSampleComponents* components_;
};
