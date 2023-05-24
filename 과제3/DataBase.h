#pragma once
#include <vector>
#include <string>
using namespace std;

class Member;

class DataBase
{
public:
	DataBase();

	vector<Member*> GetMemberList() { return memberList; }


	int GetLogInIndex() { return logInIndex; }
	void setLogInIndex(int index) { logInIndex = index; }// For Test

	void DeleteMember(int index) { memberList.erase(memberList.begin() + index); }

	void AddMember(Member* member) { memberList.push_back(member); }// For Test


private:
	vector<Member*> memberList;

	int logInIndex;
};