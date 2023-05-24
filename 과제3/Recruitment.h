#pragma once
#include <iostream>
using namespace std;

class Recruitment
{
public:
	Recruitment();
	Recruitment(string task,  string recruitmentNumber,  string deadline,  string name,  string ssn);

	void SetMemberID(string MemberID) { this->MemberID = MemberID; }

	string GetDeadline() { return deadline; }
	string GetTask() { return task; }
	string GetCompanyName() { return companyName; }
	int GetRecruitmentNumber() { return recruitmentNumber; }
	int GetApplyNumber() { return applyNumber; }
	string BusinessNumber() { return businessNumber; }

	void setRecruitmentNumber() { this->recruitmentNumber++; }

private:
	string MemberID;
	string deadline;
	string task;
	string companyName;
	string businessNumber;
	int recruitmentNumber;
	int applyNumber;

};
