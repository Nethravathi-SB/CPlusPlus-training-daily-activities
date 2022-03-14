#include <iostream>
using namespace std;

int main()
{
	float Basic_sal, HRA, DA, PF, Gross_sal, Net_sal;
	cout << "enter the Basic Salary"<<endl;
	cin >> Basic_sal;
	HRA = 0.2 * Basic_sal;
	DA = 0.4 * Basic_sal;
	Gross_sal = Basic_sal + HRA + DA;
	PF = 0.1 * Gross_sal;
	Net_sal = Gross_sal - PF;
	cout << "Basic Salary is " << Basic_sal << endl;
	cout << "HRA is " << HRA << endl;
	cout << "DA is " << DA << endl;
	cout << "Gross Salary is " << Gross_sal << endl;
	cout << "PF is " << PF << endl;
	cout << "Net Gross Salary is " << Net_sal << endl;

	return 0;
}