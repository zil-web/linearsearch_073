#include <iostream>
using namespace std;

int arr[20]; //array to be search
int n; // Number of elemnts in the array
int i; // Index of array element

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\narray should have minimum 1 and maximum 20 elements.\n\n";

	}
	// Accept array elements
} 