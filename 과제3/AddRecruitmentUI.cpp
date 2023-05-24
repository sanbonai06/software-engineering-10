#include "AddRecruitmentUI.h"
#include "AddRecruitment.h"
#include "File.h"
using namespace std;

AddRecruitmentUI::AddRecruitmentUI()
{
}

void AddRecruitmentUI::startInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void AddRecruitmentUI::createNewRecruitment(AddRecruitment *AddRecruitment, File *file)
{
	// 파일 입력 받기
	string task = "";
	string recruitmentNumber = "";
	string deadline = "";

	file->ifs.seekg(file->readed);
	file->ifs >> task >> recruitmentNumber >> deadline;
	file->readed = file->ifs.tellg();

	AddRecruitment->addNewRecruitment(task, recruitmentNumber, deadline);

	file->ofs << "3.1. 채용 정보 등록" << '\n';

	file->ofs << "> " << task << " " << recruitmentNumber << " " << deadline << '\n'
			  << '\n';
}