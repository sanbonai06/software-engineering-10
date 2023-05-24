#pragma once
#include <vector>

using namespace std;

class DataBase;
class SearchRecruitmentsUI;
class ApplyInfo;

class SearchRecruitments
{

public:
	SearchRecruitments();
	SearchRecruitments(DataBase* dataBase);


	SearchRecruitmentsUI* getSearchRecruitmentsUI() { return searchRecruitmentsUI; };

	vector<ApplyInfo*> showSearchedRecruitments();

private:
	DataBase* dataBase;
	SearchRecruitmentsUI* searchRecruitmentsUI;
};