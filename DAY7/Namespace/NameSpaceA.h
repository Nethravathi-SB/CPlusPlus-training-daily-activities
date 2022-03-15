#pragma once
#include<iostream>
namespace kavya
{
	const int value = 200;
	class Demo
	{

	public:
		void foo()
		{
			std::cout << "foo called by namspace A" << std::endl;
		}	
	};
	static void display()
	{
		std::cout << "display calles by namespace A" << std::endl;
	}
}