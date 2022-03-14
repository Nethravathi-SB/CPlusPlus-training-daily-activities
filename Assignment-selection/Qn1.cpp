#include<iostream>
using namespace std;

void ifelsecon(int yy)
{
	if ((yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0))
	{
		cout<<"Leap Year"<<endl;
	}
	else
	{
	cout<<"Not a leap Year"<<endl;
	}
}
void conditionalopt(int yy)
{
	(yy % 4 == 0 && yy % 100 != 0) ? printf("Leap Year") :
		(yy % 400 == 0) ? printf("Leap Year") : printf("Not a Leap year");
}
int main()
{
	int year =0;
	cout << "enter the year" << endl;
	cin >> year;
	ifelsecon(year);
	conditionalopt(year);
	return 0;
}
