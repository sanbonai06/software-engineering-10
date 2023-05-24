#include "CompanyMember.h"
#include "Recruitment.h"
#include <vector>
using namespace std;

/**
 * recruitment를 가져와 회사 회원 인스턴스가 가진 채용 정보 목록에 등록 
 * @param recruitment
 */
void CompanyMember::createRecruitment(Recruitment* recruitment) {
    this->listOfRecruitments.push_back(recruitment);
}