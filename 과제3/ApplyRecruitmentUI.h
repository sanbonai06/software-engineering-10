#pragma once

class ApplyRecruitment;
class File;

class ApplyRecruitmentUI
{
public:
	ApplyRecruitmentUI();

	void startInterface();
	void callSelectRecruitment(ApplyRecruitment* applyRecruitment, File* file);

};