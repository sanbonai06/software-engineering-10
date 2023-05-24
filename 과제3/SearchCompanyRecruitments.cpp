#include "SearchCompanyRecruitments.h"
#include "SearchCompanyRecruitmentsUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "Member.h"
#include "CompanyMember.h"

SearchCompanyRecruitments::SearchCompanyRecruitments()
{
	this->dataBase = nullptr;
	SearchCompanyRecruitmentsUI* searchCompanyRecruitmentsUI = new SearchCompanyRecruitmentsUI();
	searchCompanyRecruitmentsUI->StartInterface();
}

SearchCompanyRecruitments::SearchCompanyRecruitments(DataBase* dataBase)
{
	this->dataBase = dataBase;
	SearchCompanyRecruitmentsUI* searchCompanyRecruitmentsUI = new SearchCompanyRecruitmentsUI();
	searchCompanyRecruitmentsUI->StartInterface();
}

std::vector<Recruitment*> SearchCompanyRecruitments::ShowCompanyRecruitments()
{
	Member* findMember = dataBase->GetMemberList()[dataBase->GetLogInIndex()];
	CompanyMember* member = dynamic_cast<CompanyMember*>(findMember);
	if(std::stoi(member->getType()) == 1)
		return member->getRecruitmentList();
}
