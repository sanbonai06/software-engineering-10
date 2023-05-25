#pragma once
#include <vector>
#include "StatisticsApplyInformationUI.h"
#include <map>
#include <string>
using namespace std;

class DataBase;
class StatisticsApplyInformation;
class Recruitment;

/**
 * 채용 정보 등록 유스케이스의 컨트롤 클래스
 */
class StatisticsApplyInformation
{
public:

	/**
	* 기본 생성자
	*/
	StatisticsApplyInformation();

	/**
	* dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
	* @param dataBase
	*/
	StatisticsApplyInformation(DataBase *dataBase);

	/**
	 * 채용 정보 등록 유스케이스의 바운더리 클래스를 반환
	 * @return statisticsApplyInformationUI
	 */
	StatisticsApplyInformationUI *getStatisticsApplyInformationUI() { return statisticsApplyInformationUI; }

	/**
	* 통계쩡보을 받아와 현재 로그인중인 회사멤버의 통계 리스트에 출력
	* @param &taskCountMap
	*/
	void showStaticsApplyInformation(map<string, int> &taskCountMap);

private:
	DataBase *dataBase;
	StatisticsApplyInformationUI *statisticsApplyInformationUI;
};
