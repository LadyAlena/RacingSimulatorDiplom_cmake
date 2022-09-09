#include "Centaur.h"

namespace race_sim {
	Centaur::Centaur() {
		name = "Кентавр";
		speed = 15;
		timeBeforeRest = 8;
		timeRest = 2;
	}

	double Centaur::timeResult(double distanceValue) {

		result = distanceValue / speed;
		int n = 0;

		if (result != timeBeforeRest) {
			n = static_cast<int>(result) / static_cast<int>(timeBeforeRest);;
		}

		for (int i = 0; i < n; ++i) {
			result += timeRest;
		}

		return result;
	}
}