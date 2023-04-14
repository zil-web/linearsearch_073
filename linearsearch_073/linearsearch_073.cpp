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
	cout << "\n----------------\n";
	cout << "Enter array elements";
	cout << "-------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}

} 


void linearsearch()
{
	char ch;
	int comparisions; // Number of comparisions
}