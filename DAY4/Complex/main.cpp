// This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "complex.h"
#pragma warning(disable:4996)
using namespace std;
Complex function(Complex &mycomplex)
{
    return mycomplex;
}

int main()
{
    Complex c1;
    Complex cc(c1);
    cc.display();
    
    Complex c2(10, 20);
    Complex c3(10, 23);
    Complex c4 = c2 + c3;//c2.operator+(c3)
    c4.display();

    Complex c5 = -c2; //c2.operator-()
    c5.display();
    Complex c6 = ++c2; //c2.operator++()
    c6.display();

    Complex c7 = c2++;//c2.operator++()
    c7.display();
    
    if (c2 == c3) //c2.operator==(c3)
        cout << "Equal" << endl;
    else
        cout << "not equal" << endl;
    c1.count_objects();

    return 0;
}