#pragma once
#include <vector>
#include <string>
using namespace std;

class Member;

class DataBase
{
public:
	DataBase();

	std::vector<Member*> GetMemberList() { return memberList; }


	int GetLogInIndex() { return logInIndex; }
	void setLogInIndex(int index) { logInIndex = index; }// For Test

	void DeleteMember(int index) { memberList.erase(memberList.begin() + index); }

	void AddMember(Member* member) { memberList.emplace_back(member); }// For Test


private:
	std::vector<Member*> memberList;

	int logInIndex;
};