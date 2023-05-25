#include "SearchRecruitmentsUI.h"
#include "SearchRecruitments.h"
#include "File.h"
#include "ApplyInfo.h"
#include <vector>

using namespace std;

/**
 * 기본 생성자
*/
SearchRecruitmentsUI::SearchRecruitmentsUI() {}

/**
 * GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
*/
void SearchRecruitmentsUI::startInterface() {}


/**
 * 로그인된 유저의 지원 정보 리스트를 파일에 출력
 * @Param searchRecruitments
 * @Param file
*/
void SearchRecruitmentsUI::selectRecruitments(SearchRecruitments* searchRecruitments, File* file)
{
	vector<ApplyInfo*> data = searchRecruitments->showSearchedRecruitments();

	file->ofs << "4.3 지원 정보 조회" << "\n";
	for (int i = 0; i < data.size(); i++)
		file->ofs << "> " << data[i]->getCompanyName() << " " << data[i]->getbusinessNumber() << " " << data[i]->getTask() << " " << data[i]->getRecruitmentNumber() << " " << data[i]->getDeadline() << "\n\n";
}