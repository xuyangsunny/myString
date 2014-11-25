#pragma once
#ifndef I_MY_STRING_H
#define  I_MY_STRING_H
#include <string>
#ifdef I_MY_STRING_CALL
#define I_MY_STRING_DLL_CALL _declspec(dllexport)
#else 
#define I_MY_STRING_DLL_CALL _declspec(dllimport)
#endif

class /*I_MY_STRING_DLL_CALL*/ CIMyString
{
public:
	virtual std::string	Get_Student_Name()=0;
	virtual bool Set_Sudent_Name ( std::string name )=0;
	virtual int Get_Student_Age()=0;
	virtual bool Set_Sudent_Age ( int age )=0;
	virtual void Delete()=0;
	virtual int Get_Version()=0; 
	virtual void Set_Version(int the_version)=0;
};
 extern "C"  I_MY_STRING_DLL_CALL CIMyString * CreateMyString(std::string name,int age);
#endif

