#include "Member.h"
#include "ApplyInfo.h"

Member::Member()
{
	id = 1; // For Test
}

Member::Member(std::string user_type, string name, string ssn, string id, string password)
{
	this->user_type = user_type;
	this->name = name;
	this->ssn = ssn;
	this->id = id;
	this->password = password;
}

bool Member::checkIdAndPassword(string id, string password)
{
	return strcmp(this->id.c_str(), id.c_str()) == 0 &&
		   strcmp(this->password.c_str(), password.c_str()) == 0;
}

bool Member::checkId(string id)
{
	return strcmp(this->id.c_str(), id.c_str()) == 0;
}