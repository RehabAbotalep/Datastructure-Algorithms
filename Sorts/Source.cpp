#include<iostream>
using namespace std;

template<class T>

void Swap(T* x, T* y)
{
	T temp = *x;
	*x = *y;
	*y = temp;
}

template<class T>
void Print(T A[], int n, string s)
{	
	cout << s << ": [" ;
	for (int i = 0; i < n; i++) {
		cout << A[i] ;
		if (i < n - 1) 
			cout << ", ";
		
	}
	cout << "]" << endl;
}

template<class T>
void BubbleSort(T A[], int n)
{
	int i, j, flag = 0;
	for (i = 0; i < n - 1; i++)
	{	
		flag = 0;
		for (j = 0; j < n - i - 1; j++)
		{	
			if (A[j] > A[j + 1])
			{
				Swap(&A[j], &A[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
			return;
	}
}
template<class T>
void SelectionSort(T A[], int n)
{	
	int i, j, k;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (A[j] < A[k])
				k = j;
		}
		Swap(&A[i], &A[k]);
	}
}

int main()
{	
	char A[] = { 'b','a','c','d'};
	int n = sizeof(A)/sizeof(A[0]);
	
	Print(A, n, "Before sorting");

	SelectionSort(A, n);
	Print(A, n, "After sorting");
	cout << "----------------------------------" << endl;
	int B[] = { 10,3,5,8,6,9,2,4,1,7 };
	int s = sizeof(B) / sizeof(B[0]);

	Print(B, s, "Before sorting");

	BubbleSort(B, s);
	Print(B, s, "After sorting");

	return 0;
}