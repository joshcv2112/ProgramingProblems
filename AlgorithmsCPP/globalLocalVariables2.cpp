/*
    Simple example program illutrating what happens when one
    local and one global variable of the same name are initialized
    and printed.
*/

#include <iostream>
using namespace std;

int a;

void Printing()
{
    cout << a << "\n";

    // note that the local value of a take precidence.
    int a = 5;
    cout << a << "\n";
}

int main()
{
    a = 100;
    Printing();

    return 0;
}
