#include "LogoutUI.h"
#include "Logout.h"
#include "Member.h"
#include "File.h"

/**
 * GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 */
void LogoutUI::startInterface() {}

/**
 * 로그아웃한 유저의 정보를 파일에 출력
 * @param logout 
 * @param file 
 */
void LogoutUI::selectLogout(Logout* logout, File* file)
{
    
    // 로그아웃 컨트롤 클래스를 호출
    string result = logout->tryLogout();

    // 로그아웃을 진행한 유저의 id값을 파일에 출력
    file->ofs << "2.2. 로그아웃" << '\n';
    file->ofs << "> " << result << " " << "\n" << "\n";
}