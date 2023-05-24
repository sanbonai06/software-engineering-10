#pragma once
#include <iostream>

using namespace std;

class ApplyInfo
{
public:
	ApplyInfo();
	ApplyInfo(string task, int recruitmentNumber, string deadline, string name, string businessNumber);

	void setMemberID(string MemberID) { this->MemberID = MemberID; }

	string getDeadline() { return deadline; }
	string getTask() { return task; }
	string getCompanyName() { return companyName; }
	int getRecruitmentNumber() { return recruitmentNumber; }
	string getbusinessNumber() { return businessNumber; }

private:
	string MemberID;
	string deadline;
	string task;
	string companyName;
	string businessNumber;
	int recruitmentNumber;
};
