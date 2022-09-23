#pragma once

#include <stdexcept>

namespace race_sim {
	class racing_simulator_error : public std::domain_error {
	public:

		racing_simulator_error(const char* msgError);
		const char* what() const override;

	private:
		const char* msgError;
	};
}