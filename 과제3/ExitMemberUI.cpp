#include "ExitMemberUI.h"
#include "ExitMember.h"
#include "Member.h"
#include "File.h"
using namespace std;

ExitMemberUI::ExitMemberUI()
{
}

void ExitMemberUI::startInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void ExitMemberUI::selectExitMember(ExitMember *exitMember, File *file)
{

	file->ofs << "1.2. 회원탈퇴" << '\n';
	file->ofs << "> " << exitMember->tryExitMember() << " " << '\n'
			  << '\n';

}