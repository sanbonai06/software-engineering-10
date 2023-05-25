#include "JoinMember.h"
#include "JoinMemberUI.h"
#include "DataBase.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include <cstring>
using namespace std;

/**
 * 기본 생성자
 */
JoinMember::JoinMember()
{
	this->dataBase = nullptr;
	joinMemberUI = new JoinMemberUI();
	joinMemberUI->startInterface();
}

/**
 * dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
 * @param dataBase
 */
JoinMember::JoinMember(DataBase* dataBase)
{
	this->dataBase = dataBase;
	joinMemberUI = new JoinMemberUI();
	joinMemberUI->startInterface();
}

/**
 * user_type, name, ssn, id, password을 받아와 이미 존재하는 회원인지 아닌지를 확인하고 존재하지 않을 경우 MemberList에 추가
 * @param user_type
 * @param name
 * @param ssn
 * @param id
 * @param password
 * @return boolean
 */
bool JoinMember::addNewMember(string user_type,  string name,  string ssn,  string id,  string password)
{
	int i = 0;

	vector<Member*> memberList = (this->dataBase)->getMemberList();

	for (i = 0; i < memberList.size(); i++) {
		if (memberList[i]->getID() == id) {
			return false;
		}
	}

	if (stoi(user_type) == 1) {
		CompanyMember* member = new CompanyMember(user_type, name, ssn, id, password);
		dataBase->addMember(member);

	} 
	else {
		GeneralMember* member = new GeneralMember(user_type, name, ssn, id, password);
		dataBase->addMember(member);

	}
	return true;


}