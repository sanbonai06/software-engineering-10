#pragma once
#include "Member.h"

class ExitMember;
class File;

class ExitMemberUI
{
public:
	ExitMemberUI();

	void StartInterface();
	void SelectExitMember(ExitMember* exitMember, File* file);
private:
	ExitMember* exitMember;
};
