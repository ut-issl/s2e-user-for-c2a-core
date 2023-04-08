/**
 * @file c2a_core_sample_components.cpp
 * @brief User side components management installed on a spacecraft for C2A-CORE
 */

#include "c2a_core_sample_components.hpp"

#include <library/initialize/initialize_file_access.hpp>

#ifdef USE_C2A
#include "src_user/Settings/port_config.h"
#endif

C2aCoreSampleComponents::C2aCoreSampleComponents(const Dynamics* dynamics, const Structure* structure, const LocalEnvironment* local_env,
                                                 const GlobalEnvironment* glo_env, const SimulationConfiguration* config, ClockGenerator* clock_gen)
    : dynamics_(dynamics), structure_(structure), local_env_(local_env), glo_env_(glo_env), config_(config) {
#ifdef USE_C2A
  obc_ = new ObcWithC2a(clock_gen, 100);

  obc_->ConnectComPort(PORT_CH_RS422_MOBC_EXT, 1024, 1024);  // Connect UART Port
#endif
}

C2aCoreSampleComponents::~C2aCoreSampleComponents() {
  // OBC must be deleted the last since it has com ports
  delete obc_;
}

Vector<3> C2aCoreSampleComponents::GenerateForce_b_N() {
  // There is no orbit control component, so it remains 0
  Vector<3> force_b_N(0.0);
  return force_b_N;
}

Vector<3> C2aCoreSampleComponents::GenerateTorque_b_Nm() {
  // No attitude control component
  Vector<3> torque_b_Nm(0.0);
  return torque_b_Nm;
}

void C2aCoreSampleComponents::LogSetup(Logger& logger) { UNUSED(logger); }
