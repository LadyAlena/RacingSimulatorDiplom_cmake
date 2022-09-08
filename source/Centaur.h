#pragma once

#include "GroundVehicle.h"

namespace race_sim {
	class Centaur : public GroundVehicle {
	public:
		Centaur();

	protected:
		double timeResult(double distanceValue) override;
	};
}