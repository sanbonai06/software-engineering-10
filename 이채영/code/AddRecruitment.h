#pragma once
#include <iostream>

class DataBase;
class AddRecruitmentUI;

class AddRecruitment
{
public:
	AddRecruitment();
	AddRecruitment(DataBase* dataBase);

	AddRecruitmentUI* GetAddRecruitmentUI() { return addRecruitmentUI; }

	void AddNewRecruitment(std::string task, std::string recruitmentNumber, std::string deadline);

private:
	DataBase* dataBase;
	AddRecruitmentUI* addRecruitmentUI;
};