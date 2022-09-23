#pragma once

#include "GroundVehicle/BootsAllTerrain/BootsAllTerrain.h"
#include "AirVehicle/Broomstick/Broomstick.h"
#include "GroundVehicle/Camel/Camel.h"
#include "GroundVehicle/Centaur/Centaur.h"
#include "AirVehicle/Eagle/Eagle.h"
#include "GroundVehicle/FastMovingCamel/FastMovingCamel.h"
#include "AirVehicle/Magicarpet/Magicarpet.h"

namespace race_sim {
	struct Vehicles {
		BootsAllTerrain boots;
		Broomstick broom;
		Camel camel;
		Centaur centaur;
		Eagle eagle;
		FastMovingCamel fastCamel;
		Magicarpet carpet;
	};
}