#pragma once
#include <vector>
#include <string>
class DataBase;
class ApplyRecruitmentUI;
class Member;
class ApplyInfo;

using namespace std;

/**
 * 채용 지원 유스케이스의 컨트롤 클래스
*/
class ApplyRecruitment
{
public:
	/**
	 * 기본 생성자
	*/
	ApplyRecruitment();

	/**
	 * dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
	 * @Param dataBase
	*/
	ApplyRecruitment(DataBase* dataBase);

	/**
	 * 채용 지원 유스케이스의 바운더리 클래스를 반환
	 * @return applyRecruitmentUI
	*/
	ApplyRecruitmentUI* getApplyRecruitmentUI() { return applyRecruitmentUI; };

	/**
	 * businessNumber를 받아와 로그인한 멤버가 회사에 채용 지원
	 * @Param businessNumber
	*/
	ApplyInfo* addApplyRecruitment(string businessNumber);

private:
	DataBase* dataBase;
	ApplyRecruitmentUI* applyRecruitmentUI;
};