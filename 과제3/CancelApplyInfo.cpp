#include "CancelApplyInfo.h"
#include "ApplyInfo.h"
#include "Member.h"
#include "GeneralMember.h"
#include <vector>
#include <cstring>
using namespace std;


ApplyInfo* CancelApplyInfo::cancelApplyInfo(string businessNumber) {
    int loginIndex = this->dataBase->GetLogInIndex();
    vector<Member*> memberList = this->dataBase->GetMemberList(); 
    Member* loginMember = memberList[loginIndex];
    GeneralMember* generalMember = dynamic_cast<GeneralMember*>(loginMember);
    return generalMember->deleteApplyInfo(businessNumber);
}