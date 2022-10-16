#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
#define TRIANGLE_4
#define ROMBUS
//#define PLUS_MINUS

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)	//а этот for повторяет вывод строки, и таким образом мы получаем квадрат из звездочек
	{
		for (int i = 0; i < n; i++)	//это for выводит строку из звездочек
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef ROMBUS
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			cout << " "; 
		cout << "/";
		for (int j = 0; j < i*2; j++)
			cout << " "; 
		cout << "\\";
		
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << " "; 
		cout << "\\";
		for (int j = 0; j < (n-1-i)*2; j++)
			cout << j; 
		cout << "/";
		
		cout << endl;
 	}
#endif // ROMBUS

#ifdef PLUS_MINUS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0)cout << "+ ";else cout << "- ";
			//((i + j) % 2 == 0) ? cout << "+ " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
	true;
#endif // PLUS_MINUS

	}