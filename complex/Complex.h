#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	double real; // действительная часть 
	double img; // мнимая часть
public:
	// описание конструкторов
	Complex() {}; // конcтрyктор по умолчанию 

	Complex(double _real); // конструктор преобразования типа  
	Complex(double _real, double _img); // конструктор инициализатор  
	Complex(const Complex &c);//конструктор копирования 

	~Complex() {};// диструктор 

	// алгебраические операторы
	Complex operator + (const Complex &c);
	Complex operator = (const Complex &c);
	Complex operator - (const Complex &c);
	Complex operator * (const Complex &c);
	Complex operator / (const Complex &c);

	// операторы сравнения 
    bool operator == (const Complex &c);
	bool operator != (const Complex &c);
	bool operator > (const Complex &c); 
	bool operator < (const Complex &c);
	
	
	// вывод 
	void type(string str, Complex g);
};