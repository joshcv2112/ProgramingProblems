#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Test
{
	int id;
	string name;
public:
	Test(int id, string name) : id(id), name(name) {}

	void print()
	{
		cout << id << ": " << name << endl;
	}

	bool operator<(const Test &other) const 
	{
		return name < other.name;
	}
	// Placing function prototype in class gives it acces to members of Test.
	friend bool comp(const Test &a, const Test &b);
};

bool comp(const Test &a, const Test &b)
{
	return a.name < b.name;
}

int main()
{
	vector<Test> tests;

	tests.push_back(Test(5, "Bill"));
	tests.push_back(Test(10, "Adam"));
	tests.push_back(Test(7, "Steve"));
	tests.push_back(Test(3, "Victor"));

	std::sort(tests.begin(), tests.end());

	for (int i = 0; i < tests.size(); i++)
	{
		tests[i].print();
	}
		
	return 0;
}
