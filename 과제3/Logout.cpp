#include "Logout.h"
#include "LogoutUI.h"
#include "DataBase.h"
#include "Member.h"
#include <vector>
using namespace std;

/**
 * 기본 생성자
 * 바운더리 클래스를 받아 startInterface 호출
 */
Logout::Logout()
{
    this->dataBase = nullptr;
    logoutUI = new LogoutUI();
    logoutUI->startInterface();
}

/**
 * database를 받아와 DataBase 클래스를 연결해주는 생성자
 * 바운더리 클래스를 받아 startInterface 호출
 * @param dataBase 
 */
Logout::Logout(DataBase *dataBase)
{
    this->dataBase = dataBase;
    logoutUI = new LogoutUI();
    logoutUI->startInterface();
}

/**
 * 현재 로그인 된 유저를 로그아웃 시키고 해당 id 값 반환
 * @return string 
 */
string Logout::tryLogout()
{
    // dataBase에서 현재 로그인 된 유저의 index를 받음
    int index = this->dataBase->getLogInIndex();
    
    // 반환된 인덱스를 통해 memberList에서 해당 유저를 찾아서 반환
    vector<Member *> memberList = (this->dataBase)->getMemberList();

    // 해당 유저의 id 값을 받고
    string id = memberList[index]->getID();

    // dataBase에서 로그인 인덱스를 차감
    this->dataBase->setLogInIndex(-1);

    // 해당 유저 id 값 반환
    return id;
}