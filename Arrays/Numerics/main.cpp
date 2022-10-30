#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//for (;;)cout << "Hello";
	int decimal;	//десятичное число, введенное с клавиатуры
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;	//максимально возможная разрядность двоичного числа
	bool bin[n] = {};	//Этот массив будет хранить биты двоичного числа

	int i = 0;	//номер двоичного разряда (номер элемента массива)
	/*while (decimal)
	{
		bin[i] = decimal % 2;	//получаем младший двоичный разряд числа
		decimal /= 2;			//убираем младший двоичный разряд из числа
		i++;	//переходим на следующий разряд
	}*/
	for (; decimal; decimal /= 2)
	{
		//Comma operator
		bin[i++] = decimal % 2;
	}
	//Теперь счетчик 'i' хранит количество двоичных разрядов
	;
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
}