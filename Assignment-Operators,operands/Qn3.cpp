#include <iostream>
#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)
using namespace std;
void divide_num_based_base_value(int num, int* res);
int main()
{

    int num, i =0,n,count=1, temp =1;
    scanf("%d", &num);
    if (num > 10000)
        printf("Number should be less then 4 digit \n");
    else
    {
        n = num;
        while (n > 0)
        {
            count = count * 10;
            n = n / 10;
        }
        count = count / 10;

        while (num > 0)
        {
            temp = num / count;
            temp = temp * count;
            num = num - temp;
            count = count / 10;
            if (num > 0)
                printf("%d+", temp);
            else
                printf("%d", temp);

        }
    }
    
}

 