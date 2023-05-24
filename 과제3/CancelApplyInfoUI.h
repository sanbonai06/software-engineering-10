#pragma once

class CancelApplyInfo;
class File;

class CancelApplyInfoUI {
    private:
    
    public:
        CancelApplyInfoUI();

        void startInterface();

        void callAbortApplyInfo(CancelApplyInfo* cancelApplyInfo, File* file);
}