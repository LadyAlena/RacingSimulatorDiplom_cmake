#pragma once

#include <string>

namespace realiz_convert_data {
	class ConvertData
	{
	public:
		int StringToInt(const std::string enterStr);
		double StringToDouble(const std::string enterStr);
	};
}