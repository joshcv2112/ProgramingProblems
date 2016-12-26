/*
Joshua Vaughan
Custom Object as Map Keys Lesson
Advanced C++ Course, Udemy.
Simple example demonstrating how custom objects can be used as map keys.
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person() : name(""), age(0) {}

	Person(const Person &other)
	{
		cout << "Copy constructor running!" << endl;
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) :
		name(name), age(age) {
	}
	void print() const {
		cout << name << ": " << age << flush;
	}

	bool operator<(const Person &other) const
	{
		return name < other.name;
	}
};

int main()
{
	map<Person, int> people;

	people[Person("Sarah", 23)] = 50;
	people[Person("Nick", 40)] = 32;
	people[Person("Claire", 30)] = 1;

	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->second << ": " << flush;
		it->first.print();
		cout << endl;
	}

	return 0;
}
