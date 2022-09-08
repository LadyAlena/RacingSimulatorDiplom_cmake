#pragma once

#include "AirVehicle.h"

namespace race_sim {
	class Magicarpet : public AirVehicle {
	public:
		__declspec(dllexport) Magicarpet();

	protected:
		double timeResult(double distanceValue) override;
	};
}