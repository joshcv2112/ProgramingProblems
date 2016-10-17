#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5, b = 8, maximum;

    // maximum from a and b 
    maximum = max(a, b);

    // swapping two values
    swap(a, b);

    // double pow (double base, double exponent);

    int number = 2;
    double cubicRoot;

    cubicRoot = pow((double)(number), 1.0/3);

    cout << cubicRoot << endl;
    cout << fixed << setprecision(10) << cubicRoot << "\n";
    cout << fixed << setprecision(3) << cubicRoot << "\n";

    return 0;
}