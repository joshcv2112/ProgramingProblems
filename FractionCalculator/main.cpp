/*
Author: Joshua Vaughan
Description: A command line fraction calculator that uses overloaded operators.
*/

#include <iostream>
using namespace std;

struct Fraction {
    int num;
    int den;
};

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

void reduceFraction(*f)
{
    
}

Fraction addFraction(Fraction *f1, Fraction *f2)
{
    Fraction ans;
    
    if (f1->den == f2->den)
    {
        ans.num = f1->num + f2->num;
        ans.den = f1->den;
    }
    else if (f1->den > f2->den)
    {
        f1->num *= f2->den;
        f2->num *= f1->den;
        f1->den *= f2->den;
        f2->den *= f1->den;
        
        ans.num = f1->num + f2->num;
        ans.den = f1->den;
    }
    else if (f2->den > f1->den)
    {
        f2->num *= f1->den;
        f1->num *= f2->den;
        f2->den *= f1->den;
        f1->den *= f2->den;
        
        ans.num = f1->num + f2->num;
        ans.den = f1->den;
    }
    
    return ans;
}

int main()
{
    cout << "Welcome to the Fraction Calculator!" << endl;
    
    // Fraction & operation variables
    Fraction f1, f2;
    Fraction result;
    char op;
    
    inputFractions(f1.num, f1.den, f2.num, f2.den, op);
    
    switch(op)
    {
        case '+': result = addFraction(&f1, &f2);
    }
    
    cout << "Result: " << result.num << " / " << result.den << endl;
    
    return 0;
}
