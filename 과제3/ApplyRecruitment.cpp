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

ApplyRecruitment::ApplyRecruitment()
{
	this->dataBase = nullptr;
	ApplyRecruitmentUI* applyRecruitmentUI = new ApplyRecruitmentUI();
	applyRecruitmentUI->startInterface();
}

ApplyRecruitment::ApplyRecruitment(DataBase* dataBase)
{
	this->dataBase = dataBase;
	ApplyRecruitmentUI* applyRecruitmentUI = new ApplyRecruitmentUI();
	applyRecruitmentUI->startInterface();
}

ApplyInfo* ApplyRecruitment::addApplyRecruitment(string businessNumber)
{
	Member* member = dataBase->GetMemberList()[dataBase->GetLogInIndex()];
	GeneralMember* loginMember = dynamic_cast<GeneralMember*>(member);

	vector<Member*> companyMemberList = this->dataBase->GetMemberList();


	for (int i = 0; i < companyMemberList.size(); i++)
	{
		if (companyMemberList[i]->getType() == "1")
		{
			CompanyMenber* companyMember = dynamic_cast<CompanyMember*>(companyMemberList[i]);
			vector<Recruitment*> listOfRecruitments = companyMember->getRecruitmentList();

			for (int j = 0; j < listOfRecruitments.size(); j++)
			{
				if (listOfRecruitments[j]->BusinessNumber() == businessNumber)
				{
					listOfRecruitments[j]->setRecruitmentNumber();
					ApplyInfo* newApplyInfo = new ApplyInfo(listOfRecruitments[j]->GetTask(), listOfRecruitments[j]->GetRecruitmentNumber(), listOfRecruitments[j]->GetDeadline(), listOfRecruitments[j]->GetCompanyName(), listOfRecruitments[j]->BusinessNumber());

					loginMember->createApply(newApplyInfo);
					
					return newApplyInfo;
				}

			}
		}
	}
}