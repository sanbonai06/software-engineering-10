#pragma once
#include <vector>
#include <string>
using namespace std;

class Member;

class DataBase
{
public:
	DataBase();

	vector<Member *> getMemberList() { return memberList; }

	int getLogInIndex() { return logInIndex; }
	void setLogInIndex(int index) { logInIndex = index; } // For Test

	void deleteMember(int index) { memberList.erase(memberList.begin() + index); }

	void addMember(Member *member) { memberList.push_back(member); } // For Test

private:
	vector<Member *> memberList;

	int logInIndex;
};