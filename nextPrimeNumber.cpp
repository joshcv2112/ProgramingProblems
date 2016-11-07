/*
Author: Joshua Vaughan
Simple program that computes prime numbers until user
indicates termination.
*/

#include <iostream>
using namespace std;

bool isPrime(int number)
{
    if (number == 2 || number == 3)
        return true;

    if (number % 2 == 0 || number % 3 == 0)
        return false;

    int divisor = 6;
    while (divisor * divisor - 2 * divisor + 1 <= number)
    {

        if (number % (divisor - 1) == 0)
            return false;

        if (number % (divisor + 1) == 0)
            return false;

        divisor += 6;

    }

    return true;
}

int nextPrime(int p)
{
    while (!isPrime(++p))
    {}
    return p;
}

int main()
{
    bool continueLoop = true;
    int prime = 0;
    char input;
    while (continueLoop)
    {
        prime = nextPrime(prime);
        cout << prime << " is a prime number." << endl;
        cout << "Would you like to find another prime number? (Y/N) ";
        cin >> input;
        if (input == 'n' || input == 'N')
            continueLoop = false;
    }
    
    return 0;
}
