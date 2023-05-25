#pragma once

class ApplyRecruitment;
class File;

class ApplyRecruitmentUI
{
public:
	/**
	 * 기본 생성자
	*/
	ApplyRecruitmentUI();

	/**
	 * GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
	*/
	void startInterface();

	/**
 	* file 클래스를 통해 얻은 ifs 파일 포인터를 읽어 businessNumber 정보를 컨트롤 클래스에 전달하고,
 	* 지원 정보를 파일 포인터에 출력
 	* @Param applyRecruitment
 	* @Param file
	*/
	void callSelectApply(ApplyRecruitment* applyRecruitment, File* file);

};