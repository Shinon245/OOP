//Used same html file as used in class, just changed name of js file
class Person
{
	get present()
	{
		return 0;
	}
}

class Console 
{
	constructor(id)
	{
		this.element = document.getElementById(id);
	}
	log(message)
	{
		var p = document.createElement("p");
		p.innerHTML = message;
		this.element.appendChild(p)
	}
}

class Child extends Person
{
	constructor(age,gender)
	{
		super();
		this.age = age;
		this.gender = gender;
	}
	get present()
	{
		if (this.gender == "Male") 
		{
			if (this.age < 5)
			{
				return "Ball";
			}
			else 
			{
				return "Video Game";
			}
		}
		else
		{
			if (this.age < 5)
			{
				return "Barbie";
			}
			else
			{
				return "Dresses";
			}
		}
	}
}

class Adult extends Person
{
	constructor(gender)
	{
		super();
		this.gender = gender;
	}
	get present()
	{
		if (this.gender == "Male")
		{
			return "Boots";
		}
		else 
		{
			return "High Heels";
		}
	}
}

let console = new Console("console");
let person = new Adult("Female");
console.log("Present = " + person.present);
person.gender = "Male";
console.log("Present = " + person.present);