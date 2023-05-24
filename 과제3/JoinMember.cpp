#include "JoinMember.h"
#include "JoinMemberUI.h"
#include "DataBase.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include <cstring>

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

	if (strcmp(user_type, "1") == 0) {
		CompanyMember* member = new CompanyMember(user_type, name, ssn, id, password);
		dataBase->AddMember(member);

	} 
	else {
		GeneralMember* member = new GeneralMember(user_type, name, ssn, id, password);
		dataBase->AddMember(member);

	}
	std::cout << "회원 가입. user_type : " << user_type << ", name : " << name << ", ssn :" << ssn << ", id : " << id << ", password : " << password << "\n";
	return true;


}