#pragma once
#include <iostream>
using namespace std;

class DataBase;
class AddRecruitmentUI;

class AddRecruitment
{
public:
	AddRecruitment();
	AddRecruitment(DataBase *dataBase);

	AddRecruitmentUI *getAddRecruitmentUI() { return addRecruitmentUI; }

	void addNewRecruitment(string task, string recruitmentNumber, string deadline);

private:
	DataBase *dataBase;
	AddRecruitmentUI *addRecruitmentUI;
};