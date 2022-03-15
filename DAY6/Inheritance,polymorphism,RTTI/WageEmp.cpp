#include "WageEmp.h"

WageEmp::WageEmp():hrs(0),rate(0)
{
}

WageEmp::WageEmp(int id, const char* name,int d, int m, int y,int hr, int rte):Employee(id,name,d,m,y),hrs(hr), rate(rte)
{
}

int WageEmp::getHrs()
{

    return hrs;
}
int WageEmp::getRate()
{
    return rate;
}

void WageEmp::accept()
{
    Employee::accept();
    
    cout << "enter hrs and rate" << endl;
    cin >> hrs >> rate;
}

void WageEmp::show()
{
    Employee::show();
    
    cout << "entered hrs and rate are" << hrs << " " << rate<<endl;

}

float WageEmp::computesal()
{
    return hrs * rate;
}
