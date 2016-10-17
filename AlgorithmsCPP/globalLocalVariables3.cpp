#include <bits/stdc++.h>
using namespace std;

int A[3][5];

void printingRow(int row)
{
    for (int i = 0; i < 5; ++i)
    {
        cout << A[row][i] << " ";
    }
    cout << endl;
}
int main()
{
    // i needs to be declared locally inside main, 
    // if done globally will result in errors...
    int i;

    for (i = 0; i < 3; ++i)
    {
        printingRow(i);
    }

    cout << i << endl;

    return 0;
}