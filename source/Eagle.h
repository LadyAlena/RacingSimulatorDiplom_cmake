﻿#pragma once

#include "AirVehicle.h"

namespace race_sim {
	class Eagle : public AirVehicle {
	public:
		Eagle();

	protected:
		double timeResult(double distanceValue) override;
	};
}