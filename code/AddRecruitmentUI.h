#pragma once

class AddRecruitment;
class File;

class AddRecruitmentUI
{
public:
	AddRecruitmentUI();

	void StartInterface();

	void GetRecruitmentForm(AddRecruitment* Addrecruitment, File* file);
};