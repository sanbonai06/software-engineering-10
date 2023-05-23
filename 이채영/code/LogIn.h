#pragma once
#include <iostream>

class DataBase;
class LogInUI;

class LogIn
{
public:
	LogIn();
	LogIn(DataBase* dataBase);

	LogInUI* GetLogInUI() { return logInUI; }

	void TryLogIn(std::string id, std::string password);
private:
	DataBase* dataBase;
	LogInUI* logInUI;
};