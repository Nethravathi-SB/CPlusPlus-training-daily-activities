#include <iostream>
using namespace std;

int main()
{
	int num1 = 20, num2 = 30, num3;
	
	num3 = num1 + num2;
    cout << "added two numbers with using third var " << num3 << endl;
	num1 = num1 + num2;
	cout << "added two numbers without using third var " << num1 << endl;
	
	return 0;
}
