#include <iostream>
using namespace std;

int Aglobal[3][3];

// adding the value X to every element in the matrix Aglobal.
void addMatrix(int x)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            Aglobal[i][j] += x;
        }
    }
}

// printing the matrix Aglobal
int sumMatrix()
{
    int sumElements = 0;
    
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            sumElements += Aglobal[i][j];
    }
    
    return sumElements;
}

int main()
{
    addMatrix(1);
    addMatrix(10);
    addMatrix(100);
    
    int sumElements = sumMatrix();
    cout << sumElements << endl;
    
    return 0;
}