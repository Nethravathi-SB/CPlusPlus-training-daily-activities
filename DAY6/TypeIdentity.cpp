#include<iostream>
using namespace std;
class base
{
public:virtual void foo() { cout << "foo base" << endl; }
};
class derived :public base
{
public:virtual void foo() { cout << "foo derived" << endl; }
};
void show1(base b)
{
	b.foo();
}
void show2(base* b)
{
	b->foo();
}
void show3(base& b)
{
	b.foo();
}
class demo
{}dd;
class warrior
{
public: virtual void attack() = 0;
}; class swordsman :public warrior
{
public: virtual void attack() { cout << "swords uses sword to attack" << endl; };
}; class crossbowman :public warrior
{
public: virtual void attack() { cout << "crossbowman uses bow to attack" << endl; };
}; class dargon :public warrior
{
public: virtual void attack() { cout << "dragon uses fire to attack" << endl; };
	  void fly()
	  {
		  cout << "dragon flies high in sky" << endl;
	  }
};
warrior* create_warriors()
{
	switch (rand() % 3)
	{
	case 0:return new swordsman;
	case 1:return new crossbowman;
	case 2: return new dargon;
	}
}
int main()
{
	int count_swordsman, count_crossbowman, count_dargon;
	count_crossbowman = count_dargon = count_swordsman = 0;
	warrior* myheros;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		myheros = create_warriors();
		if (typeid(*myheros) == typeid(swordsman))
			count_swordsman++;

		if (typeid(*myheros) == typeid(crossbowman))
			count_crossbowman++;

		if (typeid(*myheros) == typeid(dargon))
			count_dargon++;
	}
	cout << "count of swordsman " << count_swordsman << endl;
	cout << "count of crossbowman " << count_crossbowman << endl;
	cout << "count of dargon " << count_dargon << endl;

		 
		//myhero1 = new swordsman;
		//cout<< typeid(*myhero1).name() << endl;
		warrior*  myhero1 = new dargon;
		if (typeid(*myhero1) == typeid(dargon))
		{
		static_cast<dargon*>(myhero1)->fly();
		}
		
		/*derived d1;
		show1(d1);
		show2(&d1);
		show3(d1);
		int value = 10;
		int* ptr = &value;
		cout << typeid(value).name() << endl;
		cout << typeid(dd).name() << endl;
		cout << typeid(*ptr).name() << endl;*/
	return 0;
}
