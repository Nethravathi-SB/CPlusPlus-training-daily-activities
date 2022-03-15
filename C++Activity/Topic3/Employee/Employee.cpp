#include <iostream>
#include "Employee.h"

#pragma warning(disable:4996)
using namespace std;

Emp::Emp()
{
	emp_no = 0;
	name = new char;
	department = new char;
}

void Emp::get_employee_details()
{
	cout << "Enter the Employee No Name Department" << endl;
	cin >> emp_no;
	char* temp = new char[20];
	cin >> temp;
	strcpy(name, temp);
	cin >> temp;
	strcpy(department, temp);
	delete[] temp;
}

void Emp::display_employee_details()
{
	cout << emp_no << "\t" << name << "\t" << department << endl;
}

Emp::~Emp()
{
	delete[] name;
	name = nullptr;
	delete[] department;
	department = nullptr;

}