#include "Reception.h"

#include <iostream>

#include "Vehicle.h"
#include "TypeOfRace.h"
#include "racing_simulator_error.h"

namespace race_sim {
	Reception::Reception(Vehicle** vehicle, const int countVehicle) {
		this->vehicle = vehicle;
		this->countVehicle = countVehicle;
		countReg = 0;
		listOfReg = NULL;
	}
	Reception::~Reception() {
		delete[] listOfReg;
	}

	bool Reception::registerVehicle(Vehicle* vehicle, const TypeOfRace typeRace) {

		bool resultReg = false;

		if (static_cast<int>(typeRace) != static_cast<int>(vehicle->getTypeOfVehicle()) && (typeRace != TypeOfRace::GROUND_AND_AIR_RACE)) {
			throw racing_simulator_error("Попытка зарегистрировать неправильный тип транспортного средства!");
		}

		if (!vehicle->getReg()) {
			std::cout << vehicle->getName() << " успешно зарегистрирован!" << std::endl;
			resultReg = true;
			vehicle->registrated(resultReg);
			countReg++;
		}
		else {
			std::cout << vehicle->getName() << " уже зарегистрирован!" << std::endl;
		}

		return resultReg;
	}
	Vehicle** Reception::generateListOfReg() {

		if (!countReg) {
			throw racing_simulator_error("Нет зарегестрированнх транспортных средств!");
		}

		listOfReg = new Vehicle * [countReg];

		int k = 0;

		for (int i = 0; i < countReg; ++i) {
			for (int j = k; j < countVehicle; ++j) {
				k = j + 1;
				if (vehicle[j]->getReg()) {
					listOfReg[i] = vehicle[j];
					break;
				}
			}
		}

		return listOfReg;
	}
	int Reception::getCountReg() { return countReg; }
}