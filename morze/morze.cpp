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
		cout << "�������� ��������\n";
		cout << "1 - ���� �� �����\n";
		cout << "2 - ���� �� �������\n";
		cout << "0 - �����\n";
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
			cout << "\n�� ������ ��������, ������� ������\n";
			system("pause");
		}		
	}
}
