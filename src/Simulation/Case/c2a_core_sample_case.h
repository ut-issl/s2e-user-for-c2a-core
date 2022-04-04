#pragma once

#include "SimulationCase.h"
#include "../Spacecraft/c2a_core_sample_sat.h"

class C2aCoreSampleCase: public SimulationCase
{
public:
  C2aCoreSampleCase(std::string ini_fname);
  virtual ~C2aCoreSampleCase();

  void Initialize();
  void Main();

  virtual std::string GetLogHeader() const;
  virtual std::string GetLogValue() const;

private:
  C2aCoreSampleSat* spacecraft_;
};
