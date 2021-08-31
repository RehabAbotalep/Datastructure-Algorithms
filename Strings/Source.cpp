#include<iostream>
using namespace std;

int strlen(char* s)
{	
	int i = 0;

	for (i = 0; s[i] != '\0'; i++) {}
	return i;
}

void toggle(char* s)
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			s[i] += 32;

		else if(s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	cout << s << endl;
}


bool inArray(char c, char* s)
{
	int l = 0, h = strlen(s)-1, m;
	while (l <= h)
	{
		m = (l + h) / 2;
		if (s[m] == c)
			return true;
		else if (s[m] > c)
			h = m - 1;
		else
			l = m + 1;
	}
	return false;
}

void countVowelsAndConsonents(char* s)
{
	int i, vCount = 0, cCount = 0;
	char lowerVowels[] = "aeiou";
	char capitalVowels[] = "AEIOU";

	for (i = 0; i < strlen(s); i++)
	{
		if (inArray(s[i], lowerVowels) || inArray(s[i], capitalVowels))
			vCount++;
		else if (s[i] >= 65 && s[i] <= 122)
			cCount++;
	}

	cout << "Vowels : " << vCount << " Consenents : " << cCount << endl;
}

int countWords(char* s)
{
	int words = 1;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ' && s[i - 1] != ' ')
			words++;
	}
	return words;
}

//special characters are not allowed
bool isValid(char* s)
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (!(s[i] >= 65 && s[i] <= 90) && (!(s[i] >= 97 && s[i] <= 122)) && (!(s[i] >= 48 && s[i] <= 57)))
			return false;
	}
	return true;
}

void reverse(char* s)
{
	int i, j, length = strlen(s);
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	cout << s << endl;
}

char* convertCapitalToLower(char* s)
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
	}
	return s;
}

void compare(char* A, char* B)
{
	int i, j;
	A = convertCapitalToLower(A);
	B = convertCapitalToLower(B);
	for (i = 0, j = 0; i < strlen(A) && j < strlen(B); i++, j++)
	{
		if (A[i] != B[j])
			break;
	}
	if (A[i] == B[j])
		cout << "Equal" << endl;
	else if (A[i] < B[j])
		cout << "A is smaller" << endl;
	else
		cout << "A is greater" << endl;
}

bool isPalindrom(char* s)
{
	int i, j, length = strlen(s);
	s = convertCapitalToLower(s);

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return false;
	}
	return true;
}

int main()
{
	char s[] = "Welcome";
	cout << "Length : " << strlen(s) << endl;

	toggle(s);
	countVowelsAndConsonents(s);

	cout << "Words numbers in string " << s << " = " << countWords(s) << endl;

	if (isValid(s))
		cout << "Valid" << endl;
	else
		cout << "Invalid" << endl;

	reverse(s);

	char A[] = "PAINTer";
	char B[] = "painter";
	compare(A, B);

	char p[] = "Azza";
	if (isPalindrom(p))
		cout << "Palindrom";
	else
		cout << "Not Palindrom";


}