#include "AddRecruitment.h"
#include "AddRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "Member.h"
#include "CompanyMember.h"

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
	Member* findMember = dataBase->GetMemberList()[dataBase->GetLogInIndex()];
	CompanyMember* member = dynamic_cast<CompanyMember*>(findMember);
	if (std::stoi(member->getType()) == 1) {
		std::string name = member->getName();
		std::string ssn = member->getSSN();
		Recruitment* newRecruitment = new Recruitment(task, recruitmentNumber, deadline, name, ssn);
		newRecruitment->SetMemberID(dataBase->GetMemberList()[dataBase->GetLogInIndex()]->getID());
		member->createRecruitment(newRecruitment);
	}
}