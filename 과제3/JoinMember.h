#pragma once
#include <iostream>
using namespace std;

class DataBase;
class JoinMemberUI;

/**
 * 회원가입 유스케이스의 컨트롤 클래스
 */
class JoinMember
{
public:
	/**
	* 기본 생성자
	 */
	JoinMember();

	/**
	* dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
	* @param dataBase
	*/
	JoinMember(DataBase *dataBase);

	/**
	 * 회원가입 유스케이스의 바운더리 클래스를 반환
	 * @return joinMemberUI
	 */
	JoinMemberUI *getJoinMemberUI() { return joinMemberUI; }


	/**
	* user_type, name, SSN, id, password을 받아와 현재 로그인중인 회사멤버의 채용정보 리스트에 등록
	* @param user_type
	* @param name
	* @param SSN
	* @param id
	* @param password
	* @param boolean
	*/
	bool addNewMember(string user_type, string name, string SSN, string id, string password);

private:
	DataBase *dataBase;
	JoinMemberUI *joinMemberUI;
};
