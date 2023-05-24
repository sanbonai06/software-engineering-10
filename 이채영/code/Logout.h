#pragma once
#include <iostream>

class DataBase;
class LogoutUI;

class Logout
{
public:
	Logout();
	Logout(DataBase* dataBase);

	LogoutUI* GetLogoutUI() { return logoutUI; }

	std::string TryLogout();
private:
	DataBase* dataBase;
	LogoutUI* logoutUI;
};