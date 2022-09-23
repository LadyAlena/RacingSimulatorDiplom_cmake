#pragma once

#include <string>

#include "../Reception/Reception.h"
#include "../Race/Race.h"
#include "../Vehicle/TypeOfVehicle.h"
#include "../Race/TypeOfRace.h"

namespace race_sim {

	class Vehicle {

		friend bool Reception::registerVehicle(Vehicle* vehicle, const TypeOfRace typeRace);
		friend Vehicle** Reception::generateListOfReg();
		friend Vehicle** Race::start(const double distance, Vehicle** listOfReg, const int countParticipants);

	public:
		Vehicle();

		std::string getName();
		TypeOfVehicle getTypeOfVehicle();
		bool getReg();

	protected:

		void sendRegistrationResult(const bool reg);

		virtual double calculateTimeResult(double distanceValue);
		double getResult();


		std::string name;
		TypeOfVehicle type;
		double speed;
		bool reg;
		double result;
	};
}