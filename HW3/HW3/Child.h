#pragma once
#include <string>
#include "Person.h"

namespace people
{
	class Child : public Person
	{
	private: int _age;
	private: std::string _gender;
	private: mutable std::string _present;
	private: mutable bool _cached;

	public: Child(const int &age, const std::string &gender);

	public: int getAge() const;
	public: void setAge(const int &value);

	public: std::string getGender() const;
	public: void setGender(const std::string &value);

	public: std::string getPresent() const;

	private: void updatePresent() const;

	};
}