#pragma once

#include "BootsAllTerrain.h"
#include "Broomstick.h"
#include "Camel.h"
#include "Centaur.h"
#include "Eagle.h"
#include "FastMovingCamel.h"
#include "Magicarpet.h"

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