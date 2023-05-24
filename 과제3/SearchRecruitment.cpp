#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "DataBase.h"
#include "Member.h"
#include "Recruitment.h"
#include "CompanyMember.h"

SearchRecruitment::SearchRecruitment()
{
	this->dataBase = nullptr;
	SearchRecruitmentUI* searchRecruitmentUI = new SearchRecruitmentUI();
	searchRecruitmentUI->startInterface();
}

SearchRecruitment::SearchRecruitment(DataBase* dataBase)
{
	this->dataBase = dataBase;
	SearchRecruitmentUI* searchRecruitmentUI = new SearchRecruitmentUI();
	searchRecruitmentUI->startInterface();
}

vector<Recruitment*> SearchRecruitment::showSearchedRecruitment(string name)
{
	vector<Member*> memberList = this->dataBase->getMemberList();
	vector<Recruitment*> result;

	for (int i = 0; i < memberList.size(); i++)
	{
		if (memberList[i]->getType() == "1" && memberList[i]->getName() == name)
		{
			CompanyMember* companyMember = dynamic_cast<CompanyMember*>(memberList[i]);
			return companyMember->getRecruitmentList();
		}
	}

	return result;
}