#include "Recruitment.h"
#include <string>
using namespace std;

Recruitment::Recruitment()
{
	deadline = "";
	task = "";
	companyName = "";
	businessNumber = "";
	recruitmentNumber = 0;
	applyNumber = 0;
}

Recruitment::Recruitment(string task,  string recruitmentNumber,  string deadline,  string name,  string ssn)
{
	this->task = task;
	this->recruitmentNumber =  stoi(recruitmentNumber);
	this->deadline = deadline;
	this->companyName = name;
	this->businessNumber = ssn;
	this->applyNumber = 0;
}
