#include "ExitMember.h"
#include "ExitMemberUI.h"
#include "DataBase.h"
//#include "Member.h"

using namespace std;

ExitMember::ExitMember()
{
	this->dataBase = nullptr;
	exitMemberUI = new ExitMemberUI();
	exitMemberUI->StartInterface();
}

ExitMember::ExitMember(DataBase* dataBase)
{
	this->dataBase = dataBase;
	exitMemberUI = new ExitMemberUI();
	exitMemberUI->StartInterface();
}

string ExitMember::TryExitMember()
{
	vector<Member*> memberList = (this->dataBase)->GetMemberList();
	int loginIndex = this->dataBase->GetLogInIndex();
	string returnId = memberList[loginIndex]->getID();
	this->dataBase->DeleteMember(loginIndex);

	return returnId;

}