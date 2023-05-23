#include "LogOut.h"
#include "LogOutUI.h"
#include "DataBase.h"
#include "Member.h"
#include <vector>

Logout::Logout() {
    this->dataBase = nullptr;
    logoutUI = new LogoutUI();
    logoutUI->StartInterface();
}

Logout::Logout(DataBase* dataBase) {
    this->dataBase = dataBase;
    logoutUI = new LogoutUI();
    logoutUI->StartInterface();
}

std::string Logout::TryLogout()
{
    int index = this->dataBase->GetLogInIndex();
    std::vector<Member*> memberList = (this->dataBase)->GetMemberList();
    this->dataBase->SetLogInIndex(-1);

    return memberList[index]->GetID();
}