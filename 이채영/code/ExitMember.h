#pragma once
#include <iostream>

class DataBase;
class ExitMemberUI;

class ExitMember
{
public:
	ExitMember();
	ExitMember(DataBase* dataBase);

	ExitMemberUI* GetExitMemberUI() { return exitMemberUI; }

	bool TryExitMember(std::string id);

private:
	DataBase* dataBase;
	ExitMemberUI* exitMemberUI;
};
