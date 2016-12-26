/*
Joshua Vaughan
Custom Object as Map Values Lesson
Advanced C++ Course, Udemy.
Simple example using custom Person class as value in a map. Also demonstrates use of copy constructor.
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
		cout << name << ": " << age << endl;
	}
};

int main()
{
	map<int, Person> people;

	people[50] = Person("Sarah", 23);
	people[32] = Person("Nick", 40);
	people[1] = Person("Claire", 30);

	people.insert(make_pair(55, Person("Bob", 45)));
	people.insert(make_pair(55, Person("Sue", 24)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
	{
		// the 'first' pointer refers to the first int value in map,
		// 'second' is clearly to the custom Person class stored in map.
		cout << it->first << ": " << flush;
		it->second.print();
	}

	return 0;
}
