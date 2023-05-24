#include "SearchRecruitmentsUI.h"
#include "SearchRecruitments.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>

using namespace std;

SearchRecruitmentsUI::SearchRecruitmentsUI() {}
void SearchRecruitmentsUI::startInterface() {}

void SearchRecruitmentsUI::selectRecruitments(SearchRecruitments* searchRecruitments, File* file)
{
	vector<Recruitment*> data = searchRecruitments->showSearchedRecruitments();

	file->ofs << "4.3 지원 정보 조회" << "\n";
	for (int i = 0; i < data.size(); i++)
		file->ofs << "> " << data[i]->GetCompanyName() << " " << data[i]->BusinessNumber() << " " << data[i]->GetTask() << " " << data[i]->GetRecruitmentNumber() << " " << data[i]->GetDeadline() << "\n";
}