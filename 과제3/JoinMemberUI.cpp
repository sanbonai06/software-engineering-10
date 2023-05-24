#include "JoinMemberUI.h"
#include "JoinMember.h"
#include "Member.h"
#include "File.h"
using namespace std;

JoinMemberUI::JoinMemberUI()
{

}

void JoinMemberUI::StartInterface()
{
	// GUI??? PopUp? ????, ??? ?????????? ???? ???????? ?????? ????? ????? ???? ????.
}

void JoinMemberUI::SelectJoinMember(JoinMember* joinMember, File* file)
{
	// ???? ??? ???
	string user_type = "";
	string name = "";
	string SSN = "";
	string id = "";
	string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> user_type >> name >> SSN >> id >> password;
	file->readed = file->ifs.tellg();

	if (joinMember->AddNewMember(user_type, name, SSN, id, password)) {
		file->ofs << "1.1. 회원가입" << '\n';


		file->ofs << "> " << user_type << " " << name << " " << SSN << " " << id << " " << password << " " << '\n' << '\n';
	}
	else {
		file->ofs << "1.1. 회원가입" << '\n';
	}
}