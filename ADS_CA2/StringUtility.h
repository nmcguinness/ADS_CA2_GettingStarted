#pragma once
#include <string>
using namespace std;

class StringUtility {
public:

	/// @brief Trims leading and trailing whitespace from a string
	/// @param str String containing whitespace
	/// @return Trimmed string
	static inline std::string trim(std::string str) {
		size_t first = str.find_first_not_of(' ');
		if (first == std::string::npos)
			return "";
		size_t last = str.find_last_not_of(' ');
		return str.substr(first, (last - first + 1));
	}
};