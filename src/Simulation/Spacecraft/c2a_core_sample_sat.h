#pragma once

#include "Spacecraft.h"
#include "c2a_core_sample_components.h"

class C2aCoreSampleSat : public Spacecraft {
 public:
  C2aCoreSampleSat(SimulationConfig* sim_config, const GlobalEnvironment* glo_env, const int sat_id);

 private:
};
