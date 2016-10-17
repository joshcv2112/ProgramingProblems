#include <iostream>

using namespace std;

int Aglobal[3];
int a;

void printing()
{
    cout << a << endl;
}

int main()
{
    int Alocal[3];

    a = 5;
    
    printing();

    return 0;
}