#include <iostream>
#include "cstring.h"
#pragma warning(disable:4996)
using namespace std;

int main()
{
	{
		CString s1("nethra");
		s1.show_string();

		CString s2("bird can fly on the top");
        s2.show_string();
		
		SmartPointer sptr;
		sptr->acceptstring();
		(*sptr).show_string();
		
		SmartPointer sptr(10, 2);
		sptr->acceptstring();   //overloading ->
		(*sptr).show_string();   //overloading *
		
		CString ss(s2);
		ss.show_string();

		CString s3('w', 10);
		s3.show_string();
	}
	return 0;
}
