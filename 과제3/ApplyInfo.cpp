#include "ApplyInfo.h"
#include <string>

using namespace std;

ApplyInfo::ApplyInfo()
{
	deadline = "";
	task = "";
	companyName = "";
	businessNumber = "";
	recruitmentNumber = 0;
}

ApplyInfo::ApplyInfo(string task, int recruitmentNumber, string deadline, string name, string businessNumber)
{
	this->task = task;
	this->recruitmentNumber = recruitmentNumber;
	this->deadline = deadline;
	this->companyName = name;
	this->businessNumber = businessNumber;
}
