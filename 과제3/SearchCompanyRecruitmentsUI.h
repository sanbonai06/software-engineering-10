#pragma once

class SearchCompanyRecruitments;
class File;

/**
 * 등록된 채용 정보 조회 유스케이스의 바운더리 클래스
 */
class SearchCompanyRecruitmentsUI
{
public:
	/**
	* 기본 생성자
	*/
	SearchCompanyRecruitmentsUI();

	/**
	* GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
	*/
	void startInterface();

	/**
	* data에 반환된 채용 정보 리스트를 순회하며 업무, 인원 수, 신청 마감일 정보를 ofs 파일 포인터에 출력
	* @param searchCompanyRecruitments
	* @param file
	*/
	void selectCompanyRecruitments(SearchCompanyRecruitments *searchCompanyRecruitments, File *file);
};