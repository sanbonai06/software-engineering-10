#pragma once
#include "Member.h"

class JoinMember;
class File;
/**
 * 회원가입 유스케이스의 바운더리 클래스
 */
class JoinMemberUI
{
public:
	/**
	* 기본 생성자
	*/
	JoinMemberUI();

	/**
	* GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
	*/
	void startInterface();

	/**
	* file 클래스를 통해 얻은 ifs 파일 포인터를 읽어 user_type, name, SSN, id, password 정보를 컨트롤 클래스에 전달하고, 전달한 정보를 ofs 파일 포인터에 출력
	* @param joinmember
	* @param file
	*/
	void selectJoinMember(JoinMember *joinmember, File *file);

private:
	JoinMember *joinMember;
};