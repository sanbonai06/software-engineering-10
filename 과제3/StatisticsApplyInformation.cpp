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
using namespace std;

/**
 * 기본 생성자
 */
StatisticsApplyInformation::StatisticsApplyInformation()
{
	this->dataBase = nullptr;
	statisticsApplyInformationUI = new StatisticsApplyInformationUI();
	statisticsApplyInformationUI->startInterface();
}

/**
 * dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
 * @param dataBase
 */
StatisticsApplyInformation::StatisticsApplyInformation(DataBase* dataBase)
{
	this->dataBase = dataBase;
	statisticsApplyInformationUI = new StatisticsApplyInformationUI();
	statisticsApplyInformationUI->startInterface();
}

/**
 * task, recruitmentNumber, deadline을 받아와 현재 로그인중인 회사멤버의 채용정보 리스트에 등록
 * @param taskCountMap
 */
void StatisticsApplyInformation::showStaticsApplyInformation(map<string, int>& taskCountMap)
{
	Member* member = dataBase->getMemberList()[dataBase->getLogInIndex()];
     string memberType (member->getType());

    // 회사 회원의 경우
    if(stoi(memberType) == 1){
        vector<Recruitment*> taskList = dynamic_cast<CompanyMember*>(member)->getRecruitmentList();
        
        // 초기화
        for (int i = 0; i < taskList.size(); i++) {
             string task = taskList[i]->getTask();
            taskCountMap[task] = 0;
        }
        // 업부 별 지원자 수
        for (int i = 0; i < taskList.size(); i++) {
             string task = taskList[i]->getTask();
            taskCountMap[task] += taskList[i]->getApplyNumber();
        }
    }
    // 일반 회원의 경우
    else{
        vector<ApplyInfo*> taskList = dynamic_cast<GeneralMember*>(member)->getApplyInfoList();

        // 업무 별 지원 횟수
        for (int i = 0; i < taskList.size(); i++) {
             string task = taskList[i]->getTask();
            taskCountMap[task]++;
        }
    }


}
