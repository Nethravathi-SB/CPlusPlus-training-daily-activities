#include<iostream>
#include<stdlib.h>
#include "complex.h"
#pragma warning(disable:4996)

using namespace std;

int counter = 0;
int Complex::count = 0;

Complex::Complex()
{

	m_real = 0;
	m_img = 0;
	counter++;
	count++;

}
Complex::Complex(int real, int img)
{
	m_real = real;
	(*this).m_img = img;
	counter++;
	count++;
}
Complex::Complex(const Complex& cc)
{
	this->m_real = cc.m_real;
	this->m_img = cc.m_img;
	count++;
	counter++;
	cout << "copy constructor called" << endl;
}
Complex Complex::operator+(const Complex& c)
{
	Complex temp;
	temp.m_real = this->m_real + c.m_real;
	temp.m_img = this->m_img + c.m_img;
	return temp;
}
Complex Complex::operator-()
{
	Complex t;
	t.m_real = -m_real;
	t.m_img = -m_img;
	return t;
}
Complex& Complex::operator++()
{
	++this->m_real;
	++this->m_img;
	return *this;
}
Complex Complex::operator++(int)
{
	Complex t = *this;
	this->m_real++;
	this->m_img;
	return t;
}
bool Complex::operator==(const Complex& c)
{
	return m_real == c.m_real && m_img == c.m_img ? true : false;

}
int Complex::getreal() const
{
	return 0;
}
int Complex::getimg() const
{
	return 0;
}
void Complex::setreal(int real)
{
	this->m_real = real;
}
void Complex::setimg(int imag)
{
	this->m_img = imag;
}
void Complex::accept()
{
	cout << "enter real and imag numbers"<<endl;
		cin >> m_real >> m_img;

}
void Complex::display() const
{
	cout << "real part " << m_real << endl;
	cout << " imag part " << m_img<<endl;
}

void Complex::count_objects() const
{
	cout << " counter " << counter << " Count " << count << endl;
}

