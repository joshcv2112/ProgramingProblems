/*
Author: Joshua Vaughan
Lesson: Reading From Files
Description: A simple demonstration of how input is
gathered from text files using fstream include file.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string inFileName = "text.txt";

	ifstream inFile;

	inFile.open(inFileName);

	if (inFile.is_open())
	{
		string line;

		// Due to operator overloading, this loop will terminate
		// when the end of file is reached. Using eof() is not necessary.
		while (inFile)
		{
			getline(inFile, line);
			cout << line << endl;
		}
		// Always close the file
		inFile.close();
	}
	else
	{
		cout << "cannot open file: " << inFileName << endl;
	}

	return 0;
}