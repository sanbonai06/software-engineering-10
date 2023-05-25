#pragma once
#include "SearchRecruitment.h"
#include "File.h"

/**
 * 채용 정보 검색 유스케이스의 바운더리 클래스
*/
class SearchRecruitmentUI
{
public:
	/**
	 * 기본 생성자
	*/
	SearchRecruitmentUI();

	/**
	 * GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
	*/
	void startInterface();

	/**
	 * file 클래스를 통해 얻은 ifs 파일 포인터를 읽어 name 정보를 컨트롤 클래스에 전달하고,
	 * 회사의 채용 정보를 파일 포인터에 출력
	 * @Param searchRecruitment
	 * @Param file
	*/
	void selectRecruitment(SearchRecruitment* searchRecruitment, File* file);

private:
	SearchRecruitment* searchRecruitment;
};