#include "LogInUI.h"
#include "Member.h"
#include "Login.h"
using namespace std;


void LogInUI::startInterface() {
    return;
}

void LogInUI::inputIdPw(LogIn* login, File* file) {
    
    // 파일 입력 받기
	std::string id = "";
	std::string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id >> password;
	file->readed = file->ifs.tellg();

	Member* member = login->checkMemberInfo(id, password);

	file->ofs << "2.1. 로그인" << '\n';
	
	printf("2.1. 로그인\n");

	file->ofs << "> " << member->getID() << " " << member->getPassword() << " " << '\n' << '\n';

	std::cout << ">id " << member->getID() << " pw " << member->getPassword() << " " << '\n' << '\n';
}