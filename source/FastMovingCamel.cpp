#include "FastMovingCamel.h"

namespace race_sim {
	FastMovingCamel::FastMovingCamel() {
		name = "Верблюд-быстроход";
		speed = 40;
		timeBeforeRest = 10;
		timeRest = 0;
	}

	double FastMovingCamel::timeResult(double distanceValue) {

		result = distanceValue / speed;
		int n = static_cast<int>(result) / static_cast<int>(timeBeforeRest);

		for (int i = 0; i < n; ++i) {

			if (i == 1) { timeRest = 5; }
			else if (i == 2) { timeRest = 6.5; }
			else { timeRest = 8; }

			result += timeRest;
		}

		return result;
	}
}