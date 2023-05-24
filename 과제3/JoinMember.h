#pragma once
#include <iostream>
using namespace std;

class DataBase;
class JoinMemberUI;

class JoinMember
{
public:
	JoinMember();
	JoinMember(DataBase *dataBase);

	JoinMemberUI *getJoinMemberUI() { return joinMemberUI; }

	bool addNewMember(string user_type, string name, string SSN, string id, string password);

private:
	DataBase *dataBase;
	JoinMemberUI *joinMemberUI;
};
