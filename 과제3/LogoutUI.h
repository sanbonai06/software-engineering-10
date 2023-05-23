#pragma once
#include "Member.h"

class Logout;
class File;

class LogoutUI
{
public:
	LogoutUI();

	void startInterface();
	void selectLogout(Logout* logOut, File* file);
private:
	Logout* logout;
};

