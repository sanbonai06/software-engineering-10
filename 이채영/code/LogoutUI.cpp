#include "LogoutUI.h"
#include "Logout.h"
#include "Member.h"
#include "File.h"

LogoutUI::LogoutUI()
{
}

void LogoutUI::StartInterface()
{
    // GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void LogoutUI::SelectLogout(Logout* logout, File* file)
{
    std::string result = logout->TryLogout();
    file->ofs << "2.2. 로그아웃" << '\n';
    file->ofs << "> " << result << " " << "\n" << "\n";
}