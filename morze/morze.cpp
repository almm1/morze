#include "pch.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int file() 
{
	string text;
	char filename[100] = { 0 }; // ���� �� �����
	ifstream fpin;
	ofstream fpout;

	do
	{
		cout << "\n������� ����� �����: ";
		gets_s(filename);
		fpin.open(filename);

		if (!fpin) //�������� ����� ��� ������ 
		{
			cout << "Cannot open input file.\n";
		}
	} while (!fpin);


	fpout.open("result.txt");// �������������� ����
	if (!fpout)
		return 0;

	while (fpin)//���� �� ����� �����
	{
		getline(fpin, text);
		fpout << translate(text) << endl;
	}
}

void cons()
{
	string text;
	cout << "\n������� �����: \n";
	cin >> text;
	cout << translate(text);
}

string translate(string str) 
{
	string out;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
		else if (str[i] == '�' || str[i] == '�')
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
