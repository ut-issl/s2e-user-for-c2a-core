/**
 * @file c2a_core_sample_satellite.cpp
 * @brief User side spacecraft class for C2A-CORE
 */

#include "c2a_core_sample_satellite.hpp"

#include "c2a_core_sample_components.hpp"

C2aCoreSampleSatellite::C2aCoreSampleSatellite(const SimulationConfiguration* simulation_configuration, const GlobalEnvironment* global_environment,
                                               const unsigned int spacecraft_id)
    : Spacecraft(simulation_configuration, global_environment, spacecraft_id) {
  components_ =
      new C2aCoreSampleComponents(dynamics_, structure_, local_environment_, global_environment, simulation_configuration, &clock_generator_);
}
