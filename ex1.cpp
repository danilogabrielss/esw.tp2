#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string.h>
using namespace std;

void gotoxy(short x, short y)
{
	COORD coord = {x, y};
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");

	string msgm;
	cout << "Digite uma frase: ";
	cin >> msgm;
	cout << endl << endl << endl << endl;
	int x = 20;
	char c = ' ';
	for (int i = 0; i <= msgm.size(); ++i)
	{
		int y = 6;
		int linha = 1;
		while(linha < 15)
		{

			gotoxy(x, y);
			cout << msgm.at(i);
			gotoxy(x, y);
			cout << "";
			Sleep(100);
			linha++;
			y++;
		}
		x++;
	}
}
