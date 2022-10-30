#include<iostream>
using namespace std;

int Sum(int a = 0, int b = 0);			//�������� ������� (���������� ������� - Function declaration)
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Sum();	//����� ������� - Function call
	//Too few arguments in function call
	//Too many arguments in function call
	//Function doesn't take N arguments
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Difference(a, b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quotient(a, b) << endl;
}

int Sum(int a, int b)	//���������� ������� (����������� ������� - Function definition)
{
	int sum = a + b;
	return sum;
}
int Difference(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
double Quotient(int a, int b)
{
	return (double)a / b;
}