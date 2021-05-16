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
		cout << "0 - Выход." << endl;
		cout << "1 - Создание файла." << endl;
		cout << "2 - Распечатать файл." << endl;
		cout << "3 - Удалить все записи с значением больше заданного." << endl;
		cout << "4 - Увеличение всех элементов." << endl;
		cout << "5 - Добавление записей." << endl;
		cin >> c;
		switch (c)
		{
		case 1: cout << "Введите имя файла: "; cin >> fName;
			k = MakeFile(fName);
			if (k < 0)
			{
				cout << "Ошибка!";
			}
			break;
		case 2: cout << "Введите имя файла: "; cin >> fName;
			k = PrintFile(fName);
			if (k == 0)
			{
				cout << "Файл пуст" << endl;
			}
			if (k < 0)
			{
				cout << "Ошибка!";
			}
			break;
		case 3: cout << "Введите имя файла: "; cin >> fName;
			cout << "Ввчедите пару для сравнения: ";
			cin >> number;
			k = DeleteInFile(fName, number);
			if (k < 0)
			{
				cout << "Ошибка";
			}
			break;
		case 4: cout << "Введите имя файла: "; cin >> fName;
			cout << "Ввчедите пару для сравнения: ";
			cin >> number;
			cout << "Введите L: "; 
			int L;
			cin >> L;
			k = Incriment(fName, number, L);
			if (k < 0)
			{
				cout << "Ошибка";
			}
			break;
		case 5: cout << "Введите имя файла: "; cin >> fName;
			cout << "Ввчедите номер элемента, после которого необходимо выполнить вставку: ";
			int num;
			cin >> num;
			cout << "Введите размер вставки: ";
			int m;
			cin >> m;
			k = ChangeFile(fName, num, m);
			if (k != 0)
			{
				cout << "Ошибка";
			}
			break;
		}

	} while (c != 0);
}