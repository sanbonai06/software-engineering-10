#pragma once

class StatisticsApplyInformation;
class File;

class StatisticsApplyInformationUI
{
public:
	StatisticsApplyInformationUI();

	void StartInterface();
	void StatisticsApplyInformation(StatisticsApplyInformation* statisticsApplyInformation, File* file);
};
