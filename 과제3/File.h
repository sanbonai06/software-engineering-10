#pragma once
#include <fstream>
using namespace std;

/**
 * 파일 포인터 저장 클래스
 */
class File
{
public:
	/**
	 * 파일 포인터 생성자. input.txt와 output.txt의 파일 포인터를 생성한다
	 */
	File();

public:
	ifstream ifs;
	ofstream ofs;

	int readed = 0;
};