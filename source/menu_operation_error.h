#pragma once

#include <stdexcept>

namespace race_sim {
	class menu_operation_error : public std::out_of_range {
	public:

		menu_operation_error(const char* msgError);
		const char* what() const override;

	private:
		const char* msgError;
	};
}