#include <iostream>
using namespace std;
#pragma warning(disable:4996)
void conditionalopt(int n1, int n2, int n3)
{
	(n1 > n2) && (n1 > n3) ? printf("MAX:%d", n1) :
		(n2 > n3) ? printf("MAX:%d", n2) : printf("MAX:%d", n3);

}
void ifelsecon(int n1, int n2, int n3)
{
	int max = 0;
	if ((n1 > n2) && (n1 > n3))
	{
		max = n1;
	}
	else if (n2 > n3)
	{
		max = n2;
	}
	else
	{
		max = n3;
	}

	printf("Maximum of 3 Numbers is: %d\n", max);
}
int main()
{
	    int num1 = 0, num2 = 0, num3 = 0;
		int Max = 0;
		printf("Enter Three Numbers: ");
		scanf("%d%d%d", &num1, &num2, &num3);
		ifelsecon(num1, num2, num3);
		conditionalopt(num1, num2, num3);
		return 0;
}