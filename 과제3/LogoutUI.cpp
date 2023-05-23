#include "LogoutUI.h"
#include "Logout.h"
#include "Member.h"
#include "File.h"

LogoutUI::LogoutUI()
{
}

void LogoutUI::startInterface()
{
    // GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void LogoutUI::selectLogout(Logout* logout, File* file)
{
    string id;
    file->ifs.seekg(file->readed);
	file->ifs >> id;
	file->readed = file->ifs.tellg();
    string result = logout->TryLogout(id);
    file->ofs << "2.2. �α׾ƿ�" << '\n';
    file->ofs << "> " << result << " " << "\n" << "\n";
}