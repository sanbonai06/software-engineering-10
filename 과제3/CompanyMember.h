#pragma once

#include "Member.h"
#include <vector>
using namespace std;

class Recruitment;

/**
 * 회사 회원 엔티티 클래스
 */
class CompanyMember : public Member {
    private:
        vector<Recruitment*> listOfRecruitments;
    public:
        /**
         * 채용 정보 목록을 초기화하는 생성자
         */
        CompanyMember() {
            listOfRecruitments.clear();
        }

        CompanyMember(string user_type, string name, string ssn, string id, string password) : Member(user_type, name, ssn, id, password) {}

        vector<Recruitment*> getRecruitmentList() { return listOfRecruitments; }

        /**
        * recruitment를 가져와 회사 회원 인스턴스가 가진 채용 정보 목록에 등록
        * @param recruitment
        */
        void createRecruitment(Recruitment* recruitment);

};