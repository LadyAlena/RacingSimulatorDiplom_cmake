#include "BootsAllTerrain.h"

namespace race_sim {
	BootsAllTerrain::BootsAllTerrain() {
		name = "Ботинки-вездеходы";
		speed = 6;
		timeBeforeRest = 60;
		timeRest = 0;
	}

	double BootsAllTerrain::timeResult(double distanceValue) {

		result = distanceValue / speed;
		int n = 0;

		if (result != timeBeforeRest) {
			n = static_cast<int>(result) / static_cast<int>(timeBeforeRest);;
		}

		for (int i = 0; i < n; ++i) {
			if (i == 1) { timeRest = 10; }
			else { timeRest = 5; }
			result += timeRest;
		}

		return result;
	}
}