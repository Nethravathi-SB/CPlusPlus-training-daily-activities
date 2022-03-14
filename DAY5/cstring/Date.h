#pragma once
#include<iostream>
using namespace std;
class Date
{
	int dd, mm, yy;
public:
	Date();
	Date(int, int, int);
	void acceptDate();
	void showDate();
	friend istream& operator>>(istream&, Date&);
	friend ostream& operator<<(ostream&, const Date&);
};