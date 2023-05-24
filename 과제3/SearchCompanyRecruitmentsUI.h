#pragma once

class SearchCompanyRecruitments;
class File;

class SearchCompanyRecruitmentsUI
{
public:
	SearchCompanyRecruitmentsUI();

	void StartInterface();
	void SelectCompanyRecruitments(SearchCompanyRecruitments* searchCompanyRecruitments, File* file);
};