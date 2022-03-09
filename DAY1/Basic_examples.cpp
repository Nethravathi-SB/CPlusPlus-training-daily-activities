// C Demos.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include<stdio.h>
//#include "../StaticLib1/add.h"
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
  //  printf("sum is %d", add(10, 30));
	return 0;
}

