#include "CancelApplyInfoUI.h"
#include "CancelApplyInfo.h"
#include "File.h"
#include "ApplyInfo.h"

/**
 * GUI의 경우 이번 과제에서 아무 역할을 하지 않음
 * 
 */
void CancelApplyInfoUI::startInterface() {}

/**
 * file 포인터를 통해 businessNumber를 읽고 해당 정보로 지원 정보를 찾아 취소 후 해당 지원 정보 파일에 출력
 * 
 * @param cancelApplyInfo 
 * @param file 
 */
void CancelApplyInfoUI::callAbortApplyInfo(CancelApplyInfo* cancelApplyInfo, File* file) {
	
	// 파일에서 businessNumber를 읽어옴
    string businessNumber = "";
	file->ifs.seekg(file->readed);
	file->ifs >> businessNumber;
	file->readed = file->ifs.tellg();

	// businessNumber를 인자로 지원 취소 컨트롤 클래스의 취소 메서드를 호출
    ApplyInfo* deletedApplyInfo = cancelApplyInfo->cancelApplyInfo(businessNumber);

	// 파일에 취소된 정보를 출력
	file->ofs << "4.4. 지원 취소" << '\n';
	file->ofs << "> " << deletedApplyInfo->getCompanyName() << " " << deletedApplyInfo->getbusinessNumber() << " " << deletedApplyInfo->getTask() << '\n' << '\n';
}