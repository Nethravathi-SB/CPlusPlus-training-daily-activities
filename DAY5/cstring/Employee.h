#pragma once
#include<iostream>
#include"cstring.h"
#include"Date.h"
using namespace std;
class Employee
{
	int empid;
	CString name;
	Date doj;
	
public:
	Employee();
	Employee(int, const char*, int, int, int);
	void accept();
	void show();
	friend istream& operator>>(istream&, Employee&);
	friend ostream& operator<<(ostream&, const Employee&);
};