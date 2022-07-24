#include<iostream>
using namespace std;

//#define TEMPERATURE

void main()
{
	setlocale(LC_ALL, "");
#ifdef TEMPERATURE
	int temperature;	//температура воздуха
	cout << "Введите температуру воздуха: "; cin >> temperature;

	if (temperature > 70)
	{
		cout << "Вы на другой планете, на Земле нет таких температур" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 35)
	{
		cout << "Очень жарко" << endl;
	}
	else if (temperature > 28)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 18)	//Заголовок if
	{//тело if
		cout << "На улице тепло" << endl;
		cout << "Можно идти гулять" << endl;
	}

	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -50)
	{
		cout << "Cильный мороз" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
#endif // TEMPERATURE

	int n;
	cout << "Введите число: "; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "Цель поражена" << endl;
	}
	else
	{
		cout << "Вы Firefox" << endl;
	}
}