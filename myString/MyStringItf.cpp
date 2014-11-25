#include "stdafx.h"
#define  MY_STRINGITF_DLL
#include "myString.h"
#include "MyStringItf.h"
#include <assert.h>
using namespace std;
CMyStringItf::CMyStringItf(std::string name,int age):m_pThis(new CmyString(name,age))
{
	assert(m_pThis!=NULL);
}


CMyStringItf::~CMyStringItf(void)
{
	delete m_pThis;
}
int CMyStringItf::Get_Student_Age()
{
	return m_pThis->Get_Student_Age();
}
bool CMyStringItf::Set_Sudent_Age( int age )
{
	m_pThis->Set_Sudent_Age(age);
	return true;
}
string CMyStringItf::Get_Student_Name()
{
	return m_pThis->Get_Student_Name();
}
bool CMyStringItf::Set_Sudent_Name( std::string name )
{
	m_pThis->Set_Sudent_Name(name);
	return true;
}
int CMyStringItf::Get_Version()
{
	return m_pThis->Get_Version();
}
void CMyStringItf::Set_Version(int the_version)
{
	m_pThis->Set_Version(the_version);
}

