#pragma once
template<typename T1>
class Mystack
{
	int top;
	int size;
	T1*  m_pbuff;
public:
	Mystack();
	~Mystack();
	void push(T1);
	T1 pop();
	void display();
};


