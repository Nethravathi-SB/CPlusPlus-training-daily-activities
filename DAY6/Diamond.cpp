#include <iostream>
#pragma pack (1)
using namespace std;
class Base
{
	int x;
public:
	//Base();
	Base(int xx) :x(xx)
	{
		cout << "Base class cuctor" << endl;
	}
	~Base()
	{
		cout << "Base class destrcuctor" << endl;
	}
	void show()
	{
		cout << x << " ";
	}
};

class Derived1 : Base
{
	int y;
public:
	Derived1(int xx, int yy) :Base(xx), y(yy)
	{
		cout << "Derived1 class rcuctor" << endl;
	}

	~Derived1()
	{
		cout << "Derived1 class destrcuctor" << endl;
	}
	void show() 
	{ 
		Base::show();
		cout << y << " "; 
	}
};

class Derived2 : Base
{
	int z;
public:
	Derived2(int xx, int zz) :Base(xx), z(zz)
	{
		cout << "Derived2 class rcuctor" << endl;
	}
	~Derived2()
	{
		cout << "Derived2 class destrcuctor" << endl;
	}
	void show() { cout << z<< " "; }
};
class Derived : public Derived1, public Derived2
{
	int a;
public:
	Derived(int xx, int yy, int zz, int aa) :Derived1(xx, yy), Derived2(xx, zz), a(aa)
	{
		cout << "Derived class rcuctor" << endl;
	}
	void show() 
	{ 
		Derived1::show();
		Derived2::show();
		cout << a << endl; 
	}
	~Derived()
	{
		cout << "Derived class destrcuctor" << endl;
	}
};
int main()
{
	Derived d1(10, 20, 30, 40);
	d1.show();
}
