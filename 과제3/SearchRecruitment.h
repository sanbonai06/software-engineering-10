#pragma once
#include <iostream>
#include <vector>

class DataBase;
class SearchRecruitmentUI;
class Recruitment;

using namespace std;

/**
 * 채용 정보 검색 유스케이스의 컨트롤 클래스
*/
class SearchRecruitment
{
public:
	/**
	 * 기본 생성자
	*/
	SearchRecruitment();

	/**
	 * dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
	*/
	SearchRecruitment(DataBase* dataBase);

	/**
	 * 채용 정보 검색 유스케이스의 바운더리 클래스를 반환
	 * @return searchRecruitmentUI
	*/
	SearchRecruitmentUI* getSearchRecruitmentUI() { return searchRecruitmentUI; };

	/**
	 * 회사이름(name)을 받아와 해당 회사의 채용 정보 리스트 반환
	 * @return companyMember->getRecruitmentList()
	*/
	vector<Recruitment*> showSearchedRecruitment(string name);

private:
	DataBase* dataBase;
	SearchRecruitmentUI* searchRecruitmentUI;
};