#include "Pair.h"
#include "FileWork.h"
#include <iostream>
#include <fstream>
using namespace std;
void main()
{
	system("color F0");
	setlocale(LC_ALL, "rus");
	Pair pair1, pair2, pair3, number;
	int k, c;
	char fName[30];
	do
	{
		cout << "0 - �����." << endl;
		cout << "1 - �������� �����." << endl;
		cout << "2 - ����������� ����." << endl;
		cout << "3 - ������� ��� ������ � ��������� ������ ���������." << endl;
		cout << "4 - ���������� ���� ���������." << endl;
		cout << "5 - ���������� �������." << endl;
		cin >> c;
		switch (c)
		{
		case 1: cout << "������� ��� �����: "; cin >> fName;
			k = MakeFile(fName);
			if (k < 0)
			{
				cout << "������!";
			}
			break;
		case 2: cout << "������� ��� �����: "; cin >> fName;
			k = PrintFile(fName);
			if (k == 0)
			{
				cout << "���� ����" << endl;
			}
			if (k < 0)
			{
				cout << "������!";
			}
			break;
		case 3: cout << "������� ��� �����: "; cin >> fName;
			cout << "�������� ���� ��� ���������: ";
			cin >> number;
			k = DeleteInFile(fName, number);
			if (k < 0)
			{
				cout << "������";
			}
			break;
		case 4: cout << "������� ��� �����: "; cin >> fName;
			cout << "�������� ���� ��� ���������: ";
			cin >> number;
			cout << "������� L: "; 
			int L;
			cin >> L;
			k = Incriment(fName, number, L);
			if (k < 0)
			{
				cout << "������";
			}
			break;
		case 5: cout << "������� ��� �����: "; cin >> fName;
			cout << "�������� ����� ��������, ����� �������� ���������� ��������� �������: ";
			int num;
			cin >> num;
			cout << "������� ������ �������: ";
			int m;
			cin >> m;
			k = ChangeFile(fName, num, m);
			if (k != 0)
			{
				cout << "������";
			}
			break;
		}

	} while (c != 0);
}