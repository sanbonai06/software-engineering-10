#pragma once

class AddRecruitment;
class File;

class AddRecruitmentUI
{
public:
	AddRecruitmentUI();

	void startInterface();

	void createNewRecruitment(AddRecruitment *Addrecruitment, File *file);
};