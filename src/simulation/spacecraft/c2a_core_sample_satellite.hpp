/**
 * @file c2a_core_sample_satellite.hpp
 * @brief User side spacecraft class for C2A-CORE
 */

#ifndef S2E_SIMULATION_SPACECRAFT_C2A_CORE_SAMPLE_SATELLITE_HPP_
#define S2E_SIMULATION_SPACECRAFT_C2A_CORE_SAMPLE_SATELLITE_HPP_

#include <simulation/spacecraft/spacecraft.hpp>

#include "c2a_core_sample_components.hpp"

/**
 * @class C2aCoreSampleSat
 * @brief User side spacecraft class for C2A-CORE
 */
class C2aCoreSampleSat : public Spacecraft {
 public:
  /**
   * @fn C2aCoreSampleSat
   * @brief Constructor
   */
  C2aCoreSampleSat(const SimulationConfiguration* simulation_configuration, const GlobalEnvironment* global_environment,
                   const unsigned int spacecraft_id);

 private:
};

#endif  // S2E_SIMULATION_SPACECRAFT_C2A_CORE_SAMPLE_SATELLITE_HPP_
