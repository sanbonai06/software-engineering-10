#pragma once

#include<iostream>
#include<cstring>
#include "LogIn.h"
#include "File.h"

/**
 * 유저 로그인 유스케이스의 바운더리 클래스
 * 
 */
class LogInUI {
    private:
        LogIn* login;
    public:
        /**
         * 로그인 유스케이스의 컨트롤 클래스를 연결해주는 생성자
         * 
         * @param newLogin 
         */
        LogInUI(LogIn* newLogin) {
            login = newLogin;
        }

        /**
         * GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
         */
        void startInterface();

        /**
         * file 클래스를 통해 얻은 ifs 파일 포인터를 읽어 id와 password 정보를 컨트롤 클래스에 전달하고, 유저 로그인 정보를 파일에 출력
         * @param login 
         * @param file 
         */
        void inputIdPw(LogIn* login, File* file);
};