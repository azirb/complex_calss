#include "Complex.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// описание конструкторов
Complex::Complex(double _real) // конструктор преобразования типа  
{
	real = _real;
	img = 0;
};
Complex::Complex(double _real, double _img) // конструктор инициализатор  
{
	real = _real;
	img = _img;
};

Complex::Complex(const Complex &c)//конструктор копирования 
{
	real = c.real;
	img = c.img;
}


Complex Complex :: operator = (const Complex &c)
{
	real = c.real;
	img = c.img;
	return (*this);
}

Complex Complex :: operator + (const Complex &c)
{
	return Complex(real + c.real, img + c.img);
}

Complex Complex :: operator - (const Complex &c)
{
	return Complex(real - c.real, img - c.img);
}

Complex Complex :: operator * (const Complex &c)
{
	return Complex(real*c.real - img*c.img, real*c.img + img*c.real);
}

Complex Complex :: operator / (const Complex &c)
{
	Complex temp;
	double r = c.real * c.real + c.img * c.img;
	temp.real = (real * c.real + img * c.img) / r;
	temp.img = (img * c.real - real * c.img) / r;
	return temp;
}

bool Complex :: operator == (const Complex &c)
{
	double temp1, temp2;
	temp1 = sqrt(pow(real, 2) + pow(img, 2));
	temp2 = sqrt(pow(c.real, 2) + pow(c.img, 2));
	if (temp1 == temp2)
		return true;
	return false;
}

bool Complex ::  operator != (const Complex & c)
{
	double temp1, temp2;
	temp1 = sqrt(pow(real, 2) + pow(img, 2));
	temp2 = sqrt(pow(c.real, 2) + pow(c.img, 2));
	if (temp1 != temp2)
		return true;
	return false;
}

bool Complex :: operator > (const Complex & c)
{
	double temp1, temp2;
	temp1 = sqrt(pow(real, 2) + pow(img, 2));
	temp2 = sqrt(pow(c.real, 2) + pow(c.img, 2));
	if (temp1 > temp2)
		return true;
	return false;
}

bool Complex :: operator < (const Complex & c)
{
	double temp1, temp2;
	temp1 = sqrt(pow(real, 2) + pow(img, 2));
	temp2 = sqrt(pow(c.real, 2) + pow(c.img, 2));
	if (temp1 < temp2)
		return true;
	return false;
}


void Complex::type(string str, Complex g)
{
	cout << str + " " << g.real << "i" << g.img << endl;
}
