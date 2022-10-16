#include <iostream>
#include <conio.h>
using namespace std;

//#define ROMB
#define HARD_CHESS

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите число:"; cin >> n;
#ifdef ROMB
	for (int i = 0; i < n; i++)
	{
		cout << "|  ";
		for (int i = 0; i < n; i++)

			for (int j = 0; j < i; j++)
				cout << "* ";
		//cout << "  ";

	//for (int j = i; j < n; j++)
		{
			cout << " ";
			//cout << endl;
		}
		cout << endl;
	}
#endif // ROMB






#ifdef HARD_CHESS
	for (int i = 0; i < n*n; i++)
	{
		for (int j = 0; j < n*n; j++)
		{
			if ((i / n + j / n) & 1)
				cout << "  ";
			else
				cout << "* ";

		}
		cout << endl;
	}
#endif // HARD_CHESS




}