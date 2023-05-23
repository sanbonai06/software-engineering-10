#include "JoinMemberUI.h"
#include "JoinMember.h"
#include "Member.h"
#include "File.h"

JoinMemberUI::JoinMemberUI()
{

}

void JoinMemberUI::StartInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void JoinMemberUI::SelectJoinMember(JoinMember* joinMember, File* file)
{
	// 파일 입력 받기
	std::string user_type = "";
	std::string name = "";
	std::string SSN = "";
	std::string id = "";
	std::string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> user_type >> name >> SSN >> id >> password;
	file->readed = file->ifs.tellg();

	if (joinMember->AddNewMember(user_type, name, SSN, id, password)) {
		file->ofs << "1.1. 회원가입" << '\n';

		std::cout << "1.1. 회원가입" << "\n";

		file->ofs << "> " << user_type << " " << name << " " << SSN << " " << id << " " << password << " " << '\n' << '\n';
	}
	else {
		file->ofs << "1.1. 회원가입" << '\n';

		std::cout << "1.1. 회원가입" << "\n";

		file->ofs << "> 회원가입 실패" << '\n' << '\n';

		std::cout << "> 회원가입 실패" << "\n";
	}
}

/*
void join()
{
	char user_type[MAX_STRING], name[MAX_STRING], SSN [[MAX_STRING], address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

	// 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
	fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);


	// 해당 기능 수행  


	// 출력 형식
	fprintf(out_fp, "1.1. 회원가입\n");
	fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}
*/