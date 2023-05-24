#pragma once
#include <iostream>

class Recruitment
{
public:
	Recruitment();
	Recruitment(std::string task, std::string recruitmentNumber, std::string deadline, std::string name, std::string ssn);

	void SetMemberID(std::string MemberID) { this->MemberID = MemberID; }

	std::string GetDeadline() { return deadline; }
	std::string GetTask() { return task; }
	std::string GetCompanyName() { return companyName; }
	int GetRecruitmentNumber() { return recruitmentNumber; }
	int GetApplyNumber() { return applyNumber; }
	std::string BusinessNumber() { return businessNumber; }

	void setRecruitmentNumber() { this->recruitmentNumber++; }

private:
	std::string MemberID;
	std::string deadline;
	std::string task;
	std::string companyName;
	std::string businessNumber;
	int recruitmentNumber;
	int applyNumber;

};
