#include<iostream>
#include"NameSpaceA.h"
#include"NameSpaceB.h"
using namespace std;
using namespace nethra;
using namespace kavya;

int main()
{
	nethra::Demo d1;
	d1.foo();
	nethra::display();
	cout << "value in namespace B " << nethra::value << endl;
	kavya::Demo d2;
	d2.foo();
	nethra::display();
	cout << "value in namespace A " <<kavya::value << endl;
	return 0;
}
