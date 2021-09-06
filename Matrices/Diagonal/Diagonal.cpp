#include "Diagonal.h"
#include<iostream>
using namespace std;

Diagonal::Diagonal(int n)
{
	this->n = n;
	A = new int[n];
}

void Diagonal::set(int i, int j, int x)
{
	if (i == j)
		A[i - 1] = x;
}

int Diagonal::get(int i, int j)
{	
	if (i == j)
		return A[i - 1];
	
	return 0;
}

void Diagonal::display()
{
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == j)
				cout << A[i - 1]<<" ";
			else
				cout << "0 ";
		}
		cout << endl;
	}
	
}

Diagonal::~Diagonal()
{
	delete[]A;
}
