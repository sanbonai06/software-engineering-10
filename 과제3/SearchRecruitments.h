#pragma once
#include <vector>

using namespace std;

class DataBase;
class SearchRecruitmentsUI;
class Recruitment;

class SearchRecruitments
{

public:
	SearchRecruitments();
	SearchRecruitments(DataBase* dataBase);


	SearchRecruitmentsUI* getSearchRecruitmentsUI() { return searchRecruitmentsUI; };

	vector<Recruitment*> showSearchedRecruitments();

private:
	DataBase* dataBase;
	SearchRecruitmentsUI* searchRecruitmentsUI;
};