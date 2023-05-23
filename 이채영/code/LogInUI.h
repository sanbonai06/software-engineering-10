#pragma once
#include "Member.h"

class LogIn;
class File;

class LogInUI
{
public:
	LogInUI();

	void StartInterface();
	void SelectLogIn(LogIn* logIn, File* file);
private:
	LogIn* logIn;
};