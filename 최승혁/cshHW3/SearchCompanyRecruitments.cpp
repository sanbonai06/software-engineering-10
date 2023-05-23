#include "SearchCompanyRecruitments.h"
#include "SearchCompanyRecruitmentsUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "Member.h"

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
	Member* Member = dataBase->GetMemberList()[dataBase->GetLogInIndex()];
	return Member->GetRecruitmentList();
}
