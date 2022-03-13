#pragma once

class Demo1
{
	int a;
public:
	Demo1();
	Demo1(int);
	void show();
	int geta() { return a; }
	Demo1(const Demo2 d);
	void operator=(const Demo1&);
};