#include "SearchRecruitments.h"
#include "SearchRecruitmentsUI.h"
#include "Member.h"
#include "DataBase.h"
#include "GeneralMember.h"
#include "ApplyInfo.h"
#include <algorithm>

using namespace std;

bool compare(ApplyInfo* a, ApplyInfo* b)
{
	return a->getCompanyName() < b->getCompanyName();
}

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

vector<ApplyInfo*> SearchRecruitments::showSearchedRecruitments()
{
	Member* findMember = dataBase->getMemberList()[dataBase->getLogInIndex()];
	GeneralMember* loginMember = dynamic_cast<GeneralMember*>(findMember);

	if (stoi(loginMember->getType()) == 2)
	{
		vector<ApplyInfo*> result = loginMember->getApplyInfoList();
		sort(result.begin(), result.end(), compare);
		return result;
	}
}