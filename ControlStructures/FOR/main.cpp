#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FOR_BASICS
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_1
//#define FIBONACCI_2
//#define SIMPLE
#define MULTIPLICATION_TABLE
//#define PYTHAGORAS_TABLE

void main()
{
	setlocale(LC_ALL, "");

#ifdef FOR_BASICS
	int n;	//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_BASICS

#ifdef FACTORIAL
	cout << "short int:" << SHRT_MAX << endl;
	cout << "long  int:" << LONG_MAX << endl;
	cout << "long long int:" << LLONG_MAX << endl;

	double f = 1;	//��������� �����, ���������� � ����������
	int n;
	cout << "������� �����, ��� ���������� ����������: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;	//��������� �������
	int n;	//���������� �������
	double N = 1;	//������� - ��������� ���������� � �������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << a << " ^ " << n << " = " << N << endl;
#endif // POWER

#ifdef ASCII
	cout << "������� ASCII-��������:\n";
	setlocale(LC_ALL, "C");	//������������� �������� ��������� �� ���������
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "");
	cout << "��� � �������� �����" << endl;


	/*cout << "������� ASCII-��������:\n";
	setlocale(LC_ALL, "C");	//������������� �������� ��������� �� ���������
	for (int i = 0; i < 256; i++)
	{
		//if (i % 16 == 0)cout << endl;
		cout << i << "\t"<< (char)i << "\n";
	}
	cout << endl;
	setlocale(LC_ALL, "");
	cout << "��� � �������� �����" << endl;*/
#endif // ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		//for (int a = 0, b = 1, c = a + b; a < n; c = (a = b) + (b = c))
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_1

#ifdef FIBONACCI_2
	int n;
	cout << "������� ���������� ����� �� ����: "; cin >> n;
	for (int i = 0, a = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
	{
		cout << i << "\t" << a << endl;;
	}
	cout << endl;
#endif // FIBONACCI_2

#ifdef SIMPLE
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;	//�����������, ��� ����� �������,
		//�� ��� ����� ���������:
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				simple = false;
				break;	//��������� ������� ��������, � ��� ����������
			}
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
#endif // SIMPLE

#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i * j << endl;
		}
	}
#endif // MULTIPLICATION_TABLE

#ifdef PYTHAGORAS_TABLE
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			cout << i * j;
		}
		cout << endl;
	}
#endif // PYTHAGORAS_TABLE

}