#include "ApplyRecruitmentUI.h"
#include "ApplyRecruitment.h"
#include "File.h"
#include "Recruitment.h"

using namespace std;

ApplyRecruitmentUI::ApplyRecruitmentUI() {}
void ApplyRecruitmentUI::startInterface() {}

void ApplyRecruitmentUI::callSelectRecruitment(ApplyRecruitment* applyRecruitment, File* file)
{
	string businessNumber = "";
	file->ifs.seekg(file->readed);
	file->ifs >> businessNumber;
	file->readed = file->ifs.tellg();

	Recruitment* recruitment = applyRecruitment->applyRecruitment(businessNumber);

	file->ofs << "4.2 채용 지원" << "\n";
	file->ofs << "> " << recruitment->GetCompanyName() << " " << recruitment->BusinessNumber() << " " << recruitment->GetTask() << "\n\n";
}