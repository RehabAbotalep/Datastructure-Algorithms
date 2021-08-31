#include<iostream>
using namespace std;
#include"Array.h";

int main()
{
	Array* arr;
	int s, ch;
	int x, index;

	cout << "Enter size of array" << endl;
	cin >> s;
	arr = new Array(s);

	do {
		cout << "\n\nMenu\n";
		cout << "1. Insert\n";
		cout << "2. Delete\n";
		cout << "3. Append\n";
		cout << "4. Search\n";
		cout << "5. Max \n";
		cout << "6. Min \n";
		cout << "7. Sum \n";
		cout << "8. Avg\n";
		cout << "9. Reverse\n";
		cout << "10. Dispaly\n";
		cout << "11. Check is Sorted\n";
		cout << "Enter you choice ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter an element and index";
			cin >> x >> index;
			arr->Insert(index, x);
			break;
			
		case 2:
			cout << "Enter index";
			cin >> index;
			x = arr->Delete(index);
			cout << "Deleted Element is : " << x << endl;
			break;

		case 3:
			cout << "Enter element";
			cin >> x;
			arr->Append(x);
			break;

		case 4:
			cout << "Enter element you want to search for";
			cin >> x;
			index = arr->BinarySearch(x);
			cout << x << " is in index : " << index;
			break;

		case 5:
			cout << "Max element : " << arr->Max();
			break;

		case 6:
			cout << "Min element : " << arr->Min();
			break;

		case 7:
			cout << "Array sum is : " << arr->Sum();
			break;

		case 8:
			cout << "Array AVG is : " << arr->Avg();
			break;

		case 9:
			arr->Reverse();
			arr->Display();
			break;

		case 10:
			arr->Display();
			break;

		case 11:
			if (arr->IsSorted())
				cout << "Sorted Array :)";
			else
				cout << "Not Sorted :(";
			break;

		default:
			break;
		}
	} while (ch < 12);
	return 0;
}