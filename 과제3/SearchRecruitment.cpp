#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "DataBase.h"
#include "Member.h"
#include "Recruitment.h"
#include "CompanyMember.h"

/**
 * 기본 생성자
*/
SearchRecruitment::SearchRecruitment()
{
	this->dataBase = nullptr;
	SearchRecruitmentUI* searchRecruitmentUI = new SearchRecruitmentUI();
	searchRecruitmentUI->startInterface();
}

/**
 * dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
*/
SearchRecruitment::SearchRecruitment(DataBase* dataBase)
{
	this->dataBase = dataBase;
	SearchRecruitmentUI* searchRecruitmentUI = new SearchRecruitmentUI();
	searchRecruitmentUI->startInterface();
}

/**
 * 회사이름(name)을 받아와 해당 회사의 채용 정보 리스트 반환
 * @return companyMember->getRecruitmentList()
*/
vector<Recruitment*> SearchRecruitment::showSearchedRecruitment(string name)
{
	// datBase에서 가입된 모든 유저 획득
	vector<Member*> memberList = this->dataBase->getMemberList();
	vector<Recruitment*> result;

	for (int i = 0; i < memberList.size(); i++)
	{
		// memberList의 type이 1이고 해당 회사의 이름이 Param으로 넘어온 이름과 같다면
		if (memberList[i]->getType() == "1" && memberList[i]->getName() == name)
		{
			// 회사의 채용 정보 리스트 반환
			CompanyMember* companyMember = dynamic_cast<CompanyMember*>(memberList[i]);
			return companyMember->getRecruitmentList();
		}
	}

	// loop에서 반환 값이 없다면 비어있는 리스트를 반환
	return result;
}