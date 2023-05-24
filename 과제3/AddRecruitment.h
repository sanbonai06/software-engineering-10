#pragma once
#include <iostream>
using namespace std;

class DataBase;
class AddRecruitmentUI;

class AddRecruitment
{
public:
	AddRecruitment();
	AddRecruitment(DataBase* dataBase);

	AddRecruitmentUI* GetAddRecruitmentUI() { return addRecruitmentUI; }

	void AddNewRecruitment(string task, string recruitmentNumber, string deadline);

private:
	DataBase* dataBase;
	AddRecruitmentUI* addRecruitmentUI;
};