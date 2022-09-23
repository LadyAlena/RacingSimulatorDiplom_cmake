#include "GroundVehicle.h"

namespace race_sim {
	GroundVehicle::GroundVehicle() {
		name = "Наземное транспортное средство";
		type = TypeOfVehicle::GROUND;
		speed = 0;
		timeBeforeRest = 0;
		timeRest = 0;
	}
}