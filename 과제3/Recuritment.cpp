#include "Recruitment.h"
#include <string>
using namespace std;

/**
 * 기본 생성자
 */
Recruitment::Recruitment()
{
	deadline = "";
	task = "";
	companyName = "";
	businessNumber = "";
	recruitmentNumber = 0;
	applyNumber = 0;
}

/**
 * task, recruitmentNumber, deadline, name, ssn을 받아와 인스턴스의 업무, 인원 수, 신청 마감일, 회사 이름, 사업자번호를 초기화하는 생성자
 * @param task
 * @param recruitmentNumber
 * @param deadline
 * @param name
 * @param ssn
 */
Recruitment::Recruitment(string task,  string recruitmentNumber,  string deadline,  string name,  string ssn)
{
	this->task = task;
	this->recruitmentNumber =  stoi(recruitmentNumber);
	this->deadline = deadline;
	this->companyName = name;
	this->businessNumber = ssn;
	this->applyNumber = 0;
}
