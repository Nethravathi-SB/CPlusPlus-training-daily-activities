#include<iostream>
#include "Demo1.h"
#include "Demo2.h"

Demo1::Demo1():a(a)
{

}
Demo1::Demo1(int a):a(10)
{

}
void Demo1::show()
{

}
 Demo1::Demo1(Demo2 d )
{
	 a = d.getb();
}

void Demo1::operator=(Demo2 d)
{
	a = d.getb();
}

Demo2::Demo2():b(10)
{

}
Demo2::Demo2(int b):b(b)
{

}
void Demo2::show()
{

}
void Demo2::operator=(const Demo2&)
{
}
int main()
{
	Demo1 a1(1000);
	Demo2 b1(3000);

	a1 = x1;
	a1.show();

	a1 = Demo1(x1);
	a1.show();

	a1 = x1.operator Demo1();
	a1.show();
}