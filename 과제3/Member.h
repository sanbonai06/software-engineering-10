#pragma once
#include <iostream>
#include <vector>
#include "Recruitment.h"
#include "DataBase.h"
#include "ApplyInfo.h"
#include <cstring>
using namespace std;

class Member
{
public:
	Member();
	Member(std::string user_type, std::string name, std::string ssn, std::string id, std::string password);

	void CheckMember();
	void CreateMember();
	void DeleteMember();
	void CreateRecruitment(Recruitment* newRecruitment);
	void createApply(ApplyInfo* newApplyInfo);
	bool checkIdAndPassword(string id, string password);
	bool checkId(string id);
	//void CheckLogInInfo();

	std::string getID() { return id; }
	std::string getSSN() { return ssn; }
	std::string getPassword() { return password; }
	string getName() {
		return name;
	}
	string getType() {
		return user_type;
	}
	void setUserType(string newUserType) {
		this->user_type = newUserType;
	}

	void setName(string name) {
		this->name = name;
	}

	void setSsn(string ssn) {
		this->ssn = ssn;
	}

	void setId(string id) {
		this->id = id;
	}

	void setPassword(string password) {
		this->password = password;
	}

private:
	std::string user_type;
	std::string name;
	std::string ssn;
	std::string id;
	std::string password;
};