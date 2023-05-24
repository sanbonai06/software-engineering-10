#pragma once
#include <iostream>
using namespace std;

/**
 * 채용 정보 엔티티 클래스
 */
class Recruitment
{
public:
	/**
	* 기본 생성자
	*/
	Recruitment();

	/**
	* task, recruitmentNumber, deadline, name, ssn을 받아와 인스턴스의 업무, 인원 수, 신청 마감일, 회사 이름, 사업자번호를 초기화하는 생성자
	* @param task
	* @param recruitmentNumber
	* @param deadline
	* @param name
	* @param ssn
	*/
	Recruitment(string task, string recruitmentNumber, string deadline, string name, string ssn);

	string getDeadline() { return deadline; }
	string getTask() { return task; }
	string getCompanyName() { return companyName; }
	int getRecruitmentNumber() { return recruitmentNumber; }
	int getApplyNumber() { return applyNumber; }
	string getBusinessNumber() { return businessNumber; }

	void setApplyNumber(bool sign) { sign ? this->applyNumber++ : this->applyNumber--; }

private:
	string deadline;
	string task;
	string companyName;
	string businessNumber;
	int recruitmentNumber;
	int applyNumber;
};
