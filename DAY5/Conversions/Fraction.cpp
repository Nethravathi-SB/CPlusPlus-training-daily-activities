#include <iostream>

using namespace std;

class Fraction
{
	int num, den;
public:
	Fraction() :num(0), den(0){}
	explicit Fraction(int n) { num = n; den = 0; } // explicit is used avoid automatic conversion of types
	void operator=(int val)
	{
		this->num = val;
		cout << "assignment operator" << endl;
	}
	Fraction(int num,int den):num(num), den(den) {}
	void showresult() { cout << num << " " << den << endl; }
	operator float()
	{
		return static_cast<float>(num) / den;
	}
};

int main()
{
	Fraction f1(10, 3);
	//convert BT to UDT
	//f1 = Fraction(30);
	//f1.showresult();
	f1 = 25;
	f1.showresult();
	float res = f1;
	cout << res;

}