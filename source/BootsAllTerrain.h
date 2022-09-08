#pragma once

#include "GroundVehicle.h"

namespace race_sim {
	class BootsAllTerrain : public GroundVehicle {
	public:
		BootsAllTerrain();

	protected:
		double timeResult(double distanceValue) override;
	};
}