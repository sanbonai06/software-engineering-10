#include "ApplyRecruitmentUI.h"
#include "ApplyRecruitment.h"
#include "File.h"
#include "ApplyInfo.h"

using namespace std;

ApplyRecruitmentUI::ApplyRecruitmentUI() {}
void ApplyRecruitmentUI::startInterface() {}

void ApplyRecruitmentUI::callSelectApply(ApplyRecruitment* applyRecruitment, File* file)
{
	string businessNumber = "";
	file->ifs.seekg(file->readed);
	file->ifs >> businessNumber;
	file->readed = file->ifs.tellg();

	ApplyInfo* applyInfo = applyRecruitment->addApplyRecruitment(businessNumber);

	file->ofs << "4.2 채용 지원" << '\n';
	file->ofs << "> " << applyInfo->getCompanyName() << " " << applyInfo->getBusinessNumber() << " " << applyInfo->getTask() << '\n' << '\n';
}