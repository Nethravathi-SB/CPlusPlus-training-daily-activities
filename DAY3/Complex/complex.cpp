#include<iostream>
#include<stdlib.h>
#include "complex.h"
#pragma warning(disable:4996)

using namespace std;
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
	cout << "real part is " << m_real << endl;
	cout << " imaginary part is " << m_img<<endl;
}

void Complex::count_objects() const
{
	cout << " counter " << counter << " Count " << count << endl;
}

