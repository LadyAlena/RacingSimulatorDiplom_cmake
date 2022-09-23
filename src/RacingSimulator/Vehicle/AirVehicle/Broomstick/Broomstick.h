#pragma once

#include "../AirVehicle.h"

namespace race_sim {
	class Broomstick : public AirVehicle {
	public:
		Broomstick();

	protected:
		double calculateTimeResult(double distanceValue) override;
	};
}