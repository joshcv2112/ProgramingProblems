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

    int i, j, key;
    for (j = 1; j < SIZE; j++)
    {
        key = A[j];
        for (i = j - 1; (i >= 0) && (A[i] > key); i--)
        {
            A[i+1] = A[i];
        }
        A[i+1] = key;
    }

    cout << "Array before sorting: ";
    for (int x = 0; x < SIZE; x++)
    {
        cout << A[x] << " ";
    }
    cout << endl;

    return 0;
}