#pragma once
#include <string>
using namespace std;

class DataBase;
class CancelApplyInfoUI;
class ApplyInfo;

/**
 * 지원 취소 유스케이스의 컨트롤 클래스
 * 
 */
class CancelApplyInfo
{
private:
    DataBase *dataBase;
    CancelApplyInfoUI *cancelApplyInfoUI;

public:
    // 기본 생성자
    CancelApplyInfo();

    /**
     * dataBase를 받아와 클래스의 dataBase에 연결하는 생성자
     * 
     * @param dataBase 
     */
    CancelApplyInfo(DataBase *dataBase)
    {
        this->dataBase = dataBase;
    }

    /**
     * 지원 취소 유스케이스의 바운더리 클래스를 반환
     * @return CancelApplyInfoUI* 
     */
    CancelApplyInfoUI *getCancelApplyInfoUI() { return cancelApplyInfoUI; }

    /**
     * businessNumber를 통해 지원 정보를 찾고 해당 지원 정보 취소 후 반환
     * 
     * @param businessNumber 
     * @return ApplyInfo* 
     */
    ApplyInfo *cancelApplyInfo(string businessNumber);
};