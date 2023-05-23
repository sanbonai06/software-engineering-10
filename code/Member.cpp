#include "Member.h"

Member::Member()
{
	id = 1;// For Test
	listOfRecruitments.clear();
}

Member::Member(std::string user_type, std::string name, std::string ssn, std::string id, std::string password)
{
	this->user_type = user_type;
	this->name = name;
	this->ssn = ssn;
	this->id = id;
	this->password = password;
}

void Member::CreateRecruitment(Recruitment* newRecruitment)
{
	listOfRecruitments.push_back(newRecruitment);
}