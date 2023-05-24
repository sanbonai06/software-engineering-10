#include "CancelApplyInfoUI.h"
#include "CancelApplyInfo.h"
#include "File.h"
#include "ApplyInfo.h"

void CancelApplyInfoUI::startInterface() {}

void CancelApplyInfoUI::callAbortApplyInfo(CancelApplyInfo* cancelApplyInfo, File* file) {
    string ssn = "";
	file->ifs.seekg(file->readed);
	file->ifs >> ssn;
	file->readed = file->ifs.tellg();

    ApplyInfo* deletedApplyInfo = cancelApplyInfo->cancelApplyInfo(ssn);

	file->ofs << "4.4. 지원 취소" << '\n';
	file->ofs << "> " << deletedApplyInfo->getCompanyName() << " " << deletedApplyInfo->getbusinessNumber() << " " << deletedApplyInfo->getTask() << '\n' << '\n';
}