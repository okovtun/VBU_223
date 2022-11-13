#include<iostream>
using namespace std;

int Sum(int a = 0, int b = 0);			//Прототип функции (Объявление функции - Function declaration)
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Sum();	//Вызов функции - Function call
	//Too few arguments in function call
	//Too many arguments in function call
	//Function doesn't take N arguments
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Difference(a, b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quotient(a, b) << endl;
}

int Sum(int a, int b)	//Реализация функции (Определение функции - Function definition)
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