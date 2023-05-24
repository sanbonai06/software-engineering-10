#include "File.h"
#include "DataBase.h"
#include "JoinMember.h"
#include "JoinMemberUI.h"
#include "ExitMember.h"
#include "ExitMemberUI.h"
#include "LogIn.h"
#include "LogInUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "AddRecruitment.h"
#include "AddRecruitmentUI.h"
#include "SearchCompanyRecruitments.h"
#include "SearchCompanyRecruitmentsUI.h"
#include "ApplyRecruitment.h"
#include "ApplyRecruitmentUI.h"
#include "SearchRecruitments.h"
#include "SearchRecruitmentsUI.h"
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "ApplyInfo.h"
#include "StatisticsApplyInformation.h"
#include "SearchCompanyRecruitmentsUI.h"
#include "CancelApplyInfo.h"
#include "CancelApplyInfoUI.h"
#include "GeneralMember.h"
#include "CompanyMember.h"
#include "Member.h"
#include "Recruitment.h"


void doTask();
void program_exit(File* file);

int main()
{
	doTask();
	return 0;
}

void doTask()
{
	File* file = new File();
	DataBase* dataBase = new DataBase();

	dataBase->setLogInIndex(0);// For Test


	int menu_level_1 = 0, menu_level_2 = 0; int is_program_exit = 0;
	while (!is_program_exit)
	{
		file->ifs >> menu_level_1 >> menu_level_2;
		file->readed = file->ifs.tellg();

		std::cout << menu_level_1 << menu_level_2 << "\n";

		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
				case 1:
				{
					JoinMember* joinMember = new JoinMember(dataBase);
					joinMember->GetJoinMemberUI()->SelectJoinMember(joinMember, file);
					break;
				}
				case 2:
				{
					ExitMember* exitMember = new ExitMember(dataBase);
					exitMember->GetExitMemberUI()->SelectExitMember(exitMember, file);
					break;
				}
			}
			break;
		}
		case 2:
		{
			switch (menu_level_2)
			{
				case 1:
				{
					LogIn* logIn = new LogIn(dataBase);
					logIn->getLogInUI()->inputIdPw(logIn, file);
					break;
				}
				case 2:
				{
					Logout* logout = new Logout(dataBase);
					logout->getLogoutUI()->selectLogout(logout, file);
					break;
				}
			}
			break;
		}
		case 3:
		{
			switch (menu_level_2)
			{
				case 1:
				{
					AddRecruitment* addRecruitment = new AddRecruitment(dataBase);
					addRecruitment->GetAddRecruitmentUI()->createNewRecruitment(addRecruitment, file);
					break;
				}
				case 2:
				{
					SearchCompanyRecruitments* searchCompanyRecruitments = new SearchCompanyRecruitments(dataBase);
					searchCompanyRecruitments->GetSearchCompanyRecruitmentsUI()->SelectCompanyRecruitments(searchCompanyRecruitments, file);
					break;
				}
				case 3:
				{
					break;
				}
			}
			break;
		}
		case 4:
		{
			switch (menu_level_2)
			{
				case 1:
			{
				SearchRecruitment* searchRecruitment = new SearchRecruitment(dataBase);
				searchRecruitment->getSearchRecruitmentUI()->selectRecruitment(searchRecruitment, file);

				break;
			}
			case 2:
			{
				ApplyRecruitment* applyRecruitment = new ApplyRecruitment(dataBase);
				applyRecruitment->getApplyRecruitmentUI()->callSelectApply(applyRecruitment, file);
				break;
			}
			case 3:
			{
				SearchRecruitments* searchRecruitments = new SearchRecruitments(dataBase);
				searchRecruitments->getSearchRecruitmentsUI()->selectRecruitments(searchRecruitments, file);

				break;
			}
				case 4:
				{
					CancelApplyInfo* cancelApplyInfo = new CancelApplyInfo(dataBase);
					cancelApplyInfo->getCancelApplyInfoUI()->callAbortApplyInfo(cancelApplyInfo, file);
					
					break;
				}
			}
			break;
		}
		case 5:
		{
			switch (menu_level_2)
			{
				case 1:
				{
					StatisticsApplyInformation* statisticsApplyInformation = new StatisticsApplyInformation(dataBase);
					statisticsApplyInformation->GetStatisticsApplyInformationUI()->SelectStatisticsApplyInformation(statisticsApplyInformation, file);
					break;
				}
			}
			break;
		}
		case 6:
		{
			switch (menu_level_2)
			{
				case 1:
				{
					program_exit(file);
					is_program_exit = 1;
					exit(1);
					break;
				}
			}
			break;
		}
		}
	}
	return;
}



void program_exit(File* file)
{
    file->ofs << "6.1. " << '\n';
    file->ifs.close();
    file->ofs.close();
}