#include "ExitMember.h"
#include "ExitMemberUI.h"
#include "DataBase.h"
// #include "Member.h"

using namespace std;

/**
 * 기본 생성자
 */
ExitMember::ExitMember()
{
	this->dataBase = nullptr;
	exitMemberUI = new ExitMemberUI();
	exitMemberUI->startInterface();
}

/**
 * dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
 * @param dataBase
 */
ExitMember::ExitMember(DataBase *dataBase)
{
	this->dataBase = dataBase;
	exitMemberUI = new ExitMemberUI();
	exitMemberUI->startInterface();
}

/**
 * id을 받아와 현재 로그인중인 멤버를 데이터베이스 상에서 삭제(탈퇴)
 * @return returnId
 */
string ExitMember::tryExitMember()
{
	vector<Member *> memberList = (this->dataBase)->getMemberList();
	int loginIndex = this->dataBase->getLogInIndex();
	string returnId = memberList[loginIndex]->getID();
	this->dataBase->deleteMember(loginIndex);

	return returnId;
}