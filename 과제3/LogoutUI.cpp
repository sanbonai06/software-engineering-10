#include "LogoutUI.h"
#include "Logout.h"
#include "Member.h"
#include "File.h"

LogoutUI::LogoutUI()
{
}

void LogoutUI::startInterface()
{
    // GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void LogoutUI::selectLogout(Logout* logout, File* file)
{
    
    string result = logout->tryLogout();
    file->ofs << "2.2. 로그아웃" << '\n';
    file->ofs << "> " << result << " " << "\n" << "\n";
}