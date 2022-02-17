#include "c2a_core_sample_components.h"
#include "Initialize.h"

#ifdef USE_C2A
#include "src_user/Settings/port_config.h"
#endif

C2aCoreSampleComponents::C2aCoreSampleComponents(
  const Dynamics* dynamics,
  const Structure* structure,
  const LocalEnvironment* local_env,
  const GlobalEnvironment* glo_env,
  const SimulationConfig* config,
  ClockGenerator* clock_gen,
  const int sat_id
):dynamics_(dynamics), structure_(structure), local_env_(local_env), glo_env_(glo_env), config_(config)
{
  IniAccess iniAccess = IniAccess(config->sat_file_[0]);
  double compo_step_sec = glo_env_->GetSimTime().GetCompoStepSec();

  obc_ = new OBC_C2A(clock_gen, 100);

  obc_->ConnectComPort(PORT_CH_RS422_MOBC_EXT, 1024, 1024); // UART通信用にとりあえず繋いでおく
}

C2aCoreSampleComponents::~C2aCoreSampleComponents()
{
   // OBC must be deleted the last since it has com ports
  delete obc_;
}

Vector<3> C2aCoreSampleComponents::GenerateForce_b()
{
  // There is no orbit control component, so it remains 0
  Vector<3> force_b_(0.0);
  return force_b_;
};

Vector<3> C2aCoreSampleComponents::GenerateTorque_b()
{
  // No attitude control component
  Vector<3> torque_b_(0.0);
  return torque_b_;
};

void C2aCoreSampleComponents::CompoLogSetUp(Logger & logger)
{
}
