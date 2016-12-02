#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string filename = "stats.txt";
	fstream input;

	input.open(filename);

	if (!input.is_open())
	{
		return 1;
	}

	while (input)
	{
		string line;
		getline(input, line, ':'); // Gathers string up to the colon

		int population;
		input >> population;

		if (!input)
		{
			break; // End the loop if all data was collected.
		}

		input.get(); // This gets the new line character from input.

		cout << line << " -- " << population << endl;
	}

	input.close();

	return 0;
}