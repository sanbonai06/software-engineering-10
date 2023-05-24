#include "File.h"
#include <iostream>
using namespace std;

File::File()
{
	// ���� ������� ���� �ʱ�ȭ
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