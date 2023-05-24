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
					addRecruitment->GetAddRecruitmentUI()->GetRecruitmentForm(addRecruitment, file);
					break;
				}
				case 2:
				{
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
					break;
				}
				case 2:
				{
					break;
				}
				case 3:
				{
					break;
				}
				case 4:
				{
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
					//StatisticsApplyInformation* statisticsApplyInformation = new StatisticsApplyInformation(dataBase);
					//statisticsApplyInformation->GetStatisticsApplyInformationUI()->SelectStatisticsApplyInformation(statisticsApplyInformation, file);
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