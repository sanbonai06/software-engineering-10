#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "Recruitment.h"
#include "File.h"
#include <vector>
#include <string>

using namespace std;

/**
 * 기본 생성자
*/
SearchRecruitmentUI::SearchRecruitmentUI() {}

/**
 * GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
*/
void SearchRecruitmentUI::startInterface() {}

/**
 * file 클래스를 통해 얻은 ifs 파일 포인터를 읽어 name 정보를 컨트롤 클래스에 전달하고,
 * 회사의 채용 정보를 파일 포인터에 출력
 * @Param searchRecruitment
 * @Param file
*/
void SearchRecruitmentUI::selectRecruitment(SearchRecruitment *searchRecruitment, File *file)
{
	string name = "";
	file->ifs.seekg(file->readed);
	file->ifs >> name;
	file->readed = file->ifs.tellg();

	vector<Recruitment *> data = searchRecruitment->showSearchedRecruitment(name);

	file->ofs << "4.1 채용 정보 검색"
			  << "\n";

	if (!data.empty())
	{
		for (Recruitment *recruitment : data)
		{
			file->ofs << "> " << recruitment->getCompanyName() << " " << recruitment->getBusinessNumber() << " " << recruitment->getTask() << " " << recruitment->getRecruitmentNumber() << " " << recruitment->getDeadline() << "\n";
			// cout << recruitment->getCompanyName() << " " << recruitment->businessNumber() << " " << recruitment->getTask() << " " << recruitment->getRecruitmentNumber() << " " << recruitment->getDeadline() << "\n";
		}
		file->ofs << "\n";
		// cout << "\n";
	}
	else
	{
		file->ofs << "> 존재하지 않는 회사입니다."
				  << "\n";
		// cout << "> 존재하지 않는 회사입니다." << "\n";
	}
}