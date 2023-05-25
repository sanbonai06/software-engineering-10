#include "ApplyRecruitmentUI.h"
#include "ApplyRecruitment.h"
#include "File.h"
#include "Recruitment.h"
#include "Member.h"
#include "DataBase.h"
#include "ApplyInfo.h"
#include "GeneralMember.h"
#include "CompanyMember.h"

using namespace std;
/**
 * 기본 생성자
*/
ApplyRecruitment::ApplyRecruitment()
{
	this->dataBase = nullptr;
	ApplyRecruitmentUI *applyRecruitmentUI = new ApplyRecruitmentUI();
	applyRecruitmentUI->startInterface();
}

/**
 * dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
 * @Param dataBase
*/
ApplyRecruitment::ApplyRecruitment(DataBase *dataBase)
{
	this->dataBase = dataBase;
	ApplyRecruitmentUI *applyRecruitmentUI = new ApplyRecruitmentUI();
	applyRecruitmentUI->startInterface();
}

/**
 * businessNumber를 받아와 로그인한 멤버가 회사에 채용 지원
 * @Param businessNumber
*/
ApplyInfo *ApplyRecruitment::addApplyRecruitment(string businessNumber)
{
	// datBase에서 로그인 인덱스를 반환 받고 해당 인덱스를 통해 유저 정보 획득
	Member *member = dataBase->getMemberList()[dataBase->getLogInIndex()];
	GeneralMember *loginMember = dynamic_cast<GeneralMember *>(member);

	// dataBase에서 모든 회원멤버 획득
	vector<Member *> companyMemberList = this->dataBase->getMemberList();

	for (int i = 0; i < companyMemberList.size(); i++)
	{
		// companyMemberList의 type이 1이면 companyMember이므로
		if (companyMemberList[i]->getType() == "1")
		{
			CompanyMember *companyMember = dynamic_cast<CompanyMember *>(companyMemberList[i]);
			vector<Recruitment *> listOfRecruitments = companyMember->getRecruitmentList();

			// companyMember의 채용 정보 리스트를 businessNumber를 통해 찾는다.
			for (int j = 0; j < listOfRecruitments.size(); j++)
			{
				if (listOfRecruitments[j]->getBusinessNumber() == businessNumber)
				{
					// 찾았다면 해당 채용 정보에서 지원 수를 늘려주고
					listOfRecruitments[j]->setApplyNumber(true);
					// 새로운 채용 지원 객체를 생성 후
					ApplyInfo *newApplyInfo = new ApplyInfo(listOfRecruitments[j]->getTask(), listOfRecruitments[j]->getRecruitmentNumber(), listOfRecruitments[j]->getDeadline(), listOfRecruitments[j]->getCompanyName(), listOfRecruitments[j]->getBusinessNumber());
					// 멤버에게 지원정보 추가 후 해당 지원 정보를 반환한다.
					loginMember->createApply(newApplyInfo);

					return newApplyInfo;
				}
			}
		}
	}
}