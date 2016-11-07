/*
Author: Joshua Vaughan
Implementation of BUBBLESORT(A)
*/

#include <iostream>
using namespace std;

const int SIZE = 10;

void bubbleSort(int arr[])
 {
  for (int i = 0; i < SIZE; ++i)
    for (int j = 0; j < SIZE - i - 1; ++j)
      if (arr[j] > arr[j + 1])
     {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
  }	

void printArray(int a[])
{
    for (int i = 0; i < SIZE; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main()
{
    int a[10] = {4, 1, 3, 2, 8, 10, 14, 5, 7, 12};
    
    cout << "Array before sorting: ";
    printArray(a);
    
    bubbleSort(a);
    
    cout << "Array after sorting: ";
    printArray(a);
    
    return 0;
}
