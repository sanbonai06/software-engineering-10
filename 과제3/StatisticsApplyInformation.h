#pragma once
#include <vector>
#include "StatisticsApplyInformationUI.h"
#include <map>
#include <string>
using namespace std;

class DataBase;
class StatisticsApplyInformation;
class Recruitment;

class StatisticsApplyInformation
{
public:
	StatisticsApplyInformation();
	StatisticsApplyInformation(DataBase* dataBase);

	StatisticsApplyInformationUI* GetStatisticsApplyInformationUI() { return statisticsApplyInformationUI; }

	void ShowStaticsApplyInformation(map<string, int>& taskCountMap);

private:
	DataBase* dataBase;
	StatisticsApplyInformationUI* statisticsApplyInformationUI;
};
