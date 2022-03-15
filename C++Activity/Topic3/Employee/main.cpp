#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Emp e[2];
    cout << "Enter the Employee deatils\n";
    for (int i = 0; i < 2; i++)
        e[i].get_employee_details();
    cout << "Entered Employee Details are" << endl;
    for (int i = 0; i < 2; i++)
        e[i].display_employee_details();

    Emp* e1 = new Emp[2];
    cout << "Enter the Employee deatils\n";
    for (int i = 0; i < 2; i++)
        (e1 + i)->get_employee_details();
    cout << "Entered Employee Details are" << endl;
    for (int i = 0; i < 2; i++)
        (e1 + i)->display_employee_details();
    delete[] e1;

}
