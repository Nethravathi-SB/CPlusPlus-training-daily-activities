#include "SalesPerson.h"
#include "WageEmp.h"
SalesPerson::SalesPerson():sales(0),commission(0)
{
}

SalesPerson::SalesPerson(int id, const char* name, int d, int m , int y, int hrs, int rate,double sal, double comm):WageEmp(id,name,d,m,y,hrs,rate), sales(sal), commission(comm)
{
}

void SalesPerson::accept()
{
	WageEmp::accept();
	
	cout << "eneter the sales and commission" << endl;
	cin >> sales >> commission;
}

void SalesPerson::show()
{
	WageEmp::show();
	cout << "Entered sales and commission is " << sales << " " << commission << endl;
}

float SalesPerson::computesal()
{
	return WageEmp::computesal() + (sales * commission);
	
}
