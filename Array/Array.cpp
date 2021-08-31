#include "Array.h"
#include<iostream>
using namespace std;

void Array::swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

Array::Array()
{
	size = 10;
	length = 0;
	A = new int[10];
}

Array::Array(int size)
{
	this->size = size;
	length = 0;
	A = new int[size];
}

Array::~Array()
{
	delete[]A;
}

void Array::Append(int x)
{
	if (length < size)
	{
		A[length++] = x;
	}
}

void Array::Insert(int index, int x)
{
	if (index >= 0 && index <= length)
	{
		for (int i = length - 1; i > index; i++)
		{
			A[i + 1] = A[i];
		}
		A[index] = x;
		length++;
	}
}

void Array::Display()
{
	for (int i = 0; i < length; i++)
		cout << A[i] << " ";

	cout << endl;
}

int Array::Delete(int index)
{
	int x = 0;
	if (index >= 0 && index < length)
	{
		x = A[index];

		for (int i = 0; i < length; i++)
		{
			A[i] = A[i + 1];
		}
		length--;
	}
	return x;
}

int Array::LinearSearch(int x)
{
	for (int i = 0; i < length; i++)
	{
		if (A[i] == x)
			return i;
	}
	return -1;
}

int Array::BinarySearch(int x)
{
	int l = 0, h = length - 1, mid;

	while (l <= h)
	{
		mid = (l + h) / 2;
		if (A[mid] == x)
			return mid;
		else if (A[mid] < x)
			l = mid + 1;
		else
			h = mid + 1;
	}
	return -1;
}

int Array::Get(int index)
{
	if (index >= 0 && index < length)
		return A[index];
	return -1;
}

int Array::Max()
{
	int max = A[0];
	for (int i = 0; i < length; i++)
	{
		if (A[i] > max)
			max = A[i];
	}
	return max;
}

int Array::Min()
{
	int min = A[0];
	for (int i = 0; i < length; i++)
	{
		if (A[i] < min)
			min = A[i];
	}
	return min;
}

int Array::Sum()
{
	int sum = 0;

	for (int i = 0; i < length; i++)
		sum += A[i];

	return sum;
	
}

float Array::Avg()
{
	return (float)Sum() / length;
}

void Array::Reverse()
{	
	int i, j;
	for (i = 0, j = length - 1; i < j; i++, j--)
		swap(&A[i], &A[j]);
}

bool Array::IsSorted()
{
	for (int i = 0; i < length; i++)
	{
		if (A[i] > A[i + 1])
			return false;
		return true;
	}
}
