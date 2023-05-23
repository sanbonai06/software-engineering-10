#pragma once

#include<iostream>
#include<cstring>
#include "LogIn.h"
#include "File.h"

class LogInUI {
    private:
        LogIn* login;
    public:
        LogInUI(LogIn* newLogin) {
            login = newLogin;
        }
        void startInterface();
        void inputIdPw(LogIn* login, File* file);
};