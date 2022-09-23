#include "AirVehicle.h"

namespace race_sim {
	AirVehicle::AirVehicle() {
		name = "Воздушное транспортное средство";
		type = TypeOfVehicle::AIR;
		speed = 0;
		coefficientDistanceReduction = 0;
	}
}