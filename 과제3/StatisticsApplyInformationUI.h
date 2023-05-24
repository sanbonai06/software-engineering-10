#pragma once

class StatisticsApplyInformation;
class File;

class StatisticsApplyInformationUI
{
public:
	StatisticsApplyInformationUI();

	void startInterface();
	void selectStatisticsApplyInformation(StatisticsApplyInformation *statisticsApplyInformation, File *file);
};
