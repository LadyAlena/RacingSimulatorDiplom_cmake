#pragma once

#include "AirVehicle.h"

namespace race_sim {
	class Magicarpet : public AirVehicle {
	public:
		Magicarpet();

	protected:
		double timeResult(double distanceValue) override;
	};
}
