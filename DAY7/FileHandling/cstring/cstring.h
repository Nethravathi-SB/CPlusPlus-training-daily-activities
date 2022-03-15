#pragma once
#include<iostream>
using namespace std;
class CString
{
	int m_len;
	char* m_pbuff; // dynamic attribute
public:
	CString(); // default constructor
	CString(const char*);// parameterized constructor 
	CString(const CString&);//copy constructor
	CString(CString&&);
	CString operator+(const CString&);
	CString& operator+=(const char*);
	char& operator[](int);
	CString& operator=(const CString&);
	CString& operator=(CString&&);
	friend istream& operator>>(istream&, CString&);
	friend ostream& operator<<(ostream&, const CString&);
    CString(char, int);
	void acceptstring();
	void show_string();
	~CString();// destructor

};
