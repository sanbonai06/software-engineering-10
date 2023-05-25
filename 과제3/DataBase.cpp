#include "DataBase.h"
#include "Member.h"

/**
 * 기본 생성자. 멤버 리스트를 초기화하고 현재 로그인한 멤버의 인덱스를 -1로 설정해 초기 상태를 알림
 */
DataBase::DataBase()
{
	logInIndex = -1;
	memberList.clear();
}