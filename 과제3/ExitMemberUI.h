#pragma once
#include "Member.h"

class ExitMember;
class File;
class DataBase;

class ExitMemberUI
{
public:
	ExitMemberUI();
	ExitMemberUI(DataBase *db)
	{
		this->dataBase = db;
	}

	void startInterface();
	void selectExitMember(ExitMember *exitMember, File *file);

private:
	ExitMember *exitMember;
	DataBase *dataBase;
};
