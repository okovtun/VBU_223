#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FOR_BASICS

void main()
{
	setlocale(LC_ALL, "");

#ifdef FOR_BASICS
	int n;	//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_BASICS

	cout << "short int:" << SHRT_MAX << endl;
	cout << "long  int:" << LONG_MAX << endl;
	cout << "long long int:" << LLONG_MAX << endl;

	double f = 1;	//Факториал числа, введенного с клавиатуры
	int n;
	cout << "Введите число, для вычисления Факториала: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
}