#pragma once
#include <vector>
using namespace std;

class DataBase;
class SearchCompanyRecruitmentsUI;
class Recruitment;

class SearchCompanyRecruitments
{
public:
	SearchCompanyRecruitments();
	SearchCompanyRecruitments(DataBase* dataBase);

	SearchCompanyRecruitmentsUI* GetSearchCompanyRecruitmentsUI() { return searchCompanyRecruitmentsUI; }

	vector<Recruitment*> ShowCompanyRecruitments();

private:
	DataBase* dataBase;
	SearchCompanyRecruitmentsUI* searchCompanyRecruitmentsUI;
};
