#pragma once
#include <iostream>
#include <string>
using namespace std;
class Pair
{
	int First;
	double Second;
public:
	Pair();
	Pair(int First, double Second);
	Pair(const Pair& p);
	Pair operator= (const Pair& p);
	~Pair();
	void Show();
	void SetFirst(int N);
	void SetSecond(double D);
	int GetFirst();
	double GetSecond();

	bool operator< (const Pair& r);
	bool operator> (const Pair& r);

	Pair& operator++ ();
	Pair operator++ (int);
	Pair operator+(int value);
	bool operator== (Pair& p);

	friend ostream& operator<< (ostream& out,const Pair& p);
	friend istream& operator>> (istream& in, Pair& p);

	friend fstream& operator >> (fstream& fin, Pair& p);
	friend fstream& operator << (fstream& fout, const Pair& p);
};