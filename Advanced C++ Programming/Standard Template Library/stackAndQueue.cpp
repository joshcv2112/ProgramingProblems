#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

class Test
{
private:
	string name;
public:
	Test(string name) :
		name(name)
	{

	}
	~Test()
	{
		cout << "Object destroyed" << endl;
	}

	void print()
	{
		cout << name << endl;
	}
};

int main()
{
	// Last in first out
	stack<Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));

	Test &test1 = testStack.top();
	test1.print();

	testStack.pop();
	Test test2 = testStack.top();
	test2.print();

	return 0;
}