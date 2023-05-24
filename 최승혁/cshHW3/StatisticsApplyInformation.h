#pragma once
#include <vector>

class DataBase;
class StatisticsApplyInformation;
class Recruitment;

class StatisticsApplyInformation
{
public:
	StatisticsApplyInformation();
	StatisticsApplyInformation(DataBase* dataBase);

	StatisticsApplyInformationUI* GetStatisticsApplyInformationUI() { return statisticsApplyInformationUI; }

	std::map<std::string, int> ShowStaticsApplyInformation();

private:
	DataBase* dataBase;
	StatisticsApplyInformationUI* statisticsApplyInformationUI;
};
