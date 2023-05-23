#include "Logout.h"
#include "LogoutUI.h"
#include "DataBase.h"
#include "Member.h"
#include <vector>

Logout::Logout() {
    this->dataBase = nullptr;
    logoutUI = new LogoutUI();
    logoutUI->startInterface();
}

Logout::Logout(DataBase* dataBase) {
    this->dataBase = dataBase;
    logoutUI = new LogoutUI();
    logoutUI->startInterface();
}

std::string Logout::TryLogout(string id)
{
    int index = this->dataBase->GetLogInIndex();
    std::vector<Member*> memberList = (this->dataBase)->GetMemberList();
    for(int i=0; i<memberList.size(); i++) {
        if (memberList[i]->checkId(id)) {
            this->dataBase->setLogInIndex(-1);
            return memberList[i]->getID();
        }
    }
}