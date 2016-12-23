/*
Joshua Vaughan
Simple demonstration of map from the STL
Advanced C++ Course
*/
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int> ages;

	// In basic maps like this the keys must be unique
	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	// Because the keys are unique, this will update Mike's age value.
	ages["Mike"] = 70;

	pair<string, int> addToMap("Peter", 100);
	ages.insert(addToMap);

	// map elements are accessed like arrays.
	cout << ages["Raj"] << endl;

	// When you output someone not in map a default value of 0 is assigned.
	cout << ages["Sue"] << endl;

	if (ages.find("Vicky") != ages.end())
	{
		cout << "Found Vicky" << endl;
	}
	else
	{
		cout << "Key not found" << endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		pair<string, int> age = *it;
		// If we use pairs to access the values in the map, we can use the
		// dot operator to access its values, rather than using pointers (as shown below)
		cout << age.first << ": " << age.second << endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		// first and second keywords act like pointers in each map "object"
		cout << it->first << ": " << it->second << endl;
	}

	return 0;
}
