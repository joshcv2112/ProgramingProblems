#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<double> numbers(20);

	cout << "Size: " << numbers.size() << endl;

	int capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;
	for (int i = 0; i < 10000; i++)
	{
		if (numbers.capacity() != capacity)
		{
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}

		numbers.push_back(i);
	}

	// using the vector::clear() method changes its size,
	// but the capacity (memory allocated) remains the same.
	// This is also true with the vector::resize() function.
	numbers.clear();
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

	return 0;
}
