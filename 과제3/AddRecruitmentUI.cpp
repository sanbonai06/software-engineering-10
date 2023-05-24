#include "AddRecruitmentUI.h"
#include "AddRecruitment.h"
#include "File.h"
using namespace std;

/**
 * 기본 생성자
 */
AddRecruitmentUI::AddRecruitmentUI()
{
}

void AddRecruitmentUI::startInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

/**
 * file 클래스를 통해 얻은 ifs 파일 포인터를 읽어 task, recruitmentNumber, deadline 정보를 컨트롤 클래스에 전달하고, 전달한 정보를 ofs 파일 포인터에 출력 
 * @param AddRecruitment
 * @param file
 */
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