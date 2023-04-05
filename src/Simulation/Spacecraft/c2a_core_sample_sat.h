#pragma once

#include <simulation/spacecraft/spacecraft.hpp>

#include "c2a_core_sample_components.h"

class C2aCoreSampleSat : public Spacecraft {
 public:
  C2aCoreSampleSat(SimulationConfiguration* sim_config, const GlobalEnvironment* glo_env, const int sat_id);

 private:
};
