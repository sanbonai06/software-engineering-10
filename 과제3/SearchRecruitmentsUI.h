#pragma once

class SearchRecruitments;
class File;

class SearchRecruitmentsUI
{
public:
	SearchRecruitmentsUI();

	void startInterface();
	void selectRecruitments(SearchRecruitments* searchRecruitments, File* file);

private:
	SearchRecruitments* searchRecruitments;
};