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

#ifdef TARGET
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
	float a, b;	//Числа, вводимые с клавиатуры
	char s;		//Sign - знак операции
	cout << "Введите простое арифметическое выражение: ";
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
	double a, b;	//Числа, вводимые с клавиатуры
	char s;			//Sign - знак операции
	cout << "Введите простое арифметическое выражение: ";
	cin >> a >> s >> b;
	//var - Variable (Переменная)
	switch (s)
	{
		//case - случай
		//'+' - символьная константа, соответствующая case-у
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
	int n;		//Количество итераций
	int i = 0;	//Счетчик цикла
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << ++i << " Hello\n";
		//i++;	//Шаг цикла
	}
	cout << "Happy end" << endl;
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_2

	char key;	//Эта переменная будет хранить код клавиши
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатия клавиши,
		//и возвращает ASCII-код нажатой клавиши.
		//Функци _getch() объявлена в библиотеке coinio.h
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование переменной key в тип int,
		//для того чтобы увидеть числовой код нажатой клавиши.
	} while (key != 27);
}