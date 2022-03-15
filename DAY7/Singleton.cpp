#include <iostream>
#include <string>

using namespace std;

class Singleton
{
private:
	int data;
	static Singleton* sptr;
	Singleton(){}
	Singleton(int val):data(val){}
public:
	static Singleton* createsingleton(int value)
	{
		if (sptr == NULL)
		{
			sptr = new Singleton(value);
			return sptr;
		}
		else
			return sptr;

	}
	void showdata()
	{
		cout << "data " << " " << data << endl;
		cout << "Address of the object " << this << endl;
	}
};
Singleton* Singleton::sptr = NULL;
int main()
{
	Singleton::createsingleton(1000)->showdata();
	Singleton::createsingleton(2000)->showdata();
	Singleton::createsingleton(3000)->showdata();
	return 0;
}