#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class DataBase;
class LogoutUI;

class Logout
{
public:
	Logout();
	Logout(DataBase* dataBase);

	LogoutUI* getLogoutUI() { return logoutUI; }

	string TryLogout();
private:
	DataBase* dataBase;
	LogoutUI* logoutUI;
};