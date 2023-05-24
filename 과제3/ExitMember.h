#pragma once
#include <iostream>
#include <string>
using namespace std;

class DataBase;
class ExitMemberUI;

class ExitMember
{
public:
	ExitMember();
	ExitMember(DataBase* dataBase);

	ExitMemberUI* GetExitMemberUI() { return exitMemberUI; }

	string TryExitMember();

private:
	DataBase* dataBase;
	ExitMemberUI* exitMemberUI;
};
