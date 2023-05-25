#pragma once

class SearchRecruitments;
class File;

/**
 * 지원 정보 검색 유스케이스의 바운더리 클래스
*/
class SearchRecruitmentsUI
{
public:
	/**
	 * 기본 생성자
	*/
	SearchRecruitmentsUI();

	/**
	 * GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
	*/
	void startInterface();

	/**
	 *  로그인된 유저의 지원 정보 리스트를 파일에 출력
	 * @Param searchRecruitments
	 * @Param file
	*/
	void selectRecruitments(SearchRecruitments* searchRecruitments, File* file);

private:
	SearchRecruitments* searchRecruitments;
};