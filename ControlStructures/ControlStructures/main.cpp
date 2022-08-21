#include<iostream>
#include<conio.h>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE
//#define TARGET
//#define CALC_1
//#define SWITCH_SYNTAS
//#define CALC_2

//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef TEMPERATURE
	int temperature;	//����������� �������
	cout << "������� ����������� �������: "; cin >> temperature;

	if (temperature > 70)
	{
		cout << "�� �� ������ �������, �� ����� ��� ����� ����������" << endl;
	}
	else if (temperature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 35)
	{
		cout << "����� �����" << endl;
	}
	else if (temperature > 28)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 18)	//��������� if
	{//���� if
		cout << "�� ����� �����" << endl;
		cout << "����� ���� ������" << endl;
	}

	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -50)
	{
		cout << "C������ �����" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
#endif // TEMPERATURE

#ifdef TARGET
	int n;
	cout << "������� �����: "; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "���� ��������" << endl;
	}
	else
	{
		cout << "�� Firefox" << endl;
	}
#endif // TARGET

	/*int i = 3;
	i = ++i + ++i;
	cout << i << endl;*/

	/*int i = 3;

	i = i++ + 1 + ++i * 2;

	cout << i << endl;*/

	/*int i = 3;
	i *= i++ + 1 + (++i += 2);
	cout << i << endl;*/

#ifdef CALC_1
	float a, b;	//�����, �������� � ����������
	char s;		//Sign - ���� ��������
	cout << "������� ������� �������������� ���������: ";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}
#endif // CALC_1

#ifdef SWITCH_SYNTAS
	int var = 0;
	int code1 = 1;
	int code2 = 1;
	int codeN = 1;
	int default_code = 1;
#define CONST_1	1
#define CONST_2	2
#define CONST_N	'N'


	switch (var)
	{
	case CONST_1: code1; break;
	case CONST_2: code2; break;
		//......................
		//......................
	case CONST_N: codeN; break;
	default: default_code;
	}
#endif // SWITCH_SYNTAS

#ifdef CALC_2
	double a, b;	//�����, �������� � ����������
	char s;			//Sign - ���� ��������
	cout << "������� ������� �������������� ���������: ";
	cin >> a >> s >> b;
	//var - Variable (����������)
	switch (s)
	{
		//case - ������
		//'+' - ���������� ���������, ��������������� case-�
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
#endif // CALC_2

#if defined WHILE_1
	cout << INT_MIN << " ... " << INT_MAX << endl;
	cout << INT_MIN - 1 << endl;
	int n;		//���������� ��������
	int i = 0;	//������� �����
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << ++i << " Hello\n";
		//i++;	//��� �����
	}
	cout << "Happy end" << endl;
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_2

	char key;	//��� ���������� ����� ������� ��� �������
	do
	{
		key = _getch();	//������� _getch() ������� ������� �������,
		//� ���������� ASCII-��� ������� �������.
		//������ _getch() ��������� � ���������� coinio.h
		cout << (int)key << "\t" << key << endl;
		//(int)key - ����� �������������� ���������� key � ��� int,
		//��� ���� ����� ������� �������� ��� ������� �������.
	} while (key != 27);
}