#include "StatisticsApplyInformationUI.h"
#include "StatisticsApplyInformation.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>
#include <map>
#include <string>
using namespace std;

/**
 * 기본 생성자
 */
StatisticsApplyInformationUI::StatisticsApplyInformationUI()
{

}

void StatisticsApplyInformationUI::startInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}


/**
 * file 클래스를 통해 얻은 ifs 파일 포인터를 읽어 통계정보를 컨트롤 클래스에 전달하고, 전달한 정보를 ofs 파일 포인터에 출력
 * @param statisticsApplyInformation
 * @param file
 */
void StatisticsApplyInformationUI::selectStatisticsApplyInformation(StatisticsApplyInformation* statisticsApplyInformation, File* file)
{
	map<string, int> taskCountMap;
	statisticsApplyInformation->showStaticsApplyInformation(taskCountMap);

	file->ofs << "5.1. 지원 정보 통계" << '\n';
	for (const auto& pair : taskCountMap) {
		file->ofs << "> " << pair.first << " " << pair.second << '\n';
	}
	file->ofs << '\n';
    
}
