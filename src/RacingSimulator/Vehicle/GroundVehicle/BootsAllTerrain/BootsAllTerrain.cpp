#include "BootsAllTerrain.h"

namespace race_sim {
	BootsAllTerrain::BootsAllTerrain() {
		name = "Ботинки-вездеходы";
		speed = 6;
		timeBeforeRest = 60;
		timeRest = 0;
	}

	double BootsAllTerrain::calculateTimeResult(double distanceValue) {

		int numberOfStops = 0;
		double timeMoving = 0;

		double distanceBeforeRest = speed * timeBeforeRest;

		do {
			if (distanceBeforeRest < distanceValue) {

				numberOfStops++;

				if (numberOfStops == 1) { timeRest = 10; }
				else if (numberOfStops >= 2) { timeRest = 5; }

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