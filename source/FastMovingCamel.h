#pragma once

#include "GroundVehicle.h"

namespace race_sim {
	class FastMovingCamel : public GroundVehicle {
	public:
		FastMovingCamel();

	protected:
		double timeResult(double distanceValue) override;
	};
}