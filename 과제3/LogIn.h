#pragma once

#include "DataBase.h"
#include <string>
using namespace std;

class Member;
class LogInUI;

/**
 * 로그인 유스케이스의 컨트롤 클래스
 * 
 */
class LogIn {
    private:
        DataBase* db;
		LogInUI* loginUI;
    public: 
        
        /**
         * database를 받아와 DataBase 클래스를 연결해주는 생성자
         * @param db 
         */
        LogIn(DataBase* db) {
            this->db = db;
        }

        /**
         * id, password를 전달 받아 해당 정보를 갖는 유저가 있는지 확인 후 반환
         * @param id 
         * @param password 
         * @return Member* 
         */
        Member* checkMemberInfo(string id, string password);

        /**
         * 로그인 유스케이스의 바운더리 클래스를 반환
         * @return LogInUI* 
         */
		LogInUI* getLogInUI() {
			return loginUI;
		}
};