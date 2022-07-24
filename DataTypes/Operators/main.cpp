#include<iostream>
using namespace std;

//#define ASSOCIATIVITY
//#define INCREMENT_DECREMENT_NOTATIONS

void main()
{
	setlocale(LC_ALL, "");
	//cout << 3 % 17 << endl;
	//int a = 2;

#ifdef ASSOCIATIVITY
	2 + 3 + 4 + 8;

	int a, b, c;
	a = b = c = 0;
#endif // ASSOCIATIVITY

#ifdef INCREMENT_DECREMENT_NOTATIONS
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement  
#endif // INCREMENT_DECREMENT_NOTATIONS

	int i = 3;
	i = i++ + 1 + (++i *= 2);
	cout << i << endl;
}