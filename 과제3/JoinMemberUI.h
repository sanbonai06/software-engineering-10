#pragma once
#include "Member.h"

class JoinMember;
class File;

class JoinMemberUI
{
public:
	JoinMemberUI();

	void startInterface();
	void selectJoinMember(JoinMember *joinmember, File *file);

private:
	JoinMember *joinMember;
};