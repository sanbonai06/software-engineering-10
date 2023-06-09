#include "AddRecruitment.h"
#include "AddRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "Member.h"

AddRecruitment::AddRecruitment()
{
	this->dataBase = nullptr;
	addRecruitmentUI = new AddRecruitmentUI();
	addRecruitmentUI->StartInterface();
}

AddRecruitment::AddRecruitment(DataBase* dataBase)
{
	this->dataBase = dataBase;
	addRecruitmentUI = new AddRecruitmentUI();
	addRecruitmentUI->StartInterface();
}


void AddRecruitment::AddNewRecruitment(std::string task, std::string recruitmentNumber, std::string deadline)
{
	Member* member = dataBase->GetMemberList()[dataBase->GetLogInIndex()];
	std::string name = member->GetID();
	std::string ssn = member->GetSSN();
	Recruitment* newRecruitment = new Recruitment(task, recruitmentNumber, deadline, name, ssn);
	newRecruitment->SetMemberID(dataBase->GetMemberList()[dataBase->GetLogInIndex()]->GetID());
	member->CreateRecruitment(newRecruitment);
}