#include "SearchCompanyRecruitmentsUI.h"
#include "SearchCompanyRecruitments.h"
#include "File.h"
#include "Recruitment.h"
#include <vector>
using namespace std;

SearchCompanyRecruitmentsUI::SearchCompanyRecruitmentsUI()
{

}

void SearchCompanyRecruitmentsUI::StartInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void SearchCompanyRecruitmentsUI::SelectCompanyRecruitments(SearchCompanyRecruitments* searchCompanyRecruitments, File* file)
{
	vector<Recruitment*> data = searchCompanyRecruitments->ShowCompanyRecruitments();

	file->ofs << "3.2. ��ϵ� ä�� ���� ��ȸ" << '\n';
	for (Recruitment* recruitment : data)
	{
			file->ofs << "> " << recruitment->GetTask() << " " << recruitment->GetRecruitmentNumber() << " " << recruitment->GetDeadline() << '\n';
	}
	file->ofs << '\n';
}