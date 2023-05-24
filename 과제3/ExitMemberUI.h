#pragma once
#include "Member.h"

class ExitMember;
class File;
class DataBase;

class ExitMemberUI
{
public:
	ExitMemberUI();
	ExitMemberUI(DataBase* db) {
		this->dataBase = db;
	}

	void StartInterface();
	void SelectExitMember(ExitMember* exitMember, File* file);
private:
	ExitMember* exitMember;
	DataBase* dataBase;
};
