#include "Magicarpet.h"

namespace race_sim {
	Magicarpet::Magicarpet() {
		name = "Ковер-самолет";
		speed = 10;
	}

	double Magicarpet::calculateTimeResult(double distanceValue) {

		if (distanceValue < 1000) { coefficientDistanceReduction = 0; }
		else if (distanceValue < 5000) { coefficientDistanceReduction = 3; }
		else if (distanceValue < 10000) { coefficientDistanceReduction = 10; }
		else { coefficientDistanceReduction = 5; }

		distanceValue *= (1 - coefficientDistanceReduction / 100.);

		result = distanceValue / speed;

		return result;
	}
}