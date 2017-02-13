#include "Adult.h"
#include <fstream>
#include <iomanip>
#include <iostream>

namespace people
{
	Adult::Adult(const std::string &gender)
		: _gender(gender), _present(), _cached(false)
	{
	}

	std::string Adult::getGender() const
	{
		return _gender;
	}

	bool Adult::getCached() const
	{
		return _cached;
	}

	void Adult::setGender(const std::string &value)
	{
		if (_gender != value) 
		{
			_gender = value;
			_cached = false;
		}
	}

	void Adult::updatePresent() const
	{
		if (getGender() == "Male")
		{
			_present = "Boots";
			_cached = true;
		}
		else
		{
			_present = "High Heels";
			_cached = true;
		}
	}

	std::string Adult::getPresent() const
	{
		if (!_cached)
		{
			updatePresent();
		}
		return _present;
	}

}