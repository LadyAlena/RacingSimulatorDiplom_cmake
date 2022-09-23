#pragma once

#include <string>

#include "TypeOfRace.h"

namespace race_sim {

	class Vehicle;

	class Race {
	public:
		Race();

		std::string getName();
		TypeOfRace getTypeOfRace();

		Vehicle** start(const double distance, Vehicle** listOfReg, const int countParticipants);

	protected:

		std::string nameRace;
		TypeOfRace typeRace;

		double distance;
		Vehicle** listOfReg;
		int countParticipants;
	};
}