#pragma once
class CString
{
	int m_len;
	char* m_pbuff; // dynamic attribute
public:
	CString(); // default constructor
	CString(const char*);// parameterized constructor 
	CString(char, int);
	void show_string();
	~CString();// destructor

};
