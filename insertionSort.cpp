/*
Author: Joshua Vaughan
Date: 10/2/2016
Insertion Sort example.
*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
	int j, temp;

	for (int i = 0; i < size; i++)
	{
		j = i;

		while(j > 0 && arr[j] < arr[j-1])
		{
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
		}
	}
}

void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main()
{
	int arr[10] = {9, 5, 1, 3, 7, 6, 2, 4, 8, 0};
	cout << "Before sort: ";
	printArr(arr, 10);
	insertionSort(arr, 10);
	cout << "After sort: ";
	printArr(arr, 10);
	return 0;
}