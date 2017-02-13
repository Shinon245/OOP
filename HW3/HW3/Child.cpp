#include "Child.h"

namespace people
{
	Child::Child(const int &age, const std::string &gender)
		: _age(age), _gender(gender), _present(), _cached(false)
	{
	}

	int Child::getAge() const
	{
		return _age;
	}

	void Child::setAge(const int &value)
	{
		if (_age != value)
		{
			_age = value;
			_cached = false;
		}
	}

	std::string Child::getGender() const
	{
		return _gender;
	}

	void Child::setGender(const std::string &value)
	{
		if (_gender != value)
		{
			_gender = value;
			_cached = false;
		}
	}

	void Child::updatePresent() const
	{
		if (_gender == "Male")
		{
			if (_age < 5)
			{
				_present = "Ball";
				_cached = true;
			}
			else
			{
				_present = "Video Game";
				_cached = true;
			}
		}
		else
		{
			if (_age < 5)
			{
				_present = "Barbie";
				_cached = true;
			}
			else
			{
				_present = "Dresses";
				_cached = true;
			}
		}
	}

	std::string Child::getPresent() const
	{
		{
			if (!_cached)
			{
				updatePresent();
			}
			return _present;
		}
	}

}