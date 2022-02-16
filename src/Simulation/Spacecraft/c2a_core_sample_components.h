#pragma once

#include "Vector.hpp"
#include "Dynamics.h"
#include "GlobalEnvironment.h"
#include "LocalEnvironment.h"

// include for components
#include "OBC_C2A.h"

class C2aCoreSampleComponents
{
public:
  C2aCoreSampleComponents(
    const Dynamics* dynamics,
    const Structure* structure,
    const LocalEnvironment* local_env,
    const GlobalEnvironment* glo_env,
    const SimulationConfig* config,
    ClockGenerator* clock_gen,
    const int sat_id
  );
  ~C2aCoreSampleComponents();
  libra::Vector<3> GenerateForce_b();
  libra::Vector<3> GenerateTorque_b();
  void CompoLogSetUp(Logger& logger);
private:
  // Components
  OBC_C2A* obc_;

  // References
  const Dynamics* dynamics_;
  const Structure* structure_;
  const LocalEnvironment* local_env_;
  const GlobalEnvironment* glo_env_;
  const SimulationConfig* config_;
};
