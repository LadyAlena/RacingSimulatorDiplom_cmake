#pragma once

#include "AirRace.h"
#include "GroundRace.h"
#include "GroundAndAirRace.h"

namespace race_sim {
	struct Races {
		GroundRace gRace;
		AirRace aRace;
		GroundAndAirRace gaRace;
	};
}
