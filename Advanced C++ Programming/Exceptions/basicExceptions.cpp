/*
Author: Joshua Vaughan
Description: Lesson 2: Basic Exceptions, Advanced C++ Course
Program demonstrates how to throw and catch various basic errors.
*/

#include <iostream>
using namespace std;

void potentialError();
void usesPotentialError();

// This additional function shows that throws can be caught
// for any number of nested functions.
void usesPotentialError()
{
    potentialError();
}

void potentialError()
{
    // Toggle these variables to test different errors,
    // only one can be used (set to true) at once.
    bool error1 = false;
    bool error2 = false;
    bool error3 = true;

    // Test throw of type integer.
    if (error1)
    {
        throw 8;
    }

    // Test throw primitive string type (char).
    if (error2)
    {
        throw "An error has occured (primitive string)";
    }

    // Test throw of string object type.
    if (error3)
    {
        throw string("An error has occured (string object)");
    }
}

int main()
{
    try
    {
        usesPotentialError();
    }
    catch(int e)
    {
        cout << "Error #" << e << endl;
    }
    catch(char const * e)
    {
        cout << e << endl;
    }
    catch(string &e)
    {
        cout << e << endl;
    }
    return 0;
}
