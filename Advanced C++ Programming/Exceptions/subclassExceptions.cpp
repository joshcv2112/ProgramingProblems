/*
Author: Joshua Vaughan
Description: Lesson 5 Subclass Exceptions, Advanced C++ Course
Demonstrates catching exceptions in the right order with regard to polymorphism. 
The main point being that bad_alloc is a subclass of exception, and bad_alloc errors
can potentially be caught by exception, rather than bad_alloc, which would be bad. 
*/

#include <iostream>
#include <exception>
using namespace std;

// This function simulates where an error may occur in a more real 
// programming situation.
void goesWrong()
{
    // Toggle these to test different errors.
    bool error1Detected = true;
    bool error2Detected = false;

    if (error1Detected)
    {
        throw bad_alloc();
    }

    if (error2Detected)
    {
        throw exception();
    }
}

int main()
{
    try 
    {
        goesWrong();
    }
    // bad_alloc is a subclass of exception, thus we must catch bad_alloc
    // first, or else it will be caught by exception (the parent class)
    // because polymorphism can really be a B sometimes.
    catch(bad_alloc &e) // always catch child exception first.
    {
        cout << "Catching bad_alloc: " << e.what() << endl;
    }
    catch(exception &e) // always catch parent exception last.
    {
        cout << "Catching exception: " << e.what() << endl;
    }

    return 0;
}
