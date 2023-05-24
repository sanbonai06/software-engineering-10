#pragma once
#include "Member.h"
#include <vector>

class ApplyInfo;

class GeneralMember : public Member {
    private:
        vector<ApplyInfo*> listOfApplyInfos;

    public:
        GeneralMember() {
            listOfApplyInfos.clear();
        }
        GeneralMember(string user_type, string name, string ssn, string id, string password) : Member(user_type, name, ssn, id, password) {}
        vector<ApplyInfo*> getApplyInfoLIst() { return listApplyInfos; }

}