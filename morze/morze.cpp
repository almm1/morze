#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void file() 
{

}

void cons()
{

}

int main()
{
	setlocale(LC_ALL, "Russian");
	int menu=1;

	while (1) 
	{
		system ("CLS");
		cout << "Выберите действие\n";
		cout << "1 - Ввод из файла\n";
		cout << "2 - Ввод из консоли\n";
		cout << "0 - Выход\n";
		cin >> menu;
		if (menu == 1)
		{
			file();
		}
		else if (menu == 2)
		{
			cons();
		}
		else if (menu == 0)
		{
			break;
		}
		else
		{
			cout << "\nНе верное действие, введите заново\n";
			system("pause");
		}		
	}
}
