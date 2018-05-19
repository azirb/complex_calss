#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	double real; // �������������� ����� 
	double img; // ������ �����
public:
	// �������� �������������
	Complex() {}; // ���c��y���� �� ��������� 

	Complex(double _real); // ����������� �������������� ����  
	Complex(double _real, double _img); // ����������� �������������  
	Complex(const Complex &c);//����������� ����������� 

	~Complex() {};// ���������� 

	// �������������� ���������
	Complex operator + (const Complex &c);
	Complex operator = (const Complex &c);
	Complex operator - (const Complex &c);
	Complex operator * (const Complex &c);
	Complex operator / (const Complex &c);

	// ��������� ��������� 
    bool operator == (const Complex &c);
	bool operator != (const Complex &c);
	bool operator > (const Complex &c); 
	bool operator < (const Complex &c);
	
	
	// ����� 
	void type(string str, Complex g);
};