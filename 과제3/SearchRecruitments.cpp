#include "SearchRecruitments.h"
#include "SearchRecruitmentsUI.h"
#include "Member.h"
#include "DataBase.h"
#include "GeneralMember.h"
#include "ApplyInfo.h"
#include <algorithm>

using namespace std;
/**
 * 채용 지원 정보를 오름차순으로 정렬
*/
bool compare(ApplyInfo* a, ApplyInfo* b)
{
	return a->getCompanyName() < b->getCompanyName();
}

/**
 * 기본 생성자
*/
SearchRecruitments::SearchRecruitments()
{
	this->dataBase = nullptr;
	SearchRecruitmentsUI* searchRecruitmentsUI = new SearchRecruitmentsUI();
	searchRecruitmentsUI->startInterface();
}

/**
 * dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
 * @Param dataBase
*/
SearchRecruitments::SearchRecruitments(DataBase* dataBase)
{
	this->dataBase = dataBase;
	SearchRecruitmentsUI* searchRecruitmentsUI = new SearchRecruitmentsUI();
	searchRecruitmentsUI->startInterface();
}


/**
 * 로그인중인 일반 멤버의 지원 정보 리스트를 오름차순으로 정렬하여 반환
 * @return loginMember->getApplyInfoList();
*/
vector<ApplyInfo*> SearchRecruitments::showSearchedRecruitments()
{
	// dataBase에서 현재 로그인 된 유저를 획득
	Member* findMember = dataBase->getMemberList()[dataBase->getLogInIndex()];
	GeneralMember* loginMember = dynamic_cast<GeneralMember*>(findMember);

	// loginMember의 Type이 2라면 일반회원 이므로
	if (stoi(loginMember->getType()) == 2)
	{
		// 일반회원의 지원 정보를 오름차순으로 정렬하여 반환
		vector<ApplyInfo*> result = loginMember->getApplyInfoList();
		sort(result.begin(), result.end(), compare);
		return result;
	}
}