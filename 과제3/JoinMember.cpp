#include "JoinMember.h"
#include "JoinMemberUI.h"
#include "DataBase.h"
#include "Member.h"

JoinMember::JoinMember()
{
	this->dataBase = nullptr;
	joinMemberUI = new JoinMemberUI();
	joinMemberUI->StartInterface();
}

JoinMember::JoinMember(DataBase* dataBase)
{
	this->dataBase = dataBase;
	joinMemberUI = new JoinMemberUI();
	joinMemberUI->StartInterface();
}

bool JoinMember::AddNewMember(std::string user_type, std::string name, std::string ssn, std::string id, std::string password)
{
	int i = 0;

	std::vector<Member*> memberList = (this->dataBase)->GetMemberList();

	for (i = 0; i < memberList.size(); i++) {
		if (memberList[i]->getID() == id) {
			return false;
		}
	}

	Member* member = new Member(user_type, name, ssn, id, password);
	dataBase->AddMember(member);
	std::cout << "����� �߰��Ǿ���. user_type : " << user_type << ", name : " << name << ", ssn :" << ssn << ", id : " << id << ", password : " << password << "\n";
	return true;


}