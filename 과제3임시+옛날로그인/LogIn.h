#pragma once

#include "DataBase.h"
#include <string>
using namespace std;

class Member;
class LogInUI;

class LogIn {
    private:
        DataBase* db;
		LogInUI* loginUI;
    public: 
        LogIn(DataBase* db);
        Member* checkMemberInfo(string id, string password);
		LogInUI* getLogInUI() {
			return loginUI;
		}
};