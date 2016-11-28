/*
Author: Joshua Vaughan
Writing Text Files, Advanced C++ Course
Description:
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile;
    outFile.open("text.txt");

    if (outFile.is_open())
    {
        outFile << "Hello there" << endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else
    {
        cout << "Could not create file" << endl;
    }

    return 0;
}
 