/*
Author: Joshua Vaughan
Description: Lesson 3: Standard Exceptions, Advanced C++ Course
Program demonstrates functionality of bad_alloc error.
*/
#include <iostream>
using namespace std;

class CanGoWrong
{
    public:
    CanGoWrong()
    {
        // This char is an attepmpt to allocate too much memory,
        // which will cause a 'bad_alloc' error
        char *pMemory = new char[9999999999999999999999];
        delete [] pMemory;  // Throw away your junk.
    }
};

int main()
{
    try
    {
        CanGoWrong wrong;   
    }
    // bad_alloc is an exception indicating that the computer
    // could not allocate sufficient memory.
    catch(bad_alloc &e)
    {
        cout << "Caught exception: " << e.what() << endl;
        cout << "Failed to allocate sufficient memory." << endl;
    }

    cout << "Still running" << endl;

    return 0;
}
