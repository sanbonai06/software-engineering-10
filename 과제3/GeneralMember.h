#pragma once
#include "Member.h"
#include <vector>
using namespace std;

class ApplyInfo;

/**
 * 일반 회원 엔티티 클래스
 * 
 */
class GeneralMember : public Member
{
private:
    vector<ApplyInfo *> listOfApplyInfos;

public:
    /**
     * 지원 정보 목록을 초기화하는 생성자
     */
    GeneralMember()
    {
        listOfApplyInfos.clear();
    }

    /**
     * 일반 회원 생성 시 부모 클래스 Member 생성자 호출
     * @param user_type 
     * @param name 
     * @param ssn 
     * @param id 
     * @param password 
     */
    GeneralMember(string user_type, string name, string ssn, string id, string password) : Member(user_type, name, ssn, id, password) {}

    /**
     * 일반 회원이 지원한 정보들 반환
     * @return vector<ApplyInfo *> 
     */
    vector<ApplyInfo *> getApplyInfoList() { return listOfApplyInfos; }

    /**
     * 일반 회원이 지원한 지원 정보 취소 후 반환
     * @param businessNumber 
     * @return ApplyInfo* 
     */
    ApplyInfo *deleteApplyInfo(string businessNumber);

    /**
     * 채용 공고에 지원
     * @param applyInfo 
     */
    void createApply(ApplyInfo *applyInfo);
};