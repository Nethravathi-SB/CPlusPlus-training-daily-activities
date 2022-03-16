#include<iostream>
#include<string>
#include"myswap.h"
#pragma warning(disable:4996)
using namespace std;
int main()
{
	show("nethra", 2);
	show(2.2f, 'A');
	show(100, 2.23);
	show(200, "kavya");
	int x = 10, y = 20;
	cout << x << " " << y << endl;
	myswap(x, y);
	cout << x << " " << y << endl;
	string name1("nethra"), name2("kavya");
	cout << name1 << " " << name2 << endl;
	myswap(name1, name2);
	cout << name1 << " " << name2 << endl;
	char arr[20] = "nagu", brr[20] = "aruna";
	cout << arr << " " << brr << endl;
	myswap(arr, brr);
	cout << arr << " " << brr << endl;
	return 0;
}

void myswap(char x[20], char y[20])
{
	char temp[20];
	strcpy(temp, x);
	strcpy(x, y);
	strcpy(y, temp);
}
