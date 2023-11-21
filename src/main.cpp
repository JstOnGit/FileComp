#include "File.h"
#include "NumToStr.h"

#include <iostream>

int main(int argc, char* argv[]) {

	File file1(argv[1]);
	File file2(argv[2]);

	file1.open();
	file2.open();

	unsigned int len;
	if (file1.len < file2.len) {
		std::cout << "File2 is bigger!\n";
		len = file1.len;
	}
	else if (file1.len > file2.len) {
		std::cout << "File1 is bigger!\n";
		len = file2.len;
	}
	else {
		len = file1.len;
	}
	
	bool areEqual = true;
	for (unsigned int i = 0; i < len; i++) {
		if (file1.file[i] != file2.file[i]) {
			std::cout << "First difference at character number: " << i + 1;
			std::cout << "\t\t0x" << numToHexStr(file1.file[i]);
			std::cout << " instead of 0x" << numToHexStr(file2.file[i]) << std::endl;
			areEqual = false;
			break;
		}
	}
	if (areEqual) {
		std::cout << "Files are equal!\n";
	}

	return 0;
}