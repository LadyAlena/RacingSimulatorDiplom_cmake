#include "Broomstick.h"

namespace race_sim {
	Broomstick::Broomstick() {
		name = "Метла";
		speed = 20;
	}

	double Broomstick::calculateTimeResult(double distanceValue) {
		coefficientDistanceReduction = static_cast<unsigned int>(distanceValue / 1000);

		if (coefficientDistanceReduction > 100) { distanceValue = 0; }
		else { distanceValue *= (1 - coefficientDistanceReduction / 100.); }

		result = distanceValue / speed;

		return result;
	}
}