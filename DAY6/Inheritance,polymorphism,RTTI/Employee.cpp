#include "Employee.h"

Employee::Employee():empid(0),name("nethra"),doj(10,3,2022)
{

}

Employee::Employee(int id, const char* nm, int d, int m, int y)//:empid(id),name(nm),doj(d,m,y)
{
	this->empid = empid;
	this->name = CString(nm); // overloading = operator
	this->doj = Date(d, m, y);// copy cotr 
}

void Employee::accept()
{
	cout << "enter emp id is" << endl;
	cin >> empid >> name >> doj;
}

void Employee::show()
{
	cout << "Emp id is"<<endl;
	cout << empid << endl;
	cout << name << endl;
	cout<< doj << endl;
}
istream& operator>>(istream& in, Employee& e)
{
	cout << "Enter the Emp id" << endl;
	in >> e.empid >> e.name >> e.doj;
	return in;
}

ostream& operator<<(ostream& out, const Employee& e)
{
	out << "Emp id is" << endl;
	out << e.empid <<" " <<e.name<< " " << e.doj << endl;
	return out;
}
