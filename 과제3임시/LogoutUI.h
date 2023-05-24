#pragma once
#include "Member.h"

class Logout;
class File;

class LogoutUI
{
public:
	LogoutUI();

	void StartInterface();
	void SelectLogout(Logout* logOut, File* file);
private:
	Logout* logout;
};

