#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27
#define Enter  13

#define UP_ARROW	72
#define DOWN_ARROW	80
#define LEFT_ARROW	75
#define RIGHT_ARROW	77

void main()
{
	setlocale(LC_ALL, "");
	char key;
	do
	{
		key = _getch();
		system("CLS");
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UP_ARROW:
		case 'w':
		case 'W': cout << "������" << endl; break;
		case DOWN_ARROW:
		case 's':
		case 'S': cout << "�����" << endl; break;
		case LEFT_ARROW:
		case 'a':
		case 'A': cout << "�����" << endl; break;
		case RIGHT_ARROW: 
		case 'd':
		case 'D': cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case Enter: cout << "�����" << endl; break;
		case Escape: cout << "Exit" << endl;
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
}