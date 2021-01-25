#include "pch.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int file() 
{
	string text;
	char filename[100] = { 0 }; // путь до файла
	ifstream fpin;
	ofstream fpout;

	do
	{
		cout << "\nВведите вдрес файла: ";
		gets_s(filename);
		fpin.open(filename);

		if (!fpin) //Открытие файла для чтения 
		{
			cout << "Cannot open input file.\n";
		}
	} while (!fpin);


	fpout.open("result.txt");// результирующий файл
	if (!fpout)
		return 0;

	while (fpin)//пока не конец файла
	{
		getline(fpin, text);
		fpout << translate(text) << endl;
	}
}

void cons()
{
	string text;
	cout << "\nВведите тескт: \n";
	cin >> text;
	cout << translate(text);
}

string translate(string str) 
{
	string out;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'а' || str[i] == 'А')
		else if (str[i] == 'б' || str[i] == 'Б')
		else if (str[i] == 'в' || str[i] == 'В')
		else if (str[i] == 'г' || str[i] == 'Г')
		else if (str[i] == 'д' || str[i] == 'Д')
		else if (str[i] == 'е' || str[i] == 'Е')
		else if (str[i] == 'ё' || str[i] == 'Ё')
		else if (str[i] == 'ж' || str[i] == 'Ж')
		else if (str[i] == 'з' || str[i] == 'З')
		else if (str[i] == 'и' || str[i] == 'И')
		else if (str[i] == 'ё' || str[i] == 'Й')
		else if (str[i] == 'к' || str[i] == 'К')
		else if (str[i] == 'л' || str[i] == 'Л')
		else if (str[i] == 'м' || str[i] == 'М')
		else if (str[i] == 'н' || str[i] == 'Н')
		else if (str[i] == 'о' || str[i] == 'О')
		else if (str[i] == 'п' || str[i] == 'П')
		else if (str[i] == 'р' || str[i] == 'Р')
		else if (str[i] == 'с' || str[i] == 'С')
		else if (str[i] == 'т' || str[i] == 'Т')
		else if (str[i] == 'у' || str[i] == 'У')
		else if (str[i] == 'ф' || str[i] == 'Ф')
		else if (str[i] == 'х' || str[i] == 'Х')
		else if (str[i] == 'ц' || str[i] == 'Ц')
		else if (str[i] == 'ч' || str[i] == 'Ч')
		else if (str[i] == 'ш' || str[i] == 'Ш')
		else if (str[i] == 'щ' || str[i] == 'Щ')
		else if (str[i] == 'ь' || str[i] == 'Ь')
		else if (str[i] == 'ы' || str[i] == 'Ы')
		else if (str[i] == 'ъ' || str[i] == 'Ъ')
		else if (str[i] == 'э' || str[i] == 'Э')
		else if (str[i] == 'ю' || str[i] == 'Ю')
		else if (str[i] == 'я' || str[i] == 'Я')
	}
	return out;
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
