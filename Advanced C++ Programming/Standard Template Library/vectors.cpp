#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<double> nums;

	// Append values to end of vector.
	nums.push_back(132.434521);
	nums.push_back(12356.83);
	nums.push_back(981.3422);
	nums.push_back(987.11);

	cout << "Start of vector" << endl;

	/*
		++ operator is overloaded for vectors to move iterator to next value.
		* is also overloaded for vector::iterator class
	*/
	// This is the standard method of iterating through a vector.
	for (vector<double>::iterator it = nums.begin(); it != nums.end(); it++)
	{
		cout << *it << endl;
	}

	cout << "End of vector." << endl;

	return 0;
}
