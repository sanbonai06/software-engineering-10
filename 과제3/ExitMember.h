#pragma once
#include <iostream>
#include <string>
using namespace std;

class DataBase;
class ExitMemberUI;

/**
 * 회원 탈퇴 유스케이스의 컨트롤 클래스
 */
class ExitMember
{
public:
    /**
	* 기본 생성자
	 */
	ExitMember();

    /**
	* dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
	* @param dataBase
	*/
	ExitMember(DataBase *dataBase);

    /**
	 * 회원탈퇴 유스케이스의 바운더리 클래스를 반환
	 * @return exitMemberUI
	 */
	ExitMemberUI *getExitMemberUI() { return exitMemberUI; }

    /**
	* id을 받아와 현재 로그인중인 멤버를 데이터베이스 상에서 삭제(탈퇴)
	* @return returnId
	*/
	string tryExitMember();

private:
	DataBase *dataBase;
	ExitMemberUI *exitMemberUI;
};
