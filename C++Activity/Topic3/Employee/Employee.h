#pragma once

class Emp
{
	int emp_no;
	char* name;
	char* department;
public:
	Emp();
	void get_employee_details();
	void display_employee_details();
	~Emp();
};