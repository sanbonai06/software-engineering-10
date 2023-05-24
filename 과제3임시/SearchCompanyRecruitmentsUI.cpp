#include "SearchCompanyRecruitmentsUI.h"
#include "SearchCompanyRecruitments.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>

SearchCompanyRecruitmentsUI::SearchCompanyRecruitmentsUI()
{

}

void SearchCompanyRecruitmentsUI::StartInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void SearchCompanyRecruitmentsUI::SelectCompanyRecruitments(SearchCompanyRecruitments* searchCompanyRecruitments, File* file)
{
	std::vector<Recruitment*> data = searchCompanyRecruitments->ShowCompanyRecruitments();

	file->ofs << "3.2. 등록된 채용 정보 조회" << '\n';
	for (Recruitment* Recruitment : data)
	{
			file->ofs << "> " << Recruitment->GetTask() << " " << Recruitment->GetRecruitmentNumber() << " " << Recruitment->GetDeadline() << '\n';
			std::cout << "> " << Recruitment->GetTask() << " " << Recruitment->GetRecruitmentNumber() << " " << Recruitment->GetDeadline() << '\n';
	}
	file->ofs << '\n';
	std::cout << '\n';
}