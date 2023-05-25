#pragma once
#include <vector>

using namespace std;

class DataBase;
class SearchRecruitmentsUI;
class ApplyInfo;

class SearchRecruitments
{

public:
	/**
	 * 기본 생성자
	*/
	SearchRecruitments();

	/**
	 * dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
	 * @Param dataBase
	*/
	SearchRecruitments(DataBase* dataBase);


	/**
	 * 지원 정보 조회 유스케이스의 바운더리 클래스를 반환
	*/
	SearchRecruitmentsUI* getSearchRecruitmentsUI() { return searchRecruitmentsUI; };

	/**
	 * 로그인중인 일반 멤버의 지원 정보 리스트를 오름차순으로 정렬하여 반환
	 * @return loginMember->getApplyInfoList();
	*/
	vector<ApplyInfo*> showSearchedRecruitments();

private:
	DataBase* dataBase;
	SearchRecruitmentsUI* searchRecruitmentsUI;
};