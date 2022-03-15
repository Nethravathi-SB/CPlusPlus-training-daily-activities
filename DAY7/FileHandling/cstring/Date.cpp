#include<iostream>
#include "Date.h"
using namespace std;

istream& operator>>(istream& in, Date& d)
{
	cout << "enter the date" << endl;
	in >> d.dd >> d.mm >> d.yy;
	return in;
}
ostream& operator<<(ostream& out, const Date& d)
{
	out << "Enetered Date is" << endl;
	out << d.dd << "-" << d.mm << "-" << d.yy << endl;	
	return out;
}

Date::Date():dd(1),mm(10),yy(1970)
{

}

Date::Date(int d, int m, int y)
{
	this->dd = d;
	this->mm = m;
	this->yy = y;
}

void Date::acceptDate()
{
	cout << "enter the date" << endl;
	cin >> dd >> mm >> yy;
}

void Date::showDate()
{
	cout << "Enetered Date is" << endl;
	cout << dd << "-" << mm << "-" << yy << endl;
}
