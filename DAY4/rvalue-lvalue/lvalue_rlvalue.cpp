// lvalue_rlvalue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int& add(int &x, int &y)
{
    return x;
}
int& function(int& x)
{
    return x;
}
int&& newfunction(int&& x)
{
    return 10;
}

void foo(int& x)
{
    cout << "L value " << endl;
}
void foo(const int& x)
{
    cout << "L value const " << endl;
}
//void foo(int&& x)
//{
//    cout << "R value " << endl;
//}
int main()
{
    int x = 10;
    int y = 20;
    // x  and y are   lvalue : which has an address like &x
    // 10 and 20 are rvalue 

    int z = ((x + y)) * ((x * y));
    z = add(x, y);
    //z is lvalue add(10,20) rvalue

    add(x, y) = 99;
    cout << x << endl;


    int&& ref = 100;
    cout << ref << endl;
    //add(10,20)

    int val = 10;

    int& myref = val;
    int&& myref1 = 10l;
    cout << function(val) << endl;
    cout << newfunction(10) << endl;
    const int val1 = 10;
    foo(10);
    foo(val);
    foo(val1);
    cout << &x << " " << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
