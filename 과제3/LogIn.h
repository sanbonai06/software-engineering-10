#pragma once

#include<cstring>
#include "DataBase.h"

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