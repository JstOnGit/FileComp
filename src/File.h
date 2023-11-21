#pragma once

#include <string>
#include <vector>

class File {
public:
	bool isOpen;
	std::string m_filePath;
	std::vector<char> file;

	unsigned int len;

public:
	File(std::string filePath);

	void open();
};

