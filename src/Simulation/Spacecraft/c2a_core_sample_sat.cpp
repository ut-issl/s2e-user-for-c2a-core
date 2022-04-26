#include "c2a_core_sample_sat.h"
#include "c2a_core_sample_components.h"

C2aCoreSampleSat::C2aCoreSampleSat(SimulationConfig *sim_config, const GlobalEnvironment *glo_env, const int sat_id)
    : Spacecraft(sim_config, glo_env, sat_id)
{
  components_ = new C2aCoreSampleComponents(dynamics_, structure_, local_env_, glo_env, sim_config, &clock_gen_);
}
