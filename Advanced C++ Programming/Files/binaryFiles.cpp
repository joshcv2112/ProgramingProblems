/*
Author: Joshua Vaughan
Lesson 3 Section 9, Struct Packing
Description: Simple demonstration of how pragma pack works with structs.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Removes padding from struct Person
#pragma pack(push, 1)
// The main way structs are different than classes is that
// structs make member variables public by default.
struct Person
{
	char name[50];
	int age;
	double height;
};
#pragma pack(pop)

int main()
{
	Person someone = {"Frodo", 220, 0.8};

	/////////// Write Binary File //////////////

	string fileName = "test.bin";
	ofstream outputFile;
	outputFile.open(fileName, ios::binary);

	if (outputFile.is_open())
	{
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

		outputFile.close();
	}
	else
	{
		cout << "Could not create file: " + fileName;
	}

	//////////// Read binary file ////////////
	
	Person someoneElse = {};

	ifstream inputFile;
	inputFile.open(fileName, ios::binary);

	if (inputFile.is_open())
	{
		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
		inputFile.close();
	}
	else
	{
		cout << "Could not read file: " + fileName;
	}

	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

	return 0;
}
