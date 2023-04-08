/**
 * @file c2a_core_sample_case.hpp
 * @brief User defined simulation case for C2A-CORE
 */

#ifndef S2E_SIMULATION_CASE_C2A_CORE_SAMPLE_CASE_HPP_
#define S2E_SIMULATION_CASE_C2A_CORE_SAMPLE_CASE_HPP_

#include <./simulation/case/simulation_case.hpp>

#include "../spacecraft/c2a_core_sample_satellite.hpp"

/**
 * @class C2aCoreSampleCase
 * @brief User defined simulation case for C2A-CORE
 */
class C2aCoreSampleCase : public SimulationCase {
 public:
  /**
   * @fn C2aCoreSampleCase
   * @brief Constructor
   */
  C2aCoreSampleCase(const std::string initialise_base_file);
  /**
   * @fn ~C2aCoreSampleCase
   * @brief Destructor
   */
  virtual ~C2aCoreSampleCase();

  /**
   * @fn GetLogHeader
   * @brief Override function of GetLogHeader
   */
  virtual std::string GetLogHeader() const;
  /**
   * @fn GetLogValue
   * @brief Override function of GetLogValue
   */
  virtual std::string GetLogValue() const;

 private:
  C2aCoreSampleSatellite* spacecraft_;  //!< Spacecraft Instance

  /**
   * @fn InitializeTargetObjects
   * @brief Override function of InitializeTargetObjects in SimulationCase
   */
  void InitializeTargetObjects();

  /**
   * @fn UpdateTargetObjects
   * @brief Override function of Main in SimulationCase
   */
  void UpdateTargetObjects();
};

#endif  // S2E_SIMULATION_CASE_C2A_CORE_SAMPLE_CASE_HPP_
