#pragma once
#include<iostream>
namespace nethra
{
	const int value = 100;
	class Demo
	{

	public:
		void foo()
		{
			std::cout << "foo called by namspace B" << std::endl;
		}
	};
	static void display()
	{
		std::cout << "display calles by namespace B" << std::endl;
	}
}