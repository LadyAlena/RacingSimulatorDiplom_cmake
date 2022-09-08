#pragma once

#include <string>

#include "Reception.h"
#include "Race.h"
#include "TypeOfVehicle.h"
#include "TypeOfRace.h"

namespace race_sim {

	class Vehicle {

		friend bool Reception::registerVehicle(Vehicle* vehicle, const TypeOfRace typeRace);
		friend Vehicle** Reception::generateListOfReg();
		friend Vehicle** Race::start(const double distance, Vehicle** listOfReg, const int countParticipants);

	public:
		Vehicle();

		std::string getName();
		TypeOfVehicle getTypeOfVehicle();

	protected:

		void registrated(const bool reg);
		bool getReg();

		virtual double timeResult(double distanceValue);
		double getResult();


		std::string name;
		TypeOfVehicle type;
		double speed;
		bool reg;
		double result;
	};
}