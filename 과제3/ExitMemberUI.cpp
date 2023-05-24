#include "ExitMemberUI.h"
#include "ExitMember.h"
#include "Member.h"
#include "File.h"
using namespace std;

ExitMemberUI::ExitMemberUI()
{

}

void ExitMemberUI::StartInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void ExitMemberUI::SelectExitMember(ExitMember* exitMember, File* file)
{
	
	file->ofs << "1.2. ȸ��Ż��" << '\n';
	file->ofs << "> " << exitMember->TryExitMember() << " " << '\n' << '\n';

}