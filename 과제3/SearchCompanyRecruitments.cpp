#include "SearchCompanyRecruitments.h"
#include "SearchCompanyRecruitmentsUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "Member.h"
#include "CompanyMember.h"
using namespace std;

SearchCompanyRecruitments::SearchCompanyRecruitments()
{
	this->dataBase = nullptr;
	SearchCompanyRecruitmentsUI* searchCompanyRecruitmentsUI = new SearchCompanyRecruitmentsUI();
	searchCompanyRecruitmentsUI->startInterface();
}

SearchCompanyRecruitments::SearchCompanyRecruitments(DataBase* dataBase)
{
	this->dataBase = dataBase;
	SearchCompanyRecruitmentsUI* searchCompanyRecruitmentsUI = new SearchCompanyRecruitmentsUI();
	searchCompanyRecruitmentsUI->startInterface();
}

vector<Recruitment*> SearchCompanyRecruitments::showCompanyRecruitments()
{
	Member* findMember = dataBase->getMemberList()[dataBase->getLogInIndex()];
	CompanyMember* member = dynamic_cast<CompanyMember*>(findMember);
	if(stoi(member->getType()) == 1)
		return member->getRecruitmentList();
}
