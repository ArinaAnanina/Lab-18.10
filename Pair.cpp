#include <iostream>
#include "Pair.h"
#include <string>
#include <fstream>

using namespace std;

Pair::Pair()
{
	First = 1;
	Second = 1;
}

Pair::Pair(int First, double Second)
{
	this->First = First;
	this->Second = Second;
}

Pair::Pair(const Pair& p)
{
	this->First = p.First;
	this->Second = p.Second;
}

Pair Pair:: operator= (const Pair& p)
{
	if (&p == this)
	{
		return *this;
	}
	this->First = p.First;
	this->Second = p.Second;
}

Pair::~Pair() {}

void Pair::Show()
{
	cout << First << " : " << Second << endl;
}

void Pair::SetFirst(int N)
{
	First = N;
}

void Pair::SetSecond(double D)
{
	Second = D;
}

int Pair::GetFirst()
{
	return First;
}

double Pair::GetSecond()
{
	return Second;
}

bool Pair::operator< (const Pair& r) {
	return (First < r.First) && (Second < r.Second);
}

bool Pair::operator> (const Pair& r) {
	return (First > r.First) && (Second > r.Second);
}

Pair& Pair::operator++ ()
{
	First++;
	return *this;
}

Pair Pair::operator++ (int)
{
	Pair old(First, Second);
	Second++;
	return old;
}

Pair Pair::operator+(const int value)
{
	First += value;
	Second += value;
	return *this;
}

bool Pair::operator== (Pair& p)
{
	return (First == p.First && Second == p.Second);
}

ostream& operator << (ostream& out, const Pair& p)
{
	out << p.First << " : " << p.Second << endl;
	return out;
}
istream& operator>> (istream& in, Pair& p)
{
	cout << "¬ведите первое число: "; in >> p.First;
	cout << "¬ведите второе число: "; in >> p.Second;
	return in;
}

fstream& operator>> (fstream& fin, Pair& p)
{
	fin >> p.First;
	fin >> p.Second;
	return fin;
}
fstream& operator<< (fstream& fout,const Pair& p)
{
	fout << p.First << " ";
	fout << p.Second << endl;
	return fout;
}
