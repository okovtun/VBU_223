#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;
	cout << "������� �����: "; cin >> number;
	int buffer = number;	//����� ���������� �����
	int reverse = 0;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;

	if (reverse == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}
}