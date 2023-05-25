#pragma once
#include <iostream>
#include <vector>
#include "Recruitment.h"
#include "DataBase.h"
#include "ApplyInfo.h"
#include <cstring>
using namespace std;

/**
 * 회원 엔티티 클래스
 */
class Member
{
public:
	/**
	 * 기본 생성자
	 */
	Member();

	/**
	 * user_type, name, ssn, id, password값을 받아와 초기화하는 생성자
	 * @param user_type
	 * @param name
	 * @param ssn
	 * @param id
	 * @param password
	 */
	Member(string user_type,  string name,  string ssn,  string id,  string password);

	/**
	 * 로그인 시 매개변수로 받아온 id, password를 받아 멤버가 가진 id, password와 비교하여 일치 여부를 bool값으로 리턴한다.
	 * @param id
	 * @param password
	 * @return 
	 */
	bool checkIdAndPassword(string id, string password);

	/**
	 * 매개변수로 받아온 id를 받아 멤버가 가진 id와 비교하여 일치 여부를 bool값으로 리턴한다.
	 * @param id
	 * @return 
	 */
	bool checkId(string id);
	//void CheckLogInInfo();

	string getID() {
		return id; }
	string getSSN() {
		return ssn; }
	string getPassword() {
		return password; }
	string getName() {
		return name;
	}
	string getType() {
		return user_type;
	}
	void setUserType(string newUserType) {
		this->user_type = newUserType;
	}

	void setName(string name) {
		this->name = name;
	}

	void setSsn(string ssn) {
		this->ssn = ssn;
	}

	void setId(string id) {
		this->id = id;
	}

	void setPassword(string password) {
		this->password = password;
	}

	/**  
	 * 회원 클래스가 최소 하나의 virtual 함수를 갖게 하기 위해 만든 dummy 함수
	 */
	virtual void toPoly() {
		cout << "Parent"
	}

private:
	string user_type;
	string name;
	string ssn;
	string id;
	string password;
};