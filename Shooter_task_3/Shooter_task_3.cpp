#include <iostream>
#include <conio.h>
using namespace std;
void main()

{
	setlocale(LC_ALL, "Russian");
char key;
do
{
	key = _getch();
	if ((int)key == 119)
		cout << "Вперед\n";
	else if ((int)key == 115)
		cout << "Назад\n";
	else if ((int)key == 97)
		cout << "Влево\n";
	else if ((int)key == 100)
		cout << "Вправо\n";
	else if ((int)key == 32)
		cout << "Прыжок\n";
	else if ((int)key == 13)
		cout << "Огонь\n";
		
	else cout << "Нажмите другую клавишу либо смените раскладку на ENGLISH\n";
} while (true);

}