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
	StatisticsApplyInformation(DataBase *dataBase);

	StatisticsApplyInformationUI *getStatisticsApplyInformationUI() { return statisticsApplyInformationUI; }

	void showStaticsApplyInformation(map<string, int> &taskCountMap);

private:
	DataBase *dataBase;
	StatisticsApplyInformationUI *statisticsApplyInformationUI;
};
