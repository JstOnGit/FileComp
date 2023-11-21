#pragma once

#include <string>
#include <vector>

class File {
public:
	std::string m_filePath;
	std::vector<char> file;

	unsigned int len;

public:
	File(std::string filePath);

	void open();
};

