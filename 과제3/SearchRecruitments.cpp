#include "SearchRecruitments.h"
#include "SearchRecruitmentsUI.h"
#include "Member.h"
#include "DataBase.h"
#include "GeneralMember.h"
using namespace std;

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
	if(stoi(loginMember->getType()) == 2) 
		return loginMember->getApplyInfoList();
}