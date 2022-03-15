#pragma once
#include<iostream>
#include"WageEmp.h"
using namespace std;

class SalesPerson : public WageEmp //multi level inheritance
{
	int sales;
	int commission;
public:
	SalesPerson();
	SalesPerson(int,const char*,int, int, int,int, int,double, double);
    void accept();
	void show();
	float computesal();
};


