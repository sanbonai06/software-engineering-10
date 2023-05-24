#include "SearchCompanyRecruitments.h"
#include "SearchCompanyRecruitmentsUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "Member.h"
#include "CompanyMember.h"
using namespace std;

/**
 * 기본 생성자
 */
SearchCompanyRecruitments::SearchCompanyRecruitments()
{
	this->dataBase = nullptr;
	SearchCompanyRecruitmentsUI* searchCompanyRecruitmentsUI = new SearchCompanyRecruitmentsUI();
	searchCompanyRecruitmentsUI->startInterface();
}

/**
 * dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
 * @param dataBase
 */
SearchCompanyRecruitments::SearchCompanyRecruitments(DataBase* dataBase)
{
	this->dataBase = dataBase;
	SearchCompanyRecruitmentsUI* searchCompanyRecruitmentsUI = new SearchCompanyRecruitmentsUI();
	searchCompanyRecruitmentsUI->startInterface();
}

/**
 * 현재 로그인중인 회사멤버가 등록한 채용정보 리스트를 반환
 * @return member->getRecruitmentList()
 */
vector<Recruitment*> SearchCompanyRecruitments::showCompanyRecruitments()
{
	Member* findMember = dataBase->getMemberList()[dataBase->getLogInIndex()];
	CompanyMember* member = dynamic_cast<CompanyMember*>(findMember);
	if(stoi(member->getType()) == 1)
		return member->getRecruitmentList();
}
