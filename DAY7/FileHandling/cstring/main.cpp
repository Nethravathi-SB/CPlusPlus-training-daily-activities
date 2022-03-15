#include <iostream>
#include<crtdbg.h>
#include<fstream>
#include "cstring.h"
#include "Employee.h"
#include "Manager.h"
#include "SalesPerson.h"
#pragma warning(disable:4996)
using namespace std;

int main()
{
	{
		/*CString s1;
		s1.show_string();

		CString s2("bird can fly on the top");
        s2.show_string();
		
		CString ss(s2);
		ss.show_string();

		CString s3('w', 10);
		s3.show_string();*/

		/*Employee* e1 = new WageEmp(12, "Nethra", 10, 2, 2021, 10, 200);
		if (typeid(*e1) == typeid(WageEmp))
		{
			//e1->accept();
			//e1->show();
			e1->computesal();
		}
		Employee* e1 = new WageEmp(12, "Nethra", 10, 2, 2021, 10, 200);
		WageEmp* we = dynamic_cast<WageEmp*>(e1);
		if (we == NULL)
		{
			cout << "Down casting failed" << endl;
		}
		else
		{
			we->accept();
			we->show();
			we->computesal();
		}

		/*CString s4;
		s4.acceptstring();
		s4.show_string();*/
		/*Manager m1(1, "Nethra", 10, 6, 2022, 100, 200.0f);
		m1.accept();
		m1.show();
		cout << "compute sal of Manager is " << m1.computesal() << endl;*/
		SalesPerson s1(20,"Kavya",12,4,20121,1,1000,300,67);
		
		cout << "size of salesperson "<<sizeof(s1)<<endl;

		SalesPerson s2[3];
		
		ofstream out;
		out.open("Saleperson.txt", ios::out | ios::binary);
		if (out.is_open())
		{
			 
			for (int i = 0; i < 3; ++i)
			{
				s2[i].accept();
				out.write((char*)(&s2[i]), sizeof(s2[i]));
			}
		}
		else
		{
			cout << "unable to create a file" << endl;
		}
		out.close();
		ifstream iff;
		iff.open("Saleperson.txt", ios::in | ios::binary);
		if (iff.is_open())
		{
			for(int i=0;i<3;++i)
			 iff.read((char*)(&s2[i]), sizeof(s2[i]));
		}
		else
		{
			cout << "unable to create a file" << endl;
		}
		iff.close();
		cout << "Entered Details are" << endl;
		for (int i = 0; i < 3; ++i)
		{
			s2[i].show();
		}
		
		cout << "compute sal of SalesPerson is " << s1.computesal() << endl;
		cout << "Leaks " << _CrtDumpMemoryLeaks() << endl;
	}
	return 0;
}
