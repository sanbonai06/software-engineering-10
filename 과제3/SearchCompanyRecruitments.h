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
	SearchCompanyRecruitments(DataBase *dataBase);

	SearchCompanyRecruitmentsUI *getSearchCompanyRecruitmentsUI() { return searchCompanyRecruitmentsUI; }

	vector<Recruitment *> showCompanyRecruitments();

private:
	DataBase *dataBase;
	SearchCompanyRecruitmentsUI *searchCompanyRecruitmentsUI;
};
