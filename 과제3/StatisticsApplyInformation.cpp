#include "StatisticsApplyInformation.h"
#include "StatisticsApplyInformationUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "ApplyInfo.h"
#include "Member.h"
#include "GeneralMember.h"
#include "CompanyMember.h"
#include <vector>
#include <map>


StatisticsApplyInformation::StatisticsApplyInformation()
{
	this->dataBase = nullptr;
	statisticsApplyInformationUI = new StatisticsApplyInformationUI();
	statisticsApplyInformationUI->StartInterface();
}

StatisticsApplyInformation::StatisticsApplyInformation(DataBase* dataBase)
{
	this->dataBase = dataBase;
	statisticsApplyInformationUI = new StatisticsApplyInformationUI();
	statisticsApplyInformationUI->StartInterface();
}


void StatisticsApplyInformation::ShowStaticsApplyInformation(std::map<std::string, int>& taskCountMap)
{
	Member* member = dataBase->GetMemberList()[dataBase->GetLogInIndex()];
    std::string memberType (member->getType());

    // 회사 회원의 경우
    if(std::stoi(memberType) == 1){
        vector<Recruitment*> taskList = dynamic_cast<CompanyMember*>(member)->getRecruitmentList();
        
        // 초기화. 더 나은 방법이 떠오르시면 고쳐주세요 :)
        for (int i = 0; i < taskList.size(); i++) {
            std::string task = taskList[i]->GetTask();
            taskCountMap[task] = 0;
        }

        for (int i = 0; i < taskList.size(); i++) {
            std::string task = taskList[i]->GetTask();
            taskCountMap[task] += taskList[i]->GetApplyNumber();
        }
    }
    // 일반 회원의 경우
    else{
        vector<ApplyInfo*> taskList = dynamic_cast<GeneralMember*>(member)->getApplyInfoList();

        for (int i = 0; i < taskList.size(); i++) {
            std::string task = taskList[i]->getTask();
            taskCountMap[task]++;
        }
    }


}
