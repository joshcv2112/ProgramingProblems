/*
Author: Joshua Vaughan
Implementation of INSERTION-SORT(A) from page 18 of Introduction to Algorithms text.
*/

#include <iostream>
using namespace std;

int main()
{
    int A[10] = {5, 2, 4, 6, 1, 3};
    const int SIZE = 6;

    cout << "Array before sorting: ";
    for (int x = 0; x < SIZE; x++)
    {
        cout << A[x] << " ";
    }
    cout << endl;

    int key, i;
    for (int j = 2; j < SIZE; j++)
    {
        key = A[j];
        i = j - 1;
        while (i > 0 && A[i] > key)
        {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }

    cout << "Array before sorting: ";
    for (int x = 0; x < SIZE; x++)
    {
        cout << A[x] << " ";
    }
    cout << endl;

    return 0;
}