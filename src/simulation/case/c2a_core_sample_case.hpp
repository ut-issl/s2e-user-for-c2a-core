#pragma once

#include <./simulation/case/simulation_case.hpp>

#include "../spacecraft/c2a_core_sample_satellite.hpp"

class C2aCoreSampleCase : public SimulationCase {
 public:
  C2aCoreSampleCase(std::string ini_fname);
  virtual ~C2aCoreSampleCase();

  virtual std::string GetLogHeader() const;
  virtual std::string GetLogValue() const;

 private:
  C2aCoreSampleSat* spacecraft_;

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
