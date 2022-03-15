#include <iostream>
#include<cstdio>
#include<string>
using namespace  std;
class Demo
{
public:Demo() { cout << "cotr of demo" << endl; }
	  ~Demo() { cout << "dest of demo" << endl; }
};
class Derived :public Demo
{
public:Derived() { cout << "cotr of derived" << endl; }
	  ~Derived() { cout << "dest of derived" << endl; }
};
class CustomException
{
	int errno_;
	string errname;
public:
	CustomException(){}
	CustomException(int errno_, string errname):errno_(errno_), errname(errname){}
	string what() const
	{
		cout << errno_ << " " << errname << endl;
		return errname;
	}
};
float divide(int x, int y) throw(int, double, string, Derived)
{
	int* ptr = new int(5);
	try
	{
		if (y == 0)
		{
			delete ptr;
			throw 99;
		}

		if (y == -2)
		{
			delete ptr;
			throw 99.9;
		}
		if (y == -1)
		{
			delete ptr;
			throw string("Non Negative value");
		}
		if (y == 2)
		{
			delete ptr;
			//throw Derived();
			throw CustomException(300,"client side error occured");
		}
	}
	catch (string& s)
	{
		
		cout << "inner catch block is executed " << s<< endl;
		throw;//rethrowing exception
	}
	catch (CustomException& ce)
	{
		cout << ce.what() << endl;
		throw;
	}
	delete ptr;
	return static_cast<float>(x) / y;
}


int main()
{
	try
	{
		divide(100, 10);
		//divide(10, 0);
		//divide(10, -2);
		//divide(10, -1);
		divide(10, 2);
	}
	catch (int)
	{
		cout << "divided by zero has occured" << endl;

	}
	catch (string& s)
	{
		cout << s << " " << endl;
	}
	catch (Derived dd)
	{
		cout << "Catch block of derived class" << endl;
	}
	catch (Demo d)
	{
		cout << "Catch block of demo class" << endl;
	}
	catch (...)
	{
		cout << "universal catch block" << endl;
	}
	return 0;
}