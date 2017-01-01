#include <iostream>
#include <string>
using namespace std;

class Test
{
private:
	int id;
	string name;
public:
	Test() : id(0), name("") {}

	Test(int id, string name) : id(id), name(name) {}

	void print()
	{
		cout << id << ": " << name << endl;
	}

	const Test &operator=(const Test &other)
	{
		cout << "Assignment running" << endl;

		id = other.id;
		name = other.name;

		return *this;
	}
};

int main()
{
	Test test1(10, "Mike");
	cout << "Print test 1" << flush;
	test1.print();

	Test test2(20, "Bob");
	// By default this does a shallow copy of test1, which simply copies the values in the object.
	test2 = test1;
	cout << "Print test 2" << flush;
	test2.print();

	Test test3;
	test3.operator=(test2);
	cout << "Print test 3" << flush;
	test3.print();

	return 0;
}