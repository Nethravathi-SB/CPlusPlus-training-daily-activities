#pragma once
#include<iostream>
#include"Employee.h"
using namespace std;

class WageEmp : public Employee //single level inheritance
{
	int hrs;
	int rate;
public:
	WageEmp();
	WageEmp(int, const char*, int, int, int,int, int);
	int getHrs();
	int getRate();
	void accept();
	void show();
	float computesal();
};

