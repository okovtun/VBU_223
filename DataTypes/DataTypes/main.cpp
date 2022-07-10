//DataTypes
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	//cout << true << endl;
	//cout << false << endl;
	//cout << (bool)0.00000001 << endl;
	/*cout << "long long:\n";
	cout << sizeof(long long) << endl;
	cout << LLONG_MIN << " ... " << LLONG_MAX << endl;
	cout << 0 << " ... " << ULLONG_MAX << endl;
	cout << "\n----------------------------\n";
	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << "\n----------------------------\n";
	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;*/
	int a;
	int t;
	double price_of_coffee;
	int number_of_cups;
	cout << "Введите цену чашки кофе: ";cin >> price_of_coffee;
	cout << "Введите количество чашек:";cin >> number_of_cups;
	//cout << price_of_coffee << endl;
	//cout << number_of_cups << endl;
	cout << "Общая стоимость: " << price_of_coffee * number_of_cups << " $\n";
}
//Инициализация - это присвоение начального значения.
//Строчный комментарий
/*
Блочный комментарий
*/