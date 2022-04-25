#pragma once

#include "Vector.hpp"
#include "Dynamics.h"
#include "GlobalEnvironment.h"
#include "LocalEnvironment.h"

#include <Simulation/Spacecraft/InstalledComponents.hpp>

// include for components
#include "OBC_C2A.h"

class C2aCoreSampleComponents : public InstalledComponents
{
public:
  C2aCoreSampleComponents(
    const Dynamics* dynamics,
    const Structure* structure,
    const LocalEnvironment* local_env,
    const GlobalEnvironment* glo_env,
    const SimulationConfig* config
  );
  ~C2aCoreSampleComponents();
  libra::Vector<3> GenerateForce_N_b();
  libra::Vector<3> GenerateTorque_Nm_b();
  void LogSetup(Logger& logger);

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
