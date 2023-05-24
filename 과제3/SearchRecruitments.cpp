#include "SearchRecruitments.h"
#include "SearchRecruitmentsUI.h"
#include "Member.h"
#include "DataBase.h"

SearchRecruitments::SearchRecruitments()
{
	this->dataBase = nullptr;
	SearchRecruitmentsUI* searchRecruitmentsUI = new SearchRecruitmentsUI();
	searchRecruitmentsUI->startInterface();
}

SearchRecruitments::SearchRecruitments(DataBase* dataBase)
{
	this->dataBase = dataBase;
	SearchRecruitmentsUI* searchRecruitmentsUI = new SearchRecruitmentsUI();
	searchRecruitmentsUI->startInterface();
}

vector<Recruitment*> SearchRecruitments::showSearchedRecruitments()
{
	Member* member = dataBase->GetMemberList()[dataBase->GetLogInIndex()];
	return member->GetRecruitmentList();
}