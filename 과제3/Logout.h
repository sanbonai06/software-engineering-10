#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class DataBase;
class LogoutUI;

/**
 * 로그아웃 유스케이스의 컨트롤 클래스
 * 
 */
class Logout
{
public:

	// 기본 생성자
	Logout();

	/**
	 * database를 받아와 DataBase 클래스를 연결해주는 생성자
	 * @param dataBase 
	 */
	Logout(DataBase *dataBase);

	/**
	 * 로그아웃 유스케이스의 바운더리 클래스를 반환
	 * @return LogoutUI* 
	 */
	LogoutUI *getLogoutUI() { return logoutUI; }

	/**
	 * 현재 로그인 된 유저를 로그아웃 시키고 해당 id 반환
	 * @return string 
	 */
	string tryLogout();

private:
	DataBase *dataBase;
	LogoutUI *logoutUI;
};