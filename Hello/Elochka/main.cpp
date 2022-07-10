#include<iostream>
using namespace std;

#define offset		"\t\t\t\t\t"
#define имя_макроса	"значение макроса"
//#define (определить) создает макроопределение (макрос)

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << offset << "В лесу родилась ёлочка,\n";
	cout << offset << "В лесу она росла,\n";
	cout << offset << "Зимой и летом стройная, зелёная была.\n";
	cout << offset << "Зимой и летом стройная, зелёная была.\n";
	cout << "\n";
	cout << offset << "Метель ей пела песенку:\n";
	cout << offset << "\"Спи, ёлочка, бай-бай!\"\n";
	cout << offset << "Мороз снежком укутывал:\n";
	cout << offset << "\"Смотри, не замерзай!\"\n";
	cout << endl;
	cout << offset << "Трусишка зайка серенький\n";
	cout << offset << "Под ёлочкой скакал.\n";
	cout << offset << "Порою волк, сердитый волк, рысцою пробегал.\n";
	cout << offset << "Порою волк, сердитый волк, рысцою пробегал.\n";
}