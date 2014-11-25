// myString.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#define  MY_STRING_CALL

#include "myString.h"

CIMyString * CreateMyString(std::string name,int age)
{
	return new CmyString(name,age);
}
 int CmyString::version=5;
CmyString::CmyString(std::string name,int age)
{
	pSi=new StudentInfo();
	pSi->name=name;
	pSi->age=age;
}
void CmyString::Delete()
{
	if (pSi!=NULL)
	{
		delete this;
	}
}
CmyString::~CmyString()
{
	if (pSi!=NULL)
	{
		delete pSi;
	}
	
}

//************************************
// Method:    Get_Student_Name
// FullName:  CmyString::Get_Student_Name
// Access:    public 
// Returns:   std::string
// Qualifier:
//************************************
std::string CmyString::Get_Student_Name()
{
	return pSi->name;
}
//************************************
// Method:    Set_Sudent_Name
// FullName:  CmyString::Set_Sudent_Name
// Access:    public 
// Returns:   bool
// Qualifier:
// Parameter: std::string name
//************************************
bool CmyString::Set_Sudent_Name ( std::string name )
{
	pSi->name=name;
	return true;
}
//************************************
// Method:    Get_Student_Age
// FullName:  CmyString::Get_Student_Age
// Access:    public 
// Returns:   int
// Qualifier:
//************************************
int CmyString:: Get_Student_Age()
{
	return pSi->age;
}
//************************************
// Method:    Set_Sudent_Age
// FullName:  CmyString::Set_Sudent_Age
// Access:    public 
// Returns:   bool
// Qualifier:
// Parameter: int age
//************************************
bool CmyString::Set_Sudent_Age ( int age )
{
	pSi->age=age;
	return true;
}
 //************************************
 // Method:    Get_Version
 // FullName:  CmyString::Get_Version
 // Access:    public static 
 // Returns:   int
 // Qualifier:
 //************************************
 int CmyString::Get_Version()
{
	return version;
}
 //************************************
 // Method:    Set_Version
 // FullName:  CmyString::Set_Version
 // Access:    public static 
 // Returns:   void
 // Qualifier:
 // Parameter: int the_version
 //************************************
 void CmyString::Set_Version(int the_version)
 {
	 version=the_version;
 }
