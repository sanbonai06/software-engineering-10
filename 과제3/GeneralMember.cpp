#include "GeneralMember.h"
#include "ApplyInfo.h"
#include <cstring>
#include <vector>
using namespace std;

/**
 * businessNumber를 통해 지원 정보 vector에서 해당 지원 정보를 찾고 지우고 반환
 * @param businessNumber 
 * @return ApplyInfo* 
 */
ApplyInfo *GeneralMember::deleteApplyInfo(string businessNumber)
{
    // 현재 유저의 지원 정보 리스트를 갖고옴
    vector<ApplyInfo *> applyInfos = this->listOfApplyInfos;

    // loop를 통해서 businessNumber가 같은 지원 정보를 찾은 뒤 vector에서 삭제 후 반환
    for (int i = 0; i < applyInfos.size(); i++)
    {
        if (strcmp(businessNumber.c_str(), applyInfos[i]->getbusinessNumber().c_str()) == 0)
        {
            this->listOfApplyInfos.erase(this->listOfApplyInfos.begin() + i);
            return applyInfos[i];
        }
    }
    return NULL;
}

/**
 * 유저의 지원 정보 생성
 * @param applyInfo 
 */
void GeneralMember::createApply(ApplyInfo *applyInfo)
{
    // 인자로 받은 생성된 지원 정보를 유저의 지원 정보 vector에 push
    this->listOfApplyInfos.push_back(applyInfo);
}