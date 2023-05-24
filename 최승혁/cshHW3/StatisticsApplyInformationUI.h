#pragma once

class StatisticsApplyInformation;
class File;

class StatisticsApplyInformationUI
{
public:
	StatisticsApplyInformationUI();

	void StartInterface();
	void SelectStatisticsApplyInformation(StatisticsApplyInformation* statisticsApplyInformation, File* file);
};
