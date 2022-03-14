#include <iostream>
#include<crtdbg.h>
#include "cstring.h"
#include "Employee.h"
#include "Manager.h"
#pragma warning(disable:4996)
using namespace std;

int main()
{
	{
		CString s1;
		s1.show_string();

		CString s2("bird can fly on the top");
        s2.show_string();
		
		CString ss(s2);
		ss.show_string();

		CString s3('w', 10);
		s3.show_string();

		Employee e;
		e.accept();
		e.show();
		CString s4;
		s4.acceptstring();
		s4.show_string();
		cout << "Leaks " << _CrtDumpMemoryLeaks() << endl;
	}
	return 0;
}
