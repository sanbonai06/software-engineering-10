#pragma once

class SearchCompanyRecruitments;
class File;

class SearchCompanyRecruitmentsUI
{
public:
	SearchCompanyRecruitmentsUI();

	void startInterface();
	void selectCompanyRecruitments(SearchCompanyRecruitments *searchCompanyRecruitments, File *file);
};