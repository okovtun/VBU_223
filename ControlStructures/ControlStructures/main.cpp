#include<iostream>
using namespace std;

//#define TEMPERATURE

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
}