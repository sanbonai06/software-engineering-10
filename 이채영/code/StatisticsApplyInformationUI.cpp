//#include "StatisticsApplyInformationUI.h"
//#include "StatisticsApplyInformation.h"
//#include "File.h"
//#include "Recruitment.h"
//#include <vector>
//
//StatisticsApplyInformationUI::StatisticsApplyInformationUI()
//{
//
//}
//
//void StatisticsApplyInformationUI::StartInterface()
//{
//	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
//}
//
//void StatisticsApplyInformationUI::SelectStatisticsApplyInformation(StatisticsApplyInformation* statisticsApplyInformation, File* file)
//{
//	std::vector<Recruitment*> data = statisticsApplyInformation->ShowMemberRecruitment();
//
//	file->ofs << "5.1. 지원 정보 통계" << '\n';
//	for (Recruitment* recuitment : data)
//	{
//		if (recruitment->GetTotalSales() > 0)
//		{
//			file->ofs << "> " << recruitment->GetRecruitName() << " " << recruitment->GetPrice() * recruitment->GetTotalSales() << " " << floor(recruitment->GetAverageSatisfaction() + 0.5) << '\n';
//		}
//	}
//	file->ofs << '\n';
//}