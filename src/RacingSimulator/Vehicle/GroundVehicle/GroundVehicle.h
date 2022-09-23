#pragma once

#include "../Vehicle.h"

namespace race_sim {
	class GroundVehicle : public Vehicle {
	public:
		GroundVehicle();

	protected:
		double timeBeforeRest;
		double timeRest;
	};
}