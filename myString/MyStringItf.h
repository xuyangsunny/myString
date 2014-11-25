#pragma once
#ifndef MY_STRINGITF_H
#define MY_STRINGITF_H
#ifndef MY_STRINGITF_DLL
#define MY_STRINGITF_DLL_CALL _declspec(dllimport)
#else
#define MY_STRINGITF_DLL_CALL _declspec(dllexport)
#endif
#include <string>
class CmyString;/*为什么只能在外面*/
class /*MY_STRINGITF_DLL_CALL*/ CMyStringItf
{
	
	CmyString *m_pThis;
public:
	CMyStringItf(std::string name,int age);
	~CMyStringItf(void);
public:
	std::string	Get_Student_Name();
	bool Set_Sudent_Name ( std::string name );
	int Get_Student_Age();
	bool Set_Sudent_Age ( int age );
	int Get_Version();
	void Set_Version(int the_version);
};

#endif // 