#include "pch.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <Windows.h>

using namespace std;

string translate(string str)
{
	string out;
	string c;
	int cnt = 0;
	if (str[0] == '-' || str[0] == '.')
	{
		for (int i = 0; i < str.length(); i++)
		{
			while (str[i] != ' ')
			{
				c += str[i];
				i++;
				if (str[i] == '\0' || str[i] == '\n')
					break;
			}

			if (c == ".-")
			{
				out += 'а';
				c.clear();
			}
			else if (c == "-...")
			{
				out += 'б';
				c.clear();
			}
			else if (c == ".--")
			{
				out += 'в';
				c.clear();
			}
			else if (c == "--.")
			{
				out += 'г';
				c.clear();
			}
			else if (c == "-..")
			{
				out += 'д';
				c.clear();
			}
			else  if (c == ".")
			{
				out += 'е';
				c.clear();
			}
			else if (c == "...-")
			{
				out += 'ж';
				c.clear();
			}
			else if (c == "--..")
			{
				out += 'з';
				c.clear();
			}
			else  if (c == "..")
			{
				out += 'и';
				c.clear();
			}
			else  if (c == ".---")
			{
				out += 'й';
				c.clear();
			}
			else  if (c == "-.-")
			{
				out += 'к';
				c.clear();
			}
			else  if (c == ".-..")
			{
				out += 'л';
				c.clear();
			}
			else  if (c == "--")
			{
				out += 'м';
				c.clear();
			}
			else if (c == "-.")
			{
				out += 'н';
				c.clear();
			}
			else  if (c == "---")
			{
				out += 'о';
				c.clear();
			}
			else  if (c == ".--.")
			{
				out += 'п';
				c.clear();
			}
			else  if (c == ".-.")
			{
				out += 'р';
				c.clear();
			}
			else  if (c == "...")
			{
				out += 'с';
				c.clear();
			}
			else  if (c == "-")
			{
				out += 'т';
				c.clear();
			}
			else  if (c == "..-")
			{
				out += 'у';
				c.clear();
			}
			else  if (c == "..-.")
			{
				out += 'ф';
				c.clear();
			}
			else  if (c == "....")
			{
				out += 'х';
				c.clear();
			}
			else  if (c == "-.-.")
			{
				out += 'ц';
				c.clear();
			}
			else  if (c == "---.")
			{
				out += 'ч';
				c.clear();
			}
			else  if (c == "----")
			{
				out += 'ш';
				c.clear();
			}
			else  if (c == "--.-")
			{
				out += 'щ';
				c.clear();
			}
			else  if (c == ".--.-.")
			{
				out += 'ъ';
				c.clear();
			}
			else  if (c == "-.--")
			{
				out += 'ы';
				c.clear();
			}
			else  if (c == "-..-")
			{
				out += 'ь';
				c.clear();
			}
			else  if (c == "..-..")
			{
				out += 'э';
				c.clear();
			}
			else  if (c == "..--")
			{
				out += 'ю';
				c.clear();
			}
			else  if (c == ".-.-")
			{
				out += 'я';
				c.clear();
			}
			else if (c == "......")
			{
				out += ".";
				c.clear();
			}
			else if (c == ".-.-.-")
			{
				out += ",";
				c.clear();
			}
			else if (c == "--..--")
			{
				out += "!";
				c.clear();
			}
			else if (c == "..--..")
			{
				out += "?";
				c.clear();
			}
			else if (c == "-.-.-.")
			{
				out += ";";
				c.clear();
			}
			else if (c == "-....-")
			{
				out += "-";
				c.clear();
			}
			else if (c== "...---")
			{
				out += ":";
				c.clear();
			}
			else if (str[i] == ' ' && str[i + 1] == ' ' && str[i + 2] == ' ')
			{
				out += ' ';
			}

		}
	}
	
	else {
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == 'а' || str[i] == 'А')
				out += ".-";
			 if (str[i] == 'б' || str[i] == 'Б')
				out += "-...";
			 if (str[i] == 'в' || str[i] == 'В')
				out += ".--";
			 if (str[i] == 'г' || str[i] == 'Г')
				out += "--.";
			 if (str[i] == 'д' || str[i] == 'Д')
				out += "-..";
			 if (str[i] == 'е' || str[i] == 'Е')
				out += ".";
			 if (str[i] == 'ё' || str[i] == 'Ё')
				out += ".";
			 if (str[i] == 'ж' || str[i] == 'Ж')
				out += "...-";
			 if (str[i] == 'з' || str[i] == 'З')
				out += "--..";
			 if (str[i] == 'и' || str[i] == 'И')
				out += "..";
			 if (str[i] == 'й' || str[i] == 'Й')
				out += ".---";
			 if (str[i] == 'к' || str[i] == 'К')
				out += "-.-";
			 if (str[i] == 'л' || str[i] == 'Л')
				out += ".-..";
			 if (str[i] == 'м' || str[i] == 'М')
				out += "--";
			 if (str[i] == 'н' || str[i] == 'Н')
				out += "-.";
			 if (str[i] == 'о' || str[i] == 'О')
				out += "---";
			 if (str[i] == 'п' || str[i] == 'П')
				out += ".--.";
			 if (str[i] == 'р' || str[i] == 'Р')
				out += ".-.";
			 if (str[i] == 'с' || str[i] == 'С')
				out += "...";
			 if (str[i] == 'т' || str[i] == 'Т')
				out += "-";
			 if (str[i] == 'у' || str[i] == 'У')
				out += "..-";
			 if (str[i] == 'ф' || str[i] == 'Ф')
				out += "..-.";
			 if (str[i] == 'х' || str[i] == 'Х')
				out += "....";
			 if (str[i] == 'ц' || str[i] == 'Ц')
				out += "-.-.";
			 if (str[i] == 'ч' || str[i] == 'Ч')
				out += "---.";
			 if (str[i] == 'ш' || str[i] == 'Ш')
				out += "----";
			 if (str[i] == 'щ' || str[i] == 'Щ')
				out += "--.-";
			 if (str[i] == 'ь' || str[i] == 'Ь')
				out += "-..-";
			 if (str[i] == 'ы' || str[i] == 'Ы')
				out += "-.--";
			 if (str[i] == 'ъ' || str[i] == 'Ъ')
				out += ".--.-.";
			 if (str[i] == 'э' || str[i] == 'Э')
				out += "..-..";
			 if (str[i] == 'ю' || str[i] == 'Ю')
				out += "..--";
			 if (str[i] == 'я' || str[i] == 'Я')
				out += ".-.-";


			 if (str[i] == '.')
				out += "......";
			 if (str[i] == ',')
				out += ".-.-.-";
			 if (str[i] == '!' )
				out += "--..--";
			 if (str[i] == '?' )
				out += "..--..";
			 if (str[i] == ';' )
				out += "-.-.-.";
			 if (str[i] == '-' )
				out += "-....-";
			 if (str[i] == ':' )
				out += "...---";


			 if (str[i] == ' ')
				out += "  ";

			out += " ";
		}
	}
	return out;
}

void file()
{
	string text;
	char filename[100] = { 0 }; // путь до файла
	ifstream fpin;
	ofstream fpout("result.txt");

	do
	{
		cout << "\nВведите адрес исходного файла файла: ";
		cin.get();
		gets_s(filename);
		fpin.open(filename);

		if (!fpin) //Открытие файла для чтения 
		{
			cout << "Cannot open input file.\n";
		}
	} while (!fpin);

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
	cin.ignore();
	getline(cin, text);
	cout << translate(text);
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int menu = 1;

	while (1)
	{
		system("CLS");
		cout << "Выберите действие\n";
		cout << "1 - Ввод из файла\n";
		cout << "2 - Ввод из консоли\n";
		cout << "0 - Выход\n";
		cin >> menu;
		if (menu == 1)
		{
			file();
			_getch();
			
		}
		 else if (menu == 2)
		{
			cons();
			_getch();

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
