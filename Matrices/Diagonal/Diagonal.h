#pragma once
class Diagonal
{
private:
	int n;
	int* A;

public:
	Diagonal(int n);

	void set(int i, int j, int x);

	int get(int i, int j);

	void display();

	~Diagonal();

};

