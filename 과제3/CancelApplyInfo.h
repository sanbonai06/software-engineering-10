#pragma once
#include <cstring>
using namespace std;

class DataBase;
class CancelApplyInfoUI;
class ApplyInfo;
class CancelApplyInfo {
    private:
        DataBase* dataBase;
        CancelApplyInfoUI* cancelApplyInfoUI;

    public:
        CancelApplyInfo();
        CancelApplyInfo(DataBase* dataBase) {
            this->dataBase = dataBase;
        }

        CancelApplyInfoUI* getCancelApplyInfoUI() { return cancelApplyInfoUI; }

        ApplyInfo* cancelApplyInfo(string ssn);
}