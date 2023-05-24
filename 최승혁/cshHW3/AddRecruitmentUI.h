#pragma once

class AddRecruitment;
class File;

class AddRecruitmentUI
{
public:
	AddRecruitmentUI();

	void StartInterface();

	void createNewRecruitment(AddRecruitment* Addrecruitment, File* file);
};