#include "StatisticsApplyInformationUI.h"
#include "StatisticsApplyInformation.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>
#include <map>
#include <string>
using namespace std;

StatisticsApplyInformationUI::StatisticsApplyInformationUI()
{

}

void StatisticsApplyInformationUI::StartInterface()
{

}

void StatisticsApplyInformationUI::SelectStatisticsApplyInformation(StatisticsApplyInformation* statisticsApplyInformation, File* file)
{
	map<string, int> taskCountMap;
	statisticsApplyInformation->ShowStaticsApplyInformation(taskCountMap);

	file->ofs << "5.1. 지원 정보 통계" << '\n';
	for (const auto& pair : taskCountMap) {
		file->ofs << "> " << pair.first << " " << pair.second << '\n';
	}
	file->ofs << '\n';
    
}
