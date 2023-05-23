#include "ExitMemberUI.h"
#include "ExitMember.h"
#include "Member.h"
#include "File.h"

ExitMemberUI::ExitMemberUI()
{

}

void ExitMemberUI::StartInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void ExitMemberUI::SelectExitMember(ExitMember* exitMember, File* file)
{
	// 파일 입력 받기
	std::string id = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id;
	file->readed = file->ifs.tellg();

	if (exitMember->TryExitMember(id)) {
		file->ofs << "1.2. 회원탈퇴" << '\n';
		file->ofs << "> " << id << " " << '\n' << '\n';
	}
	else {
		file->ofs << "1.2. 회원탈퇴" << '\n';
		file->ofs << "회원탈퇴 실패" << '\n' << '\n';
	}


}