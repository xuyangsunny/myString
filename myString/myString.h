#pragma once
#ifndef MY_STRING_H
#define  MY_STRING_H
#include <string>
#include "IMyString.h"
typedef struct Student
{
    int age;
    std::string name;
} StudentInfo;
#ifdef MY_STRING_CALL
#define DLL_CALL _declspec(dllexport)
#else 
#define DLL_CALL _declspec(dllimport)
#endif
extern "C"
{
	class /*_declspec(dllexport)*/ CmyString :public CIMyString{
	public:
		CmyString(std::string name,int age);
		~CmyString();
		std::string	Get_Student_Name();
		bool Set_Sudent_Name ( std::string name );
		int Get_Student_Age();
		bool Set_Sudent_Age ( int age );
		void Delete();
		 int Get_Version();
		 void Set_Version(int the_version);
	private:
		static  int version;
		StudentInfo* pSi;
	};
};

#endif
