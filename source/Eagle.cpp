#include "Eagle.h"

namespace race_sim {
	Eagle::Eagle() {
		name = "Орел";
		speed = 8;
		coefficientDistanceReduction = 6;
	}

	double Eagle::timeResult(double distanceValue) {

		distanceValue *= (1 - coefficientDistanceReduction / 100.);
		result = distanceValue / speed;

		return result;
	}
}