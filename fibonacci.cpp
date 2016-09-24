/*
Author: Joshua Vaughan
Program: Basic fibonacci program in C++.
Date: 9/24/16
*/

#include <iostream>
using namespace std;

int fib(int x)
{
    if (x <= 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return (fib(x-1) + fib(x-2));
}

int main()
{
    cout << "This program calculates the fibonacci number for any n less than 50." << endl;
    int n;
    
    while(true)
    {
        cout << "Enter value for n: ";
        cin >> n;
        if (n <= 25)
            cout << fib(n) << endl;
        else
            cout << "Error: Number must be less than 51, try again..." << endl;
    }

    return 0;
}