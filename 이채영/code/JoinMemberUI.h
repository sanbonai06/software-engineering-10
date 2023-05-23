#pragma once
#include "Member.h"

class JoinMember;
class File;

class JoinMemberUI
{
public:
	JoinMemberUI();

	void StartInterface();
	void SelectJoinMember(JoinMember* joinmember, File* file);

private:
	JoinMember* joinMember;
};