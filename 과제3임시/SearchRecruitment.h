#pragma once
#include <iostream>
#include <vector>

class DataBase;
class SearchRecruitmentUI;
class Recruitment;

using namespace std;

class SearchRecruitment
{
public:
	SearchRecruitment();
	SearchRecruitment(DataBase* dataBase);


	SearchRecruitmentUI* getSearchRecruitmentUI() { return searchRecruitmentUI; };

	vector<Recruitment*> showSearchedRecruitment(string name);

private:
	DataBase* dataBase;
	SearchRecruitmentUI* searchRecruitmentUI;
};