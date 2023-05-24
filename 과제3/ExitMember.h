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
	ExitMember(DataBase *dataBase);

	ExitMemberUI *getExitMemberUI() { return exitMemberUI; }

	string tryExitMember();

private:
	DataBase *dataBase;
	ExitMemberUI *exitMemberUI;
};
