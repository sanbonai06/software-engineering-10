#include "GeneralMember.h"
#include "ApplyInfo.h"
#include <cstring>
#include <vector>
using namespace std;

ApplyInfo* GeneralMember::deleteApplyInfo(string businessNumber) {
    vector<ApplyInfo*> applyInfos = this->listOfApplyInfos;
    for(int i=0; i<applyInfos.size(); i++) {
        if(strcmp(businessNumber.c_str(), applyInfos[i]->getBusinessNumber().c_str()) == 0) {
            this->listOfApplyInfos.erase(this->listOfApplyInfos.begin() + i);
            return applyInfos[i];
        }
    }
    return NULL;
}