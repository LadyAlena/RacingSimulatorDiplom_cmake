#pragma once

#include "../GroundVehicle.h"

namespace race_sim {
	class Camel : public GroundVehicle {
	public:
		Camel();

	protected:
		double calculateTimeResult(double distanceValue) override;
	};
}