#include "Camel.h"

namespace race_sim {
	Camel::Camel() {
		name = "Верблюд";
		speed = 10;
		timeBeforeRest = 30;
		timeRest = 0;
	}

	double Camel::timeResult(double distanceValue) {

		result = distanceValue / speed;
		int n = 0;

		if (result != timeBeforeRest) {
			n = static_cast<int>(result) / static_cast<int>(timeBeforeRest);;
		}

		for (int i = 0; i < n; ++i) {
			if (i == 1) { timeRest = 5; }
			else { timeRest = 8; }

			result += timeRest;
		}

		return result;
	}
}