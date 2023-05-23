#include "LogIn.h"
#include "Database.h"
#include "Member.h"
#include "LogInUI.h"
#include <iostream>
#include<vector>
using namespace std;

LogIn::LogIn(DataBase* db) {
    this->db = db;
}

Member* LogIn::checkMemberInfo(string id, string password) {
    
    vector<Member*> newMemberList = this->db->GetMemberList();
    for(int i=0; i<newMemberList.size(); i++) {
        if(newMemberList[i]->checkIdAndPassword(id, password)) {
			this->db->setLogInIndex(i);
            return newMemberList[i];
        }
    }
    return NULL;
}