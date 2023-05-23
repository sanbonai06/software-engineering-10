//#include "StatisticsApplyInformation.h"
//#include "StatisticsApplyInformationUI.h"
//#include "DataBase.h"
//#include "Recruitment.h"
//
//
//StatisticsApplyInformation::StatisticsApplyInformation()
//{
//	this->dataBase = nullptr;
//	statisticsApplyInformationUI = new StatisticsApplyInformationUI();
//	statisticsApplyInformationUI->StartInterface();
//}
//
//StatisticsApplyInformation::StatisticsApplyInformation(DataBase* dataBase)
//{
//	this->dataBase = dataBase;
//	statisticsApplyInformationUI = new StatisticsApplyInformationUI();
//	statisticsApplyInformationUI->StartInterface();
//}
//
//
//std::vector<Recruitment*> StatisticsApplyInformation::StatisticsApplyInformation()
//{
//	Member* member = dataBase->GetMemberList()[dataBase->GetLogInIndex()];
//	return member->GetMemberList();	//listRecruitments
//}