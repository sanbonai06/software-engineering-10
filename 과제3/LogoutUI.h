#pragma once
#include "Member.h"

class Logout;
class File;

/**
 * 로그아웃 유스케이스의 바운더리 클래스
 * 
 */
class LogoutUI
{
public:

	// 기본 생성자
	LogoutUI() {}

	/**
	 * GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
	 */
	void startInterface();

	/**
	 * 로그아웃한 유저의 정보를 파일에 출력
\	 * @param logOut 
	 * @param file 
	 */
	void selectLogout(Logout* logOut, File* file);
private:
	Logout* logout;
};

