#pragma once
#include <fstream>
using namespace std;

class File
{
public:
	File();

public:
	ifstream ifs;
	ofstream ofs;

	int readed = 0;
};