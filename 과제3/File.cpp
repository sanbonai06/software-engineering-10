#include "File.h"
#include <iostream>
using namespace std;

/**
* 파일 포인터 생성자. input.txt와 output.txt의 파일 포인터를 생성한다
*/
File::File()
{
	// input.txt 파일의 파일 포인터를 ifs에, output.txt 파일은 ofs에 저장한다
	ifs.open("input.txt",  ios::in);
	if (ifs.fail())
	{
		cerr << "ifs Error!" <<  endl;
	}
	ofs.open("output.txt",  ios::out |  ios::app);
	if (ofs.fail())
	{
		cerr << "ofs Error!" <<  endl;
	}
}