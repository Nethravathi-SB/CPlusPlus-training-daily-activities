// friends.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Demo
{
	int x;
	static int y;
public:
	Demo() :x(10){}
	void showx() { cout << x << endl; }
	friend void function();
	friend int main();
};
void function()
{
	Demo d1;
	cout << d1.y;
	d1.x = 1000;
	cout << d1.x << endl;
}
class ABC
{
	int x;
public:
	ABC() :x(10) {}
	void showx() { cout << "ABC" << endl; }
	friend class XYZ;
	
};
class XYZ
{
	int x;
public:
	XYZ() :x(10) {}
	//void showx() { cout << "XYZ" << endl; }
	friend void ABC::showx();
};
void showx()
{
	cout << "XYZ" << endl;
}

int main()
{
	//Demo d1;
	//cout << d1.x;
	ABC a;
	a.showx();
	XYZ x;
	showx();
	cout << "friend" << endl;
	//function();
}

