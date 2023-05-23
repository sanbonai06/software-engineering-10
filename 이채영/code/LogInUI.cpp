#include "LogInUI.h"
#include "LogIn.h"
#include "Member.h"
#include "File.h"

LogInUI::LogInUI()
{

}

void LogInUI::StartInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void LogInUI::SelectLogIn(LogIn* logIn, File* file)
{
	// 파일 입력 받기
	std::string id = "";
	std::string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id >> password;
	file->readed = file->ifs.tellg();

	logIn->TryLogIn(id, password);
	file->ofs << "2.1. 로그인" << '\n';
	
	printf("2.1. 로그인\n");

	file->ofs << "> " << id << " " << password << " " << '\n' << '\n';

	std::cout << ">id " << id << " pw " << password << " " << '\n' << '\n';
}