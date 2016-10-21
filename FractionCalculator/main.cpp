/*
Author: Joshua Vaughan
Description: A command line fraction calculator that uses overloaded operators.
*/

#include <iostream>
using namespace std;

void inputFractions(int &n1, int &d1, int &n2, int &d2, char &op)
{
    char trash;     // simply to catch the division symbol, not to be used anywhere...
    
    // input first fraction
    cin >> n1;
    trash = cin.get();
    cin >> d1;
    
    // input operation
    trash = cin.get();
    op = cin.get();
    trash = cin.get();
    
    // input second fraction
    cin >> n2;
    trash = cin.get();
    cin >> d2;
}

void outputEquation(int n1, int d1, int n2, int d2, char op)
{
    cout << n1 << "/" << d1 << " " << op << " " << n2 << "/" << d2 << endl;
}

int main()
{
    cout << "Welcome to the Fraction Calculator!" << endl;
    
    // Fraction & operation variables
    int n1, d1;
    int n2, d2;
    char op;
    
    inputFractions(n1, d1, n2, d2, op);
    // outputEquation(n1, d1, n2, d2, op);
    
    return 0;
}
