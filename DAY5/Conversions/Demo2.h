#pragma once
class Demo1;
class Demo2
{
	int b;
public:
	Demo2();
	Demo2(int);
	void show();
	int getb() { return b; }
	void operator=(const Demo2);
	Demo2 operator Demo1();
};