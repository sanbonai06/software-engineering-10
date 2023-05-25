#include "Member.h"
#include "ApplyInfo.h"

/**
* 기본 생성자
*/
Member::Member()
{
	id = 1; // For Test
}

/**
* user_type, name, ssn, id, password값을 받아와 초기화하는 생성자
* @param user_type
* @param name
* @param ssn
* @param id
* @param password
*/
Member::Member(string user_type, string name, string ssn, string id, string password)
{
	this->user_type = user_type;
	this->name = name;
	this->ssn = ssn;
	this->id = id;
	this->password = password;
}

/**
* 로그인 시 매개변수로 받아온 id, password를 받아 멤버가 가진 id, password와 비교하여 일치 여부를 bool값으로 리턴한다.
* @param id
* @param password
* @return
*/
bool Member::checkIdAndPassword(string id, string password)
{
	return strcmp(this->id.c_str(), id.c_str()) == 0 &&
		   strcmp(this->password.c_str(), password.c_str()) == 0;
}

/**
* 매개변수로 받아온 id를 받아 멤버가 가진 id와 비교하여 일치 여부를 bool값으로 리턴한다.
* @param id
* @return
*/
bool Member::checkId(string id)
{
	return strcmp(this->id.c_str(), id.c_str()) == 0;
}