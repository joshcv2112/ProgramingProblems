/*
Author: Joshua Vaughan
Lesson 3 Section 9, Struct Packing
Description: Simple demonstration of how pragma pack works with structs.
*/
#include <iostream>
using namespace std;


#pragma pack(push, 1)
// The main way structs are different than classes is that
// structs make member variables public by default.
struct Person
{
	char name[50];
	int age;
	double weight;
};
#pragma pack(pop)

int main()
{
	// Outputs number of bytes that Person occupies.
	cout << sizeof(Person) << endl;

	return 0;
}
