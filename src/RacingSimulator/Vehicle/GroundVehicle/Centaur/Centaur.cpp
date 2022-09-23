#include "Centaur.h"

namespace race_sim {
	Centaur::Centaur() {
		name = "Кентавр";
		speed = 15;
		timeBeforeRest = 8;
		timeRest = 2;
	}

	double Centaur::calculateTimeResult(double distanceValue) {

		double timeMoving = 0;

		double distanceBeforeRest = speed * timeBeforeRest;

		do {
			if (distanceBeforeRest < distanceValue) {

				timeMoving = timeBeforeRest;
				result += timeMoving + timeRest;

			}
			else {
				timeMoving = distanceValue / speed;

				result += timeMoving;
			}

			distanceValue -= timeMoving * speed;

		} while (distanceValue != 0);


		return result;
	}
}