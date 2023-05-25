#include "ApplyInfo.h"
#include <string>

using namespace std;

/**
 * 기본 생성자
*/
ApplyInfo::ApplyInfo()
{
	deadline = "";
	task = "";
	companyName = "";
	businessNumber = "";
	recruitmentNumber = 0;
}

/**
 * task, recruitmentNumber, deadline, name, businessNumber을 받아와 지원하는 업무, 지원자 수, 신청 마감일, 회사이름, 사업자번호를 초기화하는 생성자
 * @Param task
 * @Param recruitmentNumber
 * @Param deadline
 * @Param name
 * @Param businessNumber
*/
ApplyInfo::ApplyInfo(string task, int recruitmentNumber, string deadline, string name, string businessNumber)
{
	this->task = task;
	this->recruitmentNumber = recruitmentNumber;
	this->deadline = deadline;
	this->companyName = name;
	this->businessNumber = businessNumber;
}
