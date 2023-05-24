#pragma once
#include <iostream>
using namespace std;

class DataBase;
class AddRecruitmentUI;

/**
 * 채용 정보 등록 유스케이스의 컨트롤 클래스
 */
class AddRecruitment
{
public:
	/**
	* 기본 생성자
	 */
	AddRecruitment();

	/**
	* dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
	* @param dataBase
	*/
	AddRecruitment(DataBase *dataBase);

	/**
	 * 채용 정보 등록 유스케이스의 바운더리 클래스를 반환
	 * @return addRecruitmentUI
	 */
	AddRecruitmentUI *getAddRecruitmentUI() { return addRecruitmentUI; }

	/**
	* task, recruitmentNumber, deadline을 받아와 현재 로그인중인 회사멤버의 채용정보 리스트에 등록
	* @param task
	* @param recruitmentNumber
	* @param deadline
	*/
	void addNewRecruitment(string task, string recruitmentNumber, string deadline);

private:
	DataBase *dataBase;
	AddRecruitmentUI *addRecruitmentUI;
};