#pragma once
#include <fstream>

class File
{
public:
	File();

public:
	std::ifstream ifs;
	std::ofstream ofs;

	int readed = 0;
};