#include <iostream>
using namespace std;

void swapUsingThirdVar(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;

}
void swapUsingWithoutThirdVar(int &x, int &y)
{
	x = x + y;
	y = x - y;
	x = x - y;

}
int main()
{
	int x, y;
	cout << "enter the numbers which your going to swap" << endl;
	cin >> x >> y;
	cout << " Before swap with using third var numbers are  " << x << " " << y << endl;
	swapUsingThirdVar(x,y);
	cout << " aftre swap with using third var numbers are  " << x << " " << y << endl;
	cout << " Before swap without using third var numbers are  " << x << " " << y << endl;
	swapUsingWithoutThirdVar(x, y);
	cout << " aftre swap without using third var numbers are " << x << " " << y << endl;
	return 0;
}


