#include "Vehicle.h"

namespace race_sim {
	Vehicle::Vehicle() {
		name = "Транспортное средство";
		type = TypeOfVehicle::VEHICLE_DEFAULT;
		speed = 0;
		reg = false;
		result = 0;
	}

	std::string Vehicle::getName() { return name; }
	TypeOfVehicle Vehicle::getTypeOfVehicle() { return type; }

	void Vehicle::sendRegistrationResult(const bool reg) { this->reg = reg; }
	bool Vehicle::getReg() { return reg; }

	double Vehicle::calculateTimeResult(double distanceValue) { return result; }
	double Vehicle::getResult() { return result; }
}