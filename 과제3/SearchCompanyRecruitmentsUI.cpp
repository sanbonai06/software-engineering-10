#include "SearchCompanyRecruitmentsUI.h"
#include "SearchCompanyRecruitments.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>
using namespace std;

/**
 * 기본 생성자
 */
SearchCompanyRecruitmentsUI::SearchCompanyRecruitmentsUI()
{

}

void SearchCompanyRecruitmentsUI::startInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

/**
 * data에 반환된 채용 정보 리스트를 순회하며 업무, 인원 수, 신청 마감일 정보를 ofs 파일 포인터에 출력
 * @param searchCompanyRecruitments
 * @param file
 */
void SearchCompanyRecruitmentsUI::selectCompanyRecruitments(SearchCompanyRecruitments* searchCompanyRecruitments, File* file)
{
	vector<Recruitment*> data = searchCompanyRecruitments->showCompanyRecruitments();

	file->ofs << "3.2. 등록된 채용 정보 조회" << '\n';
	for (Recruitment* recruitment : data)
	{
			file->ofs << "> " << recruitment->getTask() << " " << recruitment->getRecruitmentNumber() << " " << recruitment->getDeadline() << '\n';
	}
	file->ofs << '\n';
}