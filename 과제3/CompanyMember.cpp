#include "CompanyMember.h"
#include "Recruitment.h"
#include <vector>
using namespace std;

void CompanyMember::createRecruitment(Recruitment* recruitment) {
    this->listOfRecruitments.push_back(recruitment);
}