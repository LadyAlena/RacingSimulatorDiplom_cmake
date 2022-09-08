#pragma once

#include "GroundVehicle.h"

namespace race_sim {
	class Camel : public GroundVehicle {
	public:
		Camel();

	protected:
		double timeResult(double distanceValue) override;
	};
}