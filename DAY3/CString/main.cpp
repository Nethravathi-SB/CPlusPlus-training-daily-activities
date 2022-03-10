#include <iostream>
#include "cstring.h"
#pragma warning(disable:4996)
using namespace std;

int main()
{
	{
		CString s1;
		s1.show_string();

		CString s2("nethra");
        s2.show_string();
		
		CString s3('w', 10);
		s3.show_string();
	}
	return 0;
}
