// This file contains the 'main' function. Program execution begins and ends there.
#include<stdio.h>
#include "../StaticLib1/add.h"
#include "Header.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>
#pragma warning (disable:4996)

int value = 100;

int product(int x, int y)
{
    return x * y;
}
int main()
{
    function();
    printf("Hello World!\n");
    printf("value is %d\n", value);
    printf("var is %d\n", var);
    printf("product is %d", product(10, 30));
    printf("sum is %d", add(10, 30));
    
    int number = 0;
    int result;
    // nested ternary operator to find whether
    // number is positive, negative, or zero
    result = (number == 0) ? 0 : ((number > 0) ? 1 : -1);
    printf("result is %d", result);
	
    //for loop to print 1 to 10 numbers
    for(number = 0; number <= 10; ++number)
	printf("%d\n", number);
   
	// while loop example
	while(number<=10)
	{
		printf("%d\n", number); // print the number
		number++; //incrementing the number
	}
	
	// do while loop example
	do
	{
		printf("%d\n", 2*number); // printing num with multiplaying 2
		number++; // incrementing number 
	}while(number<=10);
	
	return 0;
}

