#pragma once
#include <iostream>

class DataBase;
class JoinMemberUI;

class JoinMember
{
public:
	JoinMember();
	JoinMember(DataBase* dataBase);

	JoinMemberUI* GetJoinMemberUI() { return joinMemberUI; }

	bool AddNewMember(std::string user_type, std::string name, std::string SSN, std::string id, std::string password);

private:
	DataBase* dataBase;
	JoinMemberUI* joinMemberUI;
};
