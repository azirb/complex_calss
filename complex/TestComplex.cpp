#include <iostream>
#include <clocale>
#include "Complex.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, k, m;
	cout << "������� �������������� �����  1-�� ������������ �����" << endl;
	cin >> a;
	cout << "������� ������ ����� 1-�� ������������ �����" << endl;
	cin >> b;
	cout << "������� �������������� �����  2-�� ������������ �����" << endl;
	cin >> k;
	cout << "������� ������ ����� 2-�� ������������ �����" << endl;
	cin >> m;
	Complex c(a, b), v(k, m), g;
	// �����
	g = c + v;
	g.type("�����", g);

	//�������� 
	g = c - v;
	g.type("��������", g);

	//������������
	g = c*v;
	g.type("������������", g);

	//������� 
	g = c / v;
	g.type("�������", g);
	
	//�������� �� ��������� � ��������� 
	if (c == v)
	{
		cout << "�����" << endl;
	}
	else
	{
		if (c > v)
		{
			c.type("������", c);
		}
		else
		{
			v.type("������", v);
		}
	}
	system("pause");
	return 0;
}