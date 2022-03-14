

#include <iostream>
using namespace std;
class Base
{
public:
	void foo()
	{
		cout << "foo base" << endl; // Base * const this
	}
	void foo(int x)
	{
		cout << "foo int base" << endl;
	}
	void foo(float x)
	{
		cout << "foo float base" << endl;
	}
};
class Derived : Base
{
public:
	//using Base::foo;//making all the overloaded function of base
	void foo(int x)
	{
		cout << "foo int derived" << endl;
	}
	void foo(float x)
	{
		Base::foo(x);
		cout << "foo float derived" << endl;
	}
	void bar() { cout << "bar derived" << endl;
	                       //Derived* const this
	}
};
int main()
{ 
	Base b1;
	b1.foo(10);
	b1.foo();


	Derived d1;
	d1.foo(10);
	d1.foo(10.33f);
	//cout << d1 << endl;
	

}
