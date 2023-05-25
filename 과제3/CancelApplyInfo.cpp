#include "CancelApplyInfo.h"
#include "ApplyInfo.h"
#include "Member.h"
#include "GeneralMember.h"
#include "CompanyMember.h"
#include <vector>
#include <string>
using namespace std;

/**
 * businessNumber를 통해 지원 정보를 찾고 해당 지원 정보 취소 후 반환
 * 
 * @param businessNumber 
 * @return ApplyInfo* 
 */
ApplyInfo* CancelApplyInfo::cancelApplyInfo(string businessNumber) {

	// database에서 로그인 인덱스 반환 받고 해당 인덱스를 통해 유저 정보 획득
    int loginIndex = dataBase->getLogInIndex();
    vector<Member*> memberList = dataBase->getMemberList(); 
    Member* loginMember = memberList[loginIndex];
    GeneralMember* generalMember = dynamic_cast<GeneralMember*>(loginMember);

	// loop를 통해 해당하는 지원 정보를 찾아서 generalMember의 지원 정보 삭제 메서드를 호출
	for (int i = 0; i < memberList.size(); i++)
	{
		// memberList의 type이 1이면 CompanyMember이므로
		if (memberList[i]->getType() == "1")
		{
			CompanyMember* companyMember = dynamic_cast<CompanyMember*>(memberList[i]);
			vector<Recruitment*> listOfRecruitments = companyMember->getRecruitmentList();
			
			// CompanyMember의 채용 정보 리스트를 businessNumber를 통해 찾는다.
			for (int j = 0; j < listOfRecruitments.size(); j++)
			{
				if (listOfRecruitments[j]->getBusinessNumber() == businessNumber)
				{
					// 찾았으면 채용 정보에서 지원 수 차감하고 지원 정보 삭제 후 해당 정보 반환
					listOfRecruitments[j]->setApplyNumber(false);
					return generalMember->deleteApplyInfo(businessNumber);
				}
			}
		}
	}
	
    return generalMember->deleteApplyInfo(businessNumber);
}