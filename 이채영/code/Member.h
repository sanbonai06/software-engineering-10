#pragma once
#include <iostream>
#include <vector>
#include "Recruitment.h"

class Member
{
public:
	Member();
	Member(std::string user_type, std::string name, std::string ssn, std::string id, std::string password);

	void CheckMember();
	void CreateMember();
	void DeleteMember();
	void CreateRecruitment(Recruitment* newRecruitment);
	//void CheckLogInInfo();

	std::string GetID() { return id; }
	std::string GetSSN() { return ssn; }
	std::string GetPassword() { return password; }
	std::vector<Recruitment*> GetRecruitmentList() { return listOfRecruitments; }

private:
	std::string user_type;
	std::string name;
	std::string ssn;
	std::string id;
	std::string password;
	std::vector<Recruitment*> listOfRecruitments;
};