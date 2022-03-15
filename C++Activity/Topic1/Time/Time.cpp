#include <iostream>
using namespace std;
#include "Time.h"
int Time::get_hh()
{
	return hh;
}
int Time::get_mm()
{
	return mm;
}
int Time::get_ss()
{
	return ss;
}
void Time::convert_time()
{
	if (hh > 12)
	{
		hh -= 12;
	}
	else
	{
		hh += 12;
	}
}
void Time::accept_time()
{
	cout << "Enter the timings" << endl;
	cin >> hh >> mm >> ss;
}
void Time::show_time()
{
	
	cout << hh <<":" << mm <<":"<< ss<<endl;
}