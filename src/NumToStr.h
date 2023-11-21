#pragma once

#include <string>

std::string numToHexStr(char num) {
	std::string str = "";
	char digit;
	while (num) {
		digit = num % 16 + 0x30;
		if (digit > 0x39) {
			digit += 7;
		}
		str = digit + str;
		num /= 16;
	}
	size_t len = str.size();
	while (len < 2) {
		str = '0' + str;
		len++;
	}
	return str;
}