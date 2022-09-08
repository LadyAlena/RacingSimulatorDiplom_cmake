#pragma once

#include "AirVehicle.h"

namespace race_sim {
	class Broomstick : public AirVehicle {
	public:
		Broomstick();

	protected:
		double timeResult(double distanceValue) override;
	};
}