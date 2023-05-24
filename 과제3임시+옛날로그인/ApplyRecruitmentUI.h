#pragma once

class ApplyRecruitment;
class File;

class ApplyRecruitmentUI
{
public:
	ApplyRecruitmentUI();

	void startInterface();
	void callSelectApply(ApplyRecruitment* applyRecruitment, File* file);

};