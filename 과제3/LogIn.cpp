#include "LogIn.h"
#include "DataBase.h"
#include "Member.h"
#include "LogInUI.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

LogIn::LogIn(DataBase* db) {
    this->db = db;
}

/**
 * id와 password를 통해 유저 정보를 찾아서 반환
 * @param id 
 * @param password 
 * @return Member* 
 */
Member* LogIn::checkMemberInfo(string id, string password) {
    
    vector<Member*> newMemberList = db->getMemberList();
    for(int i=0; i<newMemberList.size(); i++) {
        if(newMemberList[i]->checkIdAndPassword(id, password)) {
			db->setLogInIndex(i);
            return newMemberList[i];
        }
    }
}