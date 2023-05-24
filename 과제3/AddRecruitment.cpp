#include "AddRecruitment.h"
#include "AddRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "Member.h"
#include "CompanyMember.h"
using namespace std;

/**
 * 기본 생성자
 */
AddRecruitment::AddRecruitment()
{
	this->dataBase = nullptr;
	addRecruitmentUI = new AddRecruitmentUI();
	addRecruitmentUI->startInterface();
}

/**
 * dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
 * @param dataBase
 */
AddRecruitment::AddRecruitment(DataBase *dataBase)
{
	this->dataBase = dataBase;
	addRecruitmentUI = new AddRecruitmentUI();
	addRecruitmentUI->startInterface();
}

/**
 * task, recruitmentNumber, deadline을 받아와 현재 로그인중인 회사멤버의 채용정보 리스트에 등록
 * @param task
 * @param recruitmentNumber
 * @param deadline
 */
void AddRecruitment::addNewRecruitment(string task, string recruitmentNumber, string deadline)
{
	Member *findMember = dataBase->getMemberList()[dataBase->getLogInIndex()];
	CompanyMember *member = dynamic_cast<CompanyMember *>(findMember);
	if (stoi(member->getType()) == 1)
	{
		string name = member->getName();
		string ssn = member->getSSN();
		Recruitment *newRecruitment = new Recruitment(task, recruitmentNumber, deadline, name, ssn);
		member->createRecruitment(newRecruitment);
	}
}