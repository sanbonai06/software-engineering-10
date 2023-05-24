#pragma once
#include <vector>
#include <string>
class DataBase;
class ApplyRecruitmentUI;
class Member;
class Recruitment;

using namespace std;

class ApplyRecruitment
{
public:
	ApplyRecruitment();
	ApplyRecruitment(DataBase* dataBase);

	ApplyRecruitmentUI* getApplyRecruitmentUI() { return applyRecruitmentUI; };
	Recruitment* applyRecruitment(string businessNumber);

private:
	DataBase* dataBase;
	ApplyRecruitmentUI* applyRecruitmentUI;
};