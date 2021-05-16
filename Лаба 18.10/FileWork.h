#pragma once
#include <iostream>
#include "Pair.h"
#include <string>
#include <fstream>
using namespace std;
int MakeFile(const char* fName)
{
	fstream stream(fName, ios::out | ios::trunc);
	if (!stream)
	{
		return -1;
	}
	int n;
	Pair p;
	cout << "¬ведите кол-во пар чисел: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		stream << p;
	}
	stream.close();
	return n;
}
int PrintFile(const char* fName)
{
	fstream stream(fName, ios::in);
	if (!stream)
	{
		return -1;
	}
	Pair p;
	int i = 0;
	while (stream >> p)
	{
		cout << p << endl;
		i++;
	}
	stream.close();
	return i;
}
int DeleteInFile(const char* fName, Pair& k)
{
	fstream tmp("tmp", ios::out);
	fstream stream(fName, ios::in);
	if (!stream)
	{
		return -1;
	}
	int i = 0;
	Pair p;
	while (stream >> p)
	{
		if (stream.eof())
		{
			break;
		}
		if (p < k)
		{
			tmp << p;
		}

		i++;
	}
	stream.close();
	tmp.close();
	remove(fName);
	rename("tmp", fName);
	return i;
}
int Incriment(const char* fName, Pair& k, int L)
{
	fstream tmp("tmp", ios::out);
	fstream stream(fName, ios::in);
	if (!stream)
	{
		return - 1;
	}
	Pair pair1;
	int i = 0, l = 0;
	while (stream >> pair1)
	{
		if (stream.eof())
		{
			break;
		}
		if (pair1 == k)
		{
			pair1 + L;
			l++;
		}
		tmp << pair1;
		i++;
	}
	stream.close();
	tmp.close();
	remove(fName);
	rename("tmp", fName);
	return l;
}
int ChangeFile(const char* fName, int num, int m)
{
	fstream tmp("tmp", ios::out);
	fstream stream(fName, ios::in);
	if (!stream)
	{
		return -1;
	}
	Pair pair1, p;
	int i = 0, l = 0;
	while (stream >> pair1)
	{
		if (stream.eof())
		{
			break;
		}
		if (i == num)
		{
			while (m != 0)
			{
				cin >> p;
				tmp << p;
				m--;
			}
		}
		tmp << pair1;
		i++;
	}
	stream.close();
	tmp.close();
	remove(fName);
	rename("tmp", fName);
	return m;
}
