#include "ConvertData.h"

#include <cmath>

namespace realiz_convert_data {

    int ConvertData::StringToInt(const std::string enterStr) {

        int result = 0;
        size_t size = enterStr.length();

        int check = 0;
        std::string resultStr = "";
        std::string valueStr_i;

        for (int i = 0; i < size; ++i) {
            
            if (enterStr[i] == '+' && i == 0) {
                valueStr_i = "";
            }
            else if (enterStr[i] == '-' && i == 0) {
                valueStr_i = "-";
            }
            else {
                valueStr_i = enterStr[i];
                check = std::stoi(valueStr_i);
            }

            resultStr += valueStr_i;
        }

        result = std::stoi(resultStr);

        return result;
    }

    double ConvertData::StringToDouble(const std::string enterStr) {

        double result = 0.0;
        size_t size = enterStr.length();

        int check = 0;
        std::string resultStr = "";
        std::string valueStr_i;

        for (int i = 0; i < size; ++i) {

            if (enterStr[i] == ',' || enterStr[i] == '.') {
                valueStr_i = ".";
            }
            else if (enterStr[i] == '+' && i == 0) {
                valueStr_i = "";
            }
            else if (enterStr[i] == '-' && i == 0) {
                valueStr_i = "-";
            }
            else {
                valueStr_i = enterStr[i];
                check = std::stoi(valueStr_i);
            }

            resultStr += valueStr_i;
        }

        result = std::stod(resultStr);

        return result;
    }

}