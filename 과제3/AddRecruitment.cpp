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
	addRecruitmentUI->startInterface();
}

AddRecruitment::AddRecruitment(DataBase *dataBase)
{
	this->dataBase = dataBase;
	addRecruitmentUI = new AddRecruitmentUI();
	addRecruitmentUI->startInterface();
}

void AddRecruitment::addNewRecruitment(string task, string recruitmentNumber, string deadline)
{
	Member *findMember = dataBase->getMemberList()[dataBase->getLogInIndex()];
	CompanyMember *member = dynamic_cast<CompanyMember *>(findMember);
	if (stoi(member->getType()) == 1)
	{
		string name = member->getName();
		string ssn = member->getSSN();
		Recruitment *newRecruitment = new Recruitment(task, recruitmentNumber, deadline, name, ssn);
		newRecruitment->setMemberID(dataBase->getMemberList()[dataBase->getLogInIndex()]->getID());
		member->createRecruitment(newRecruitment);
	}
}