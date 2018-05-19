#include <iostream>
#include <clocale>
#include "Complex.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, k, m;
	cout << "Введите действительную часть  1-го комплексного числа" << endl;
	cin >> a;
	cout << "Введите мнимую часть 1-го косплексного числа" << endl;
	cin >> b;
	cout << "Введите действительную часть  2-го комплексного числа" << endl;
	cin >> k;
	cout << "Введите мнимую часть 2-го косплексного числа" << endl;
	cin >> m;
	Complex c(a, b), v(k, m), g;
	// Сумма
	g = c + v;
	g.type("Сумма", g);

	//Разность 
	g = c - v;
	g.type("Разность", g);

	//Произведение
	g = c*v;
	g.type("Произведение", g);

	//Деление 
	g = c / v;
	g.type("Деление", g);
	
	//Проверка на равенство и сравнение 
	if (c == v)
	{
		cout << "Равны" << endl;
	}
	else
	{
		if (c > v)
		{
			c.type("Больше", c);
		}
		else
		{
			v.type("Больше", v);
		}
	}
	system("pause");
	return 0;
}