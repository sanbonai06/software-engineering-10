#include "Recruitment.h"
#include <string>

Recruitment::Recruitment()
{
	deadline = "";
	task = "";
	companyName = "";
	businessNumber = "";
	recruitmentNumber = 0;
	applyNumber = 0;
}

Recruitment::Recruitment(std::string task, std::string recruitmentNumber, std::string deadline, std::string name, std::string ssn)
{
	this->task = task;
	this->recruitmentNumber = std::stoi(recruitmentNumber);
	this->deadline = deadline;
	this->companyName = name;
	this->businessNumber = ssn;
	this->applyNumber = 0;
}
