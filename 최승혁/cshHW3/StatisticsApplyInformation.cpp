#include "StatisticsApplyInformation.h"
#include "StatisticsApplyInformationUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "Member.h"
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


std::map<std::string, int> StatisticsApplyInformation::ShowStaticsApplyInformation()
{
	Member* member = dataBase->GetMemberList()[dataBase->GetLogInIndex()];
    std::string memberType (member->getType());

    std::map<std::string, int> taskCountMap;

    // 회사 회원의 경우
    if(memberType.compare("1") != 0){
        vector<Recruitment*> taskList = member->GetRecruitmentList();
        
        // 초기화. 더 나은 방법이 떠오르시면 고쳐주세요 :)
        for (const auto& statisticInfo : taskList) {
            std::string task = (*statisticInfo).GetTask();
            taskCountMap[task] = 0;
        }

        for (const auto& statisticInfo : taskList) {
            std::string task = (*statisticInfo).GetTask();
            taskCountMap[task] += (*statisticInfo).GetApplyNumber();
        }
    }
    // 일반 회원의 경우
    else{
        vector<ApplyInfo*> taskList = member->GetApplyList();
        for (const auto& statisticInfo : taskList) {
            std::string task = (*statisticInfo).GetTask();
            taskCountMap[task]++;
        }
    }

    return taskCountMap;

}
