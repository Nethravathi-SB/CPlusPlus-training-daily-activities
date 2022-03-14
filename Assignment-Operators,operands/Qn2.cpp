#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	int sum = 0;
	cout << "enter the 5 marks"<< endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
    }
	cout << "sum = " << sum<<endl;
	cout << "avg of 5 marks using implicit "<<sum / 5.0 << endl; //implicit
	cout << "avg of 5 marks using explicit "<< sum / float(5) << endl; //explicit
	
	return 0;
}
