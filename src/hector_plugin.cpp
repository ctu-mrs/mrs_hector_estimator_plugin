#include <mrs_uav_state_estimators/estimators/state/state_generic.h>

namespace hector_garmin
{

const char estimator_name[] = "hector_garmin";
const bool is_core_plugin = false;

class HectorGarmin : public mrs_uav_state_estimators::StateGeneric {
public:
  HectorGarmin() : mrs_uav_state_estimators::StateGeneric(estimator_name, is_core_plugin) {
  }

  ~HectorGarmin(void) {
  }
};

}  // namespace hector_garmin

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(hector_garmin::HectorGarmin, mrs_uav_managers::StateEstimator)

