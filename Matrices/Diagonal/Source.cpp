#include<iostream>
using namespace std;
#include"Diagonal.h"


int main()
{
	Diagonal d(5);
	d.set(1, 1, 2);
	d.set(2, 2, 4);
	d.set(3, 3, 6);
	d.set(4, 4, 8);
	d.set(5, 5, 10);

	d.display();

	cout << d.get(1, 1);
	
	return 0;
}