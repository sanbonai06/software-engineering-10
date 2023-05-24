#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "Recruitment.h"
#include "File.h"
#include <vector>
#include <string>

using namespace std;

SearchRecruitmentUI::SearchRecruitmentUI() {}

void SearchRecruitmentUI::startInterface() {}

void SearchRecruitmentUI::selectRecruitment(SearchRecruitment* searchRecruitment, File* file)
{
	string name = "";
	file->ifs.seekg(file->readed);
	file->ifs >> name;
	file->readed = file->ifs.tellg();


	vector<Recruitment*> data = searchRecruitment->showSearchedRecruitment(name);

	file->ofs << "4.1 채용 정보 검색" << "\n";

	if (!data.empty())
	{
		for (Recruitment* recruitment : data)
		{
			file->ofs << "> " << recruitment->GetCompanyName() << " " << recruitment->BusinessNumber() << " " << recruitment->GetTask() << " " << recruitment->GetRecruitmentNumber() << " " << recruitment->GetDeadline() << "\n";
			//cout << recruitment->GetCompanyName() << " " << recruitment->BusinessNumber() << " " << recruitment->GetTask() << " " << recruitment->GetRecruitmentNumber() << " " << recruitment->GetDeadline() << "\n";
		}
		file->ofs << "\n";
		//cout << "\n";
	}
	else
	{
		file->ofs << "> 존재하지 않는 회사입니다." << "\n";
		//cout << "> 존재하지 않는 회사입니다." << "\n";
	}
}