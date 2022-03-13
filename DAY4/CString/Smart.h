#pragma once

class CString;//forward declaration
class SmartPointer
{
	CString* ptr;

public:
	SmartPointer();
	SmartPointer(int, int);
	CString* operator->();
	CString& operator*();
	~SmartPointer();
};