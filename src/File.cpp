#include "File.h"

#include <fstream>

File::File(std::string filePath) {
	m_filePath = filePath;
}

void File::open() {
	std::fstream fin;
	fin.open(m_filePath, std::fstream::in);
	if (fin.is_open()) {
		while (fin.good()) {
			file.push_back(fin.get());
		}
	}
	fin.close();
	len = file.size();
}

