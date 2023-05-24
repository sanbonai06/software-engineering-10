#include "SearchCompanyRecruitmentsUI.h"
#include "SearchCompanyRecruitments.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>
using namespace std;

SearchCompanyRecruitmentsUI::SearchCompanyRecruitmentsUI()
{

}

void SearchCompanyRecruitmentsUI::startInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void SearchCompanyRecruitmentsUI::selectCompanyRecruitments(SearchCompanyRecruitments* searchCompanyRecruitments, File* file)
{
	vector<Recruitment*> data = searchCompanyRecruitments->showCompanyRecruitments();

	file->ofs << "3.2. ��ϵ� ä�� ���� ��ȸ" << '\n';
	for (Recruitment* recruitment : data)
	{
			file->ofs << "> " << recruitment->getTask() << " " << recruitment->getRecruitmentNumber() << " " << recruitment->getDeadline() << '\n';
	}
	file->ofs << '\n';
}