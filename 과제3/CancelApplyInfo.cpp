#include "CancelApplyInfo.h"
#include "ApplyInfo.h"
#include "Member.h"
#include "GeneralMember.h"
#include "CompanyMember.h"
#include <vector>
#include <string>
using namespace std;


ApplyInfo* CancelApplyInfo::cancelApplyInfo(string businessNumber) {
    int loginIndex = dataBase->getLogInIndex();
    vector<Member*> memberList = dataBase->getMemberList(); 
    Member* loginMember = memberList[loginIndex];
    GeneralMember* generalMember = dynamic_cast<GeneralMember*>(loginMember);

	
	for (int i = 0; i < memberList.size(); i++)
	{
		if (memberList[i]->getType() == "1")
		{
			CompanyMember* companyMember = dynamic_cast<CompanyMember*>(memberList[i]);
			vector<Recruitment*> listOfRecruitments = companyMember->getRecruitmentList();

			for (int j = 0; j < listOfRecruitments.size(); j++)
			{
				if (listOfRecruitments[j]->getBusinessNumber() == businessNumber)
				{
					listOfRecruitments[j]->setApplyNumber(false);
					return generalMember->deleteApplyInfo(businessNumber);
				}
			}
		}
	}
	


    return generalMember->deleteApplyInfo(businessNumber);
}