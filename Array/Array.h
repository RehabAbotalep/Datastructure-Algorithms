#pragma once
class Array
{
private:
	int size;
	int length;
	int* A;
	void swap(int* x, int* y);

public:
	Array();
	Array(int size);
	~Array();
	void Append(int x);
	void Insert(int index, int x);
	void Display();
	int Delete(int index);
	int LinearSearch(int x);
	int BinarySearch(int x);
	int Get(int index);
	int Max();
	int Min();
	int Sum();
	float Avg();
	void Reverse();
	bool IsSorted();
	
};

