#pragma once

#include "Vehicle.h"

namespace race_sim {
	class AirVehicle : public Vehicle {
	public:
		AirVehicle();

	protected:
		unsigned int coefficientDistanceReduction;
	};
}