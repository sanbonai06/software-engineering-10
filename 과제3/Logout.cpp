#include "Logout.h"
#include "LogoutUI.h"
#include "DataBase.h"
#include "Member.h"
#include <vector>
using namespace std;

Logout::Logout()
{
    this->dataBase = nullptr;
    logoutUI = new LogoutUI();
    logoutUI->startInterface();
}

Logout::Logout(DataBase *dataBase)
{
    this->dataBase = dataBase;
    logoutUI = new LogoutUI();
    logoutUI->startInterface();
}

string Logout::tryLogout()
{
    int index = this->dataBase->getLogInIndex();
    vector<Member *> memberList = (this->dataBase)->getMemberList();
    string id = memberList[index]->getID();
    this->dataBase->setLogInIndex(-1);
    return id;
}