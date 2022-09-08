#include "menu_operation_error.h"

namespace race_sim {
	menu_operation_error::menu_operation_error(const char* msgError) : std::out_of_range(msgError) {
		this->msgError = msgError;
	}
	const char* menu_operation_error::what() const { return msgError; }
}