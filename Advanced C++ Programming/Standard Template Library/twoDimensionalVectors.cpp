#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// Initialize two dimensional vector.
	vector< vector<int> > grid(3, vector<int>(4, 7));

	// Add one column to row two of grid to create
	// a "ragged" 2 dimensional vector
	grid[1].push_back(8);
	cout << "grid 2D vector:" << endl;
	for (int row = 0; row < grid.size(); row++)
	{
		for (int col = 0; col < grid[row].size(); col++)
		{
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}

	// Exercise: Preinitialize a 2D vector and then
	// store 12 times table in it.

	cout << endl <<  "The 12 times table:" << endl << endl;

	vector< vector<int> > table(12, vector<int>(12, 0));

	for (int row = 0; row < table.size(); row++)
	{
		for (int col = 0; col < table[row].size(); col++)
		{
			table[row][col] = (row + 1) * (col + 1);
		}
	}

	// PRINT OUT VECTOR

	for (int row = 0; row < table.size(); row++)
	{
		for (int col = 0; col < table[row].size(); col++)
		{
			cout << table[row][col] << " ";
		}
		cout << endl;
	}

	cout << endl;
	return 0;
}

