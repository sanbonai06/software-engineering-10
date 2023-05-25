#include "LogInUI.h"
#include "Member.h"
#include "LogIn.h"
using namespace std;

/**
 * GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
 */
void LogInUI::startInterface() {
    return;
}


/**
 * file 클래스를 통해 얻은 ifs 파일 포인터를 읽어 id와 password 정보를 컨트롤 클래스에 전달하고, 유저 로그인 정보를 파일에 출력
 * @param login 
 * @param file 
 */
void LogInUI::inputIdPw(LogIn* login, File* file) {
    
    // 파일 입력 받기
	string id = "";
	string password = "";

	// id와 password 정보를 입력받음
	file->ifs.seekg(file->readed);
	file->ifs >> id >> password;
	file->readed = file->ifs.tellg();

	// 컨트롤 클래스에 해당 id와 password를 갖는 유저가 있는지 확인 후 반환
	Member* member = login->checkMemberInfo(id, password);

	// 유저 정보를 파일에 출력
	file->ofs << "2.1. 로그인" << '\n';

	file->ofs << "> " << member->getID() << " " << member->getPassword() << " " << '\n' << '\n';

}