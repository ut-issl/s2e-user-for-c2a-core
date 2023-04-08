/**
 * @file c2a_core_sample_satellite.cpp
 * @brief User side spacecraft class for C2A-CORE
 */

#include "c2a_core_sample_satellite.hpp"

#include "c2a_core_sample_components.hpp"

C2aCoreSampleSat::C2aCoreSampleSat(SimulationConfiguration* sim_config, const GlobalEnvironment* glo_env, const int sat_id)
    : Spacecraft(sim_config, glo_env, sat_id) {
  components_ = new C2aCoreSampleComponents(dynamics_, structure_, local_environment_, glo_env, sim_config, &clock_generator_);
}
