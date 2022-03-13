#include<iostream>
#include"cstring.h"
#include<string.h>
#pragma warning(disable:4996)
using namespace std;

CString::CString()
{
	m_len = 0;
	m_pbuff = new char;
	*m_pbuff = '\0';
}

CString::CString(const char* str)
{
	m_len = strlen(str);
	m_pbuff = new char[m_len + 1];
	strcpy(this->m_pbuff, str);
}

CString::CString(const CString& ss)
{
	this->m_len = ss.m_len;
	this->m_pbuff = new char[m_len + 1]; //allocate new memory
	strcpy(m_pbuff, ss.m_pbuff);//perform deep copy
	cout << "copy cotr" << endl;
}

CString::CString(CString&& s)
{
	m_len = s.m_len;
	m_pbuff = s.m_pbuff;
	s.m_pbuff = nullptr;
	cout << "move constructor called" << endl;
}

CString CString::operator+(const CString& s)
{
	CString temp;
	delete[]temp.m_pbuff;
	temp.m_len = m_len + s.m_len;
	m_pbuff = new char[temp.m_len + 1];
	strcpy(temp.m_pbuff, m_pbuff);
	strcat(temp.m_pbuff, s.m_pbuff);
	return temp;
}

CString& CString::operator+=(const char* c)
{
	m_len = strlen(c);
	char* temp = nullptr;
	strcpy(temp,m_pbuff);
	delete[]m_pbuff;
	m_pbuff = new char[m_len + 1];
	strcpy(m_pbuff, temp);
	strcat(m_pbuff, c);
	delete []temp;
	return *this;
}

char& CString::operator[](int index)
{
	if (index >= 0 && index < m_len);
	   return *(m_pbuff + index);
}

CString& CString::operator=(const CString& s)
{
	m_len = s.m_len;
	delete[]m_pbuff;
	m_pbuff = new char[m_len];
	strcpy(m_pbuff, s.m_pbuff);
	return *this;
}

CString& CString::operator=(CString&& s)
{
	if (this == &s)
		return *this;
	else
	{
		cout << "move assignment operator called" << endl;
		m_len = s.m_len;
		m_pbuff = s.m_pbuff;
		s.m_pbuff = nullptr;
		return *this;
	}	
}
CString::CString(char ch, int no)
{
	m_len = no;
	m_pbuff = new char[m_len + 1];
	for (int i = 0; i < m_len; ++i)
		m_pbuff[i] = ch;
	m_pbuff[m_len] = '\0';
}
void CString::acceptstring()
{
	cout << "enter the string" << endl;
	delete[]m_pbuff;
	m_pbuff = new char[80];
	cin.getline(m_pbuff, 80);
	m_len = strlen(m_pbuff);
}

void CString::show_string()
{
	cout << "m_len" << " " << m_len << " m_pbuff " << m_pbuff << endl;
}

CString::~CString()
{
	if (m_pbuff)
		delete m_pbuff;
	m_pbuff = nullptr;
}
