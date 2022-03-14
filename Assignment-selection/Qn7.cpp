#include <stdio.h>
#include<iostream>
using namespace std;
#pragma warning(disable:4996)
int main()
{
	int num = 0;
	cout << "enter the positive or negative number" << endl;
	cin >> num;
	cout << "entered num is " << num << " and it's absolute values is " << abs(num) << endl;
	return 0;
}