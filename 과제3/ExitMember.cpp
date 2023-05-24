#include "ExitMember.h"
#include "ExitMemberUI.h"
#include "DataBase.h"
// #include "Member.h"

using namespace std;

ExitMember::ExitMember()
{
	this->dataBase = nullptr;
	exitMemberUI = new ExitMemberUI();
	exitMemberUI->startInterface();
}

ExitMember::ExitMember(DataBase *dataBase)
{
	this->dataBase = dataBase;
	exitMemberUI = new ExitMemberUI();
	exitMemberUI->startInterface();
}

string ExitMember::tryExitMember()
{
	vector<Member *> memberList = (this->dataBase)->getMemberList();
	int loginIndex = this->dataBase->getLogInIndex();
	string returnId = memberList[loginIndex]->getID();
	this->dataBase->deleteMember(loginIndex);

	return returnId;
}