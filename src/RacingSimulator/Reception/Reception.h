#pragma once
#include "../Race/TypeOfRace.h"

namespace race_sim {

	class Vehicle;

	class Reception {
	public:
		Reception(Vehicle** vehicle, const int countVehicle);
		~Reception();

		bool registerVehicle(Vehicle* vehicle, const TypeOfRace typeRacing);
		Vehicle** generateListOfReg();
		int getCountReg();

	private:
		Vehicle** vehicle;
		int countVehicle;

		int countReg;
		Vehicle** listOfReg;
	};
}