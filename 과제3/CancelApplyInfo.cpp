#include "CancelApplyInfo.h"
#include "ApplyInfo.h"
#include "Member.h"
#include "GeneralMember.h"
#include <vector>
#include <cstring>
using namespace std;


ApplyInfo* CancelApplyInfo::cancelApplyInfo(string businessNumber) {
    int loginIndex = dataBase->getLogInIndex();
    vector<Member*> memberList = dataBase->getMemberList(); 
    Member* loginMember = memberList[loginIndex];
    GeneralMember* generalMember = dynamic_cast<GeneralMember*>(loginMember);
    return generalMember->deleteApplyInfo(businessNumber);
}