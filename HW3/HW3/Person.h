#pragma once
#include <string>

namespace people
{
	class Person
	{
	public: Person();
	public: std::string getPresent() const;
	public: virtual ~Person();
	};
}