#pragma once
#include<iostream>
template<typename T> //template must be initialized at the time of declaration
void myswap(T& x,T& y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}
void myswap(char x[20], char y[20]);
template<typename T1, typename T2>
void show(T1&& x, T2&& y)
{
	std::cout << x << " " << y << std::endl;
}