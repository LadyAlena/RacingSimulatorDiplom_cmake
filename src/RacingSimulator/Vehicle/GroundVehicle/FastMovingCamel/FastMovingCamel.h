#pragma once

#include "../GroundVehicle.h"

namespace race_sim {
	class FastMovingCamel : public GroundVehicle {
	public:
		FastMovingCamel();

	protected:
		double calculateTimeResult(double distanceValue) override;
	};
}