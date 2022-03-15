
#include<iostream>
using namespace std;
class vehicle
{
	string name;
public: vehicle() :name("") {}
	  vehicle(string name) :name(name) {}
	  virtual void start() = 0;
	  virtual void stop() = 0;
	  virtual ~vehicle() {}
};
class twowheeler :public vehicle
{
public:
	twowheeler(string name) :vehicle(name) {}
	virtual void start()
	{
		cout << "2wheeler starts" << endl;
	}
	virtual void stop()
	{
		cout << "2wheeler stops" << endl;
	}
};
class fourwheeler :public vehicle
{
public:fourwheeler(string name) :vehicle(name) {}
	  virtual void start()
	  {
		  cout << "fourwheeler starts" << endl;
	  }
	  virtual void stop()
	  {
		  cout << "fourwheeler stops" << endl;
	  }
};
class chargeable { //
public:virtual void charging() = 0;
};
class truck :public vehicle, public chargeable
{
public:truck(string name) :vehicle(name) {}
	  virtual void start()
	  {
		  cout << "truck starts" << endl;
	  }
	  virtual void stop()
	  {
		  cout << "truck stops" << endl;
	  }
	  virtual void charging()
	  {
		  cout << "truck is charging" << endl;
	  }
};
int main()
{
	fourwheeler myvehicle("bmw"); myvehicle.start();
	myvehicle.stop();
	vehicle* v1 = new truck("mahindra");
    //v1 = new twowheeler("pulsar");
	truck* mytruck = dynamic_cast<truck*>(v1); //dynamic cast is succeed 
	if (mytruck == NULL)
	{
		cout << "dynamic casting failed" << endl;
		
	}
	else
	{
		mytruck->start();
		mytruck->charging();
		mytruck->stop();

	}

	/*if (typeid(*v1) == typeid(truck))
	{
	v1->start();
	v1->stop();
	static_cast<truck*>(v1)->charging();
	}*/
	delete v1;
	return 0;
}

