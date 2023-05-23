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

bool ExitMember::TryExitMember(std::string id)
{
	int i = 0;

	std::vector<Member*> memberList = (this->dataBase)->GetMemberList();


	for (i = 0; i < memberList.size(); i++) {
		if (memberList[i]->getID() == id) {
			this->dataBase->DeleteMember(i);
			return true;
		}
	}
	return false;

}