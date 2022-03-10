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

CString::CString(char ch, int no)
{
	m_len = no;
	m_pbuff = new char[m_len + 1];
	for (int i = 0; i < m_len; ++i)
		m_pbuff[i] = ch;
	m_pbuff[m_len] = '\0';
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
