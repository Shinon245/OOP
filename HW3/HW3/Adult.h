#pragma once
#include <string>
#include "Person.h"

namespace people
{
	class Adult : public Person
	{
	private: std::string _gender;
	private: mutable std::string _present;
	private: mutable bool _cached;

	public: Adult(const std::string &gender);
	public: std::string getGender() const;
	public: void setGender(const std::string &value);
	public: std::string getPresent() const;
	public: bool getCached() const;

	private: void updatePresent() const;
	};
}
