#pragma once
#include "Member.h"

class ExitMember;
class File;
class DataBase;

/**
 * 회원탈퇴 유스케이스의 바운더리 클래스
 */
class ExitMemberUI
{
public:

    /**
	* 기본 생성자
	*/
	ExitMemberUI();

	ExitMemberUI(DataBase *db)
	{
		this->dataBase = db;
	}

    /**
	* GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
	*/
	void startInterface();

    /**
    * file 클래스를 통해 탈퇴회원 id를 ofs 파일 포인터에 출력
    * @param exitMember
    * @param file
    */
	void selectExitMember(ExitMember *exitMember, File *file);

private:
	ExitMember *exitMember;
	DataBase *dataBase;
};
