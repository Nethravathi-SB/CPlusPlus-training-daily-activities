#pragma once
#include<iostream>
#include"Employee.h"
using namespace std;

class Manager: public Employee
{
	int no_sub;
	float sal;
public: 
	Manager();
	Manager(int, const char*, int,int, int,int, float);
	void accept();
	void show();
	float computesal();
};

