#pragma once
#include "SearchRecruitment.h"
#include "File.h"

class SearchRecruitmentUI
{
public:
	SearchRecruitmentUI();

	void startInterface();
	void selectRecruitment(SearchRecruitment* searchRecruitment, File* file);

private:
	SearchRecruitment* searchRecruitment;
};