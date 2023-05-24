#pragma once
#include <vector>

class DataBase;
class SearchCompanyRecruitmentsUI;
class Recruitment;

class SearchCompanyRecruitments
{
public:
	SearchCompanyRecruitments();
	SearchCompanyRecruitments(DataBase* dataBase);

	SearchCompanyRecruitmentsUI* GetSearchCompanyRecruitmentsUI() { return searchCompanyRecruitmentsUI; }

	std::vector<Recruitment*> ShowCompanyRecruitments();

private:
	DataBase* dataBase;
	SearchCompanyRecruitmentsUI* searchCompanyRecruitmentsUI;
};
