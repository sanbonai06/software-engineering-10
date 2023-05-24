#pragma once
#include <vector>
using namespace std;

class DataBase;
class SearchCompanyRecruitmentsUI;
class Recruitment;

/**
 * 등록된 채용 정보 조회 유스케이스의 컨트롤 클래스
 */
class SearchCompanyRecruitments
{
public:
	/**
	* 기본 생성자
	*/
	SearchCompanyRecruitments();

	/**
	* dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
	* @param dataBase
	*/
	SearchCompanyRecruitments(DataBase *dataBase);

	/**
	 * 등록한 채용 정보 조회 유스케이스의 바운더리 클래스를 반환
	 * @return searchCompanyRecruitmentsUI
	 */
	SearchCompanyRecruitmentsUI *getSearchCompanyRecruitmentsUI() { return searchCompanyRecruitmentsUI; }

	/**
	* 현재 로그인중인 회사멤버가 등록한 채용정보 리스트를 반환
	* @return member->getRecruitmentList()
	*/
	vector<Recruitment *> showCompanyRecruitments();

private:
	DataBase *dataBase;
	SearchCompanyRecruitmentsUI *searchCompanyRecruitmentsUI;
};
