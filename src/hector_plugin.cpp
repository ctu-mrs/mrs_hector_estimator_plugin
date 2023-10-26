#include <mrs_uav_state_estimators/estimators/state/state_generic.h>

namespace hector
{

const char estimator_name[] = "hector";
const bool is_core_plugin = false;

class Hector : public mrs_uav_state_estimators::StateGeneric {
public:
  Hector() : mrs_uav_state_estimators::StateGeneric(estimator_name, is_core_plugin) {
  }

  ~Hector(void) {
  }
};

}  // namespace hector

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(hector::Hector, mrs_uav_managers::StateEstimator)

