#include "Smart.h"
#include "CString.h"
#include <crtdbg.h>
SmartPointer::SmartPointer()
{
	ptr = new CString;
}

SmartPointer::SmartPointer(int real, int imag)
{
	ptr = new CString(real, imag);
}

CString* SmartPointer::operator->()
{

	return ptr;
}

CString& SmartPointer::operator*()
{
	return (*ptr);
}

SmartPointer::~SmartPointer()
{
	if (ptr)
		delete ptr;
	ptr = nullptr;
}
