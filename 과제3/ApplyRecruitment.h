#pragma once
#include <vector>
#include <string>
class DataBase;
class ApplyRecruitmentUI;
class Member;
class ApplyInfo;

using namespace std;

class ApplyRecruitment
{
public:
	ApplyRecruitment();
	ApplyRecruitment(DataBase* dataBase);

	ApplyRecruitmentUI* getApplyRecruitmentUI() { return applyRecruitmentUI; };
	ApplyInfo* addApplyRecruitment(string businessNumber);

private:
	DataBase* dataBase;
	ApplyRecruitmentUI* applyRecruitmentUI;
};