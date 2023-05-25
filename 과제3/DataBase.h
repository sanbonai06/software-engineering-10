#pragma once
#include <vector>
#include <string>
using namespace std;

class Member;

/**
 * 멤버 클래스의 콜렉션 클래스
 */
class DataBase
{
public:
	/**
	 * 기본 생성자. 멤버 리스트를 초기화하고 현재 로그인한 멤버의 인덱스를 -1로 설정해 초기 상태를 알림
	 */
	DataBase();

	vector<Member *> getMemberList() { return memberList; }

	/**
	 * 현재 로그인한 멤버의 리스트상 인덱스를 반환
	 * @return logInIndex 
	 */
	int getLogInIndex() { return logInIndex; }

	/**
	 * 현재 로그인한 멤버를 리스트의 index번째 회원으로 설정
	 */
	void setLogInIndex(int index) { logInIndex = index; } // For Test

	/**
	 * 멤버 리스트에서 index에 해당하는 멤버를 삭제
	 * @param index
	 */
	void deleteMember(int index) { memberList.erase(memberList.begin() + index); }

	/**
	 * 멤버 리스트에 매개변수로 받아온 member를 추가.
	 */
	void addMember(Member *member) { memberList.push_back(member); } // For Test

private:
	vector<Member *> memberList;

	int logInIndex;
};