#pragma once
#include <iostream>
using namespace std;

class Recruitment
{
public:
	Recruitment();
	Recruitment(string task, string recruitmentNumber, string deadline, string name, string ssn);

	void setMemberID(string MemberID) { this->MemberID = MemberID; }

	string getDeadline() { return deadline; }
	string getTask() { return task; }
	string getCompanyName() { return companyName; }
	int getRecruitmentNumber() { return recruitmentNumber; }
	int getApplyNumber() { return applyNumber; }
	string getBusinessNumber() { return businessNumber; }

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
