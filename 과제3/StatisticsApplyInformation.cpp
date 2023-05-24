﻿#include "StatisticsApplyInformation.h"
#include "StatisticsApplyInformationUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "ApplyInfo.h"
#include "Member.h"
#include "GeneralMember.h"
#include "CompanyMember.h"
#include <vector>
#include <map>
using namespace std;


StatisticsApplyInformation::StatisticsApplyInformation()
{
	this->dataBase = nullptr;
	statisticsApplyInformationUI = new StatisticsApplyInformationUI();
	statisticsApplyInformationUI->startInterface();
}

StatisticsApplyInformation::StatisticsApplyInformation(DataBase* dataBase)
{
	this->dataBase = dataBase;
	statisticsApplyInformationUI = new StatisticsApplyInformationUI();
	statisticsApplyInformationUI->startInterface();
}


void StatisticsApplyInformation::showStaticsApplyInformation(map<string, int>& taskCountMap)
{
	Member* member = dataBase->getMemberList()[dataBase->getLogInIndex()];
     string memberType (member->getType());

    // 회사 회원의 경우
    if(stoi(memberType) == 1){
        vector<Recruitment*> taskList = dynamic_cast<CompanyMember*>(member)->getRecruitmentList();
        
        // 초기화. 더 나은 방법이 떠오르시면 고쳐주세요 :)
        for (int i = 0; i < taskList.size(); i++) {
             string task = taskList[i]->getTask();
            taskCountMap[task] = 0;
        }

        for (int i = 0; i < taskList.size(); i++) {
             string task = taskList[i]->getTask();
            taskCountMap[task] += taskList[i]->getApplyNumber();
        }
    }
    // 일반 회원의 경우
    else{
        vector<ApplyInfo*> taskList = dynamic_cast<GeneralMember*>(member)->getApplyInfoList();

        for (int i = 0; i < taskList.size(); i++) {
             string task = taskList[i]->getTask();
            taskCountMap[task]++;
        }
    }


}
