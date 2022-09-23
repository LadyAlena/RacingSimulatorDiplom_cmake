#pragma once

#include "../GroundVehicle.h"

namespace race_sim {
	class Centaur : public GroundVehicle {
	public:
		Centaur();

	protected:
		double calculateTimeResult(double distanceValue) override;
	};
}