#include "FastMovingCamel.h"

namespace race_sim {
	FastMovingCamel::FastMovingCamel() {
		name = "Верблюд-быстроход";
		speed = 40;
		timeBeforeRest = 10;
		timeRest = 0;
	}

	double FastMovingCamel::timeResult(double distanceValue) {

		int numberOfStops = 0;
		double timeMoving = 0;

		double distanceBeforeRest = speed * timeBeforeRest;

		do {
			if (distanceBeforeRest < distanceValue) {

				numberOfStops++;

				if (numberOfStops == 1) { timeRest = 5; }
				else if (numberOfStops == 2) { timeRest = 6.5; }
				else if (numberOfStops > 2) { timeRest = 8; }

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