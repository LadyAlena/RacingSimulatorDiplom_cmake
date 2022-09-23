#include "racing_simulator_error.h"

namespace race_sim {

	racing_simulator_error::racing_simulator_error(const char* msgError) : std::domain_error(msgError) {
		this->msgError = msgError;
	}

	const char* racing_simulator_error::what() const { return msgError; }

}