#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(0);
	
	list<int>::iterator it = numbers.begin();
	it++;
	numbers.insert(it, 100);
	cout << "Element: " << *it << endl;

	list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;
	numbers.erase(eraseIt);
	cout << "Element: " << *eraseIt << endl;

	// We have to use an iterator because we can't use an index.
	for (list<int>::iterator it = numbers.begin(); it != numbers.end();)
	{
		if (*it == 2)
		{
			numbers.insert(it, 1234);
		}

		if (*it == 1)
		{
			numbers.erase(it);
		}
		else
		{
			it++;
		}
	}

	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}