/*
Author: Joshua Vaughan
Description: Lesson 4: Custom Exceptions, Advanced C++ Course
Demonstrates how custom exceptions can be used using the exception class
*/

#include <iostream>
#include <exception>

using namespace std;    

class MyException: public exception 
{
public:
    virtual const char* what() const throw()
    {
        return "Something bad hapened!";
    }
};

class Test
{
public:
    void goesWrong()
    {
        throw MyException();
    }
};

int main()
{
    Test test;
    try 
    {
        test.goesWrong();
    }
    catch(MyException &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}