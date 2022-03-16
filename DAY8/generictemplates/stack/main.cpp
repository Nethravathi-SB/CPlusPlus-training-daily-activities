// templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include"mystack.h"
#include"mystack.cpp"
using namespace std;

int main()
{
    Mystack<string> s1;
    try
    {

        s1.push("nethra");
        s1.push("kavya");
        s1.push("lakshmi");
        s1.push("bhuthesh");
        s1.push("nagu");
        s1.push("aruna");
        s1.push("uma");
    }
    catch (const char* s)
    {
        cout << s << endl;
    }
    s1.display();
    try
    {
        cout << "poped element is " << s1.pop() << endl;
        cout << "poped element is " << s1.pop() << endl;
        cout << "poped element is " << s1.pop() << endl;
        cout << "poped element is " << s1.pop() << endl;
        cout << "poped element is " << s1.pop() << endl;
        cout << "poped element is " << s1.pop() << endl;

    }
    catch (const char * s)
    {
        cout << s << endl;
    }
    s1.display();
    return 0;
}

