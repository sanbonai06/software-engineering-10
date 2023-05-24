#include "AddRecruitment.h"
#include "AddRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "Member.h"
#include "CompanyMember.h"
using namespace std;

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


void AddRecruitment::AddNewRecruitment(string task, string recruitmentNumber, string deadline)
{
	Member* findMember = dataBase->GetMemberList()[dataBase->GetLogInIndex()];
	CompanyMember* member = dynamic_cast<CompanyMember*>(findMember);
	if (stoi(member->getType()) == 1) {
		string name = member->getName();
		string ssn = member->getSSN();
		Recruitment* newRecruitment = new Recruitment(task, recruitmentNumber, deadline, name, ssn);
		newRecruitment->SetMemberID(dataBase->GetMemberList()[dataBase->GetLogInIndex()]->getID());
		member->createRecruitment(newRecruitment);
	}
}