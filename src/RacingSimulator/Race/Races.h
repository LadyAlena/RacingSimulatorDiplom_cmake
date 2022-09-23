#pragma once

#include "AirRace/AirRace.h"
#include "GroundRace/GroundRace.h"
#include "GroundAndAirRace/GroundAndAirRace.h"

namespace race_sim {
	struct Races {
		GroundRace gRace;
		AirRace aRace;
		GroundAndAirRace gaRace;
	};
}
