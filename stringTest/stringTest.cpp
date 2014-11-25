// stringTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "IMyString.h"
#include <iostream>
using namespace std;

CIMyString* CallCreateString(std ::string name,int age)
{
	static CIMyString *(*pfn)(std::string name,int age)=0;
	if (!pfn)
	{
		const TCHAR szdll[]=_TEXT("myString.dll");
		const char szFn[]="CreateMyString";
		HINSTANCE h=LoadLibrary(szdll);
		if (h)
		{
			*(FARPROC*)&pfn=GetProcAddress(h,szFn);//这个还没有搞清怎么转换
		}


	}
	return pfn?pfn(name,age):0;
}
int _tmain(int argc, _TCHAR* argv[])
{
	/*CMyStringItf myString("xuyang",25);
	CMyStringItf myString2("xuyang2",25);
	cout<<"student name:"<<myString.Get_Student_Name()<<"    student age:"<<myString.Get_Student_Age()<<endl;
	cout<<myString.Get_Version()<<endl;
	cout<<myString2.Get_Version()<<endl;
	myString.Set_Version(8);
	cout<<myString.Get_Version()<<endl;
	cout<<myString2.Get_Version()<<endl;*/
	
	CIMyString *pString=CallCreateString("xuyang",25);
	pString->Set_Sudent_Age(26);
	cout<<"student name:"<<pString->Get_Student_Name()<<"    student age:"<<pString->Get_Student_Age()<<endl;
	pString->Set_Version(12);
	cout<<pString->Get_Version()<<endl;
	pString->Delete();
	
	system("pause");
	return 0;
}

