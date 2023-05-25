#include "JoinMemberUI.h"
#include "JoinMember.h"
#include "Member.h"
#include "File.h"
using namespace std;

/**
 * 기본 생성자
 */
JoinMemberUI::JoinMemberUI()
{

}

void JoinMemberUI::startInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

/**
 * file 클래스를 통해 얻은 ifs 파일 포인터를 읽어 user_type, name, SSN, id, password 정보를 컨트롤 클래스에 전달하고, 전달한 정보를 ofs 파일 포인터에 출력
 * @param joinMember
 * @param file
 */

void JoinMemberUI::selectJoinMember(JoinMember* joinMember, File* file)
{
	// 파일 입력 받기
	string user_type = "";
	string name = "";
	string SSN = "";
	string id = "";
	string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> user_type >> name >> SSN >> id >> password;
	file->readed = file->ifs.tellg();

	if (joinMember->addNewMember(user_type, name, SSN, id, password)) {
		file->ofs << "1.1. 회원가입" << '\n';


		file->ofs << "> " << user_type << " " << name << " " << SSN << " " << id << " " << password << " " << '\n' << '\n';
	}
	else {
		file->ofs << "1.1. 회원가입" << '\n';
	}
}