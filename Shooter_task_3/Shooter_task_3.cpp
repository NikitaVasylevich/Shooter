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
		cout << "������\n";
	else if ((int)key == 115)
		cout << "�����\n";
	else if ((int)key == 97)
		cout << "�����\n";
	else if ((int)key == 100)
		cout << "������\n";
	else if ((int)key == 32)
		cout << "������\n";
	else if ((int)key == 13)
		cout << "�����\n";
		
	else cout << "������� ������ ������� ���� ������� ��������� �� ENGLISH\n";
} while (true);

}