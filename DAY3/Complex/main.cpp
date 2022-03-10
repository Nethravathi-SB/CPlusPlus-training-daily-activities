// This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "complex.h"
#pragma warning(disable:4996)

int counter = 0;
int main()
{
    char* mystring = new char[80]; //new operator 
    cin.getline(mystring,80);
    cout << "mystring is " << mystring << endl;
    delete[]mystring; //releasing memory
    mystring = nullptr;
    
    Complex c1;
    c1.accept();
    c1.display();
    
    Complex c2(10,-3);
    c2.display();
    c2.count_objects();

    Complex c3;
    c3.setreal(30);
    c3.setimg(-40);
    c3.display();
    c3.count_objects();

    

    
    
    return 0;
}
