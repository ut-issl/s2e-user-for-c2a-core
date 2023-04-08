/**
 * @file c2a_core_sample_satellite.hpp
 * @brief User side spacecraft class for C2A-CORE
 */

#ifndef S2E_SIMULATION_SPACECRAFT_C2A_CORE_SAMPLE_SATELLITE_HPP_
#define S2E_SIMULATION_SPACECRAFT_C2A_CORE_SAMPLE_SATELLITE_HPP_

#include <simulation/spacecraft/spacecraft.hpp>

#include "c2a_core_sample_components.hpp"

class C2aCoreSampleSat : public Spacecraft {
 public:
  C2aCoreSampleSat(SimulationConfiguration* sim_config, const GlobalEnvironment* glo_env, const int sat_id);

 private:
};

#endif  // S2E_SIMULATION_SPACECRAFT_C2A_CORE_SAMPLE_SATELLITE_HPP_
