#include <iostream>
#include <vector>
#include <string>

#include "Person.h"
#include "Child.h"
#include "Adult.h"

using namespace std;

int main(int argc, char *argv[])
{
	people::Child *child = new people::Child(3, "Male");
	people::Adult *adult = new people::Adult("Female");

	std::vector < people::Child* > people;
	people.push_back(new people::Child(3, "Male"));
	people.push_back(new people::Child(6, "Female"));

	for (auto person : people)
	{
		cout << "This person's present is: " << person->getPresent() << endl;
	}

	for (auto person : people)
	{
		delete person;
	}

	cout << "Child's present = " << child->getPresent() << endl;

	cout << "Adult's present = " << adult->getPresent() << endl;

	system("pause");

	delete child;
	delete adult;

	return 0;
}