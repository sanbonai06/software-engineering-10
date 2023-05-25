#pragma once
#include <iostream>
#include <vector>
#include "Recruitment.h"
#include "DataBase.h"
#include "ApplyInfo.h"
#include <cstring>
using namespace std;

class Member
{
public:
	Member();
	Member(string user_type,  string name,  string ssn,  string id,  string password);

	bool checkIdAndPassword(string id, string password);
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