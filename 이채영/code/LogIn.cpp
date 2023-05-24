#include "LogIn.h"
#include "LogInUI.h"
#include "DataBase.h"
#include "Member.h"

#include <vector>

LogIn::LogIn() {
	this->dataBase = nullptr;
	logInUI = new LogInUI();
	logInUI->StartInterface();
}

LogIn::LogIn(DataBase* dataBase) {
	this->dataBase = dataBase;
	logInUI = new LogInUI();
	logInUI->StartInterface();
}

void LogIn::TryLogIn(std::string id, std::string password)
{
	int i = 0;

	std::vector<Member*> memberList = (this->dataBase)->GetMemberList();

	for (i = 0; i < memberList.size(); i++) {
		if ((memberList[i]->GetID() == id) && (memberList[i]->GetPassword() == password)) {
			dataBase->SetLogInIndex(i);
		}
	}
}