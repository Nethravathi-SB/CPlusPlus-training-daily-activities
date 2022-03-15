#include "Manager.h"
#include<iostream>
using namespace std;

Manager::Manager() :no_sub(0), sal(0.0f)
{
}
Manager::Manager(int id, const char* name, int d, int m, int y,int  sub ,float salary) :Employee(id,name,d,m,y), no_sub(sub), sal(salary)
{

}
void Manager::accept()
{
	Employee::accept();
	
	cout << " enter the subbordinates and salaray"<<endl;
	cin >> no_sub >> sal;
}

void Manager::show()
{
	Employee::show();
	cout << "sub" << " " << no_sub << endl;
	cout << "sal" << " " << sal << endl;
}
float Manager::computesal()
{
	return (no_sub * sal);
}
