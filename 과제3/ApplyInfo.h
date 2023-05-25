#pragma once
#include <iostream>

using namespace std;
/**
* 채용 지원 정보 엔티티 클래스
*/
class ApplyInfo
{
public:
	/**
	 * 기본 생성자
	*/
	ApplyInfo();

	/**
	 * task, recruitmentNumber, deadline, name, businessNumber을 받아와 지원하는 업무, 지원자 수, 신청 마감일, 회사이름, 사업자번호를 초기화하는 생성자
	 * @Param task
	 * @Param recruitmentNumber
	 * @Param deadline
	 * @Param name
	 * @Param businessNumber
	*/
	ApplyInfo(string task, int recruitmentNumber, string deadline, string name, string businessNumber);

	string getDeadline() { return deadline; }
	string getTask() { return task; }
	string getCompanyName() { return companyName; }
	int getRecruitmentNumber() { return recruitmentNumber; }
	string getbusinessNumber() { return businessNumber; }

private:
	string deadline;
	string task;
	string companyName;
	string businessNumber;
	int recruitmentNumber;
};
