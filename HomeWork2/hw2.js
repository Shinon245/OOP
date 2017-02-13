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
		this._age = age;
		this._gender = gender;
		this._updatePresent;
	}
	
	_updatePresent()
	{
		if (this.gender == "Male") 
		{
			if (this.age < 5)
			{
				this._present = "Ball";
			}
			else 
			{
				this._present = "Video Game";
			}
		}
		else
		{
			if (this.age < 5)
			{
				this._present = "Barbie";
			}
			else
			{
				this._present = "Dresses";
			}
		}
	}
	
	get age() { return this._age; }
	set age(value) {
		if (value != this._age) {
			this._age = value;
			this._present = null;
		}
	}
	
	get gender() { return this._gender; }
	set gender(value) {
		if (value != this._gender) {
			this._gender = value;
			this._present = null;
		}
	}
	
	get present()
	{
		if (this._present == null) 
		{
			this._updatePresent();
		}
		return this._present;
	}
}

class Adult extends Person
{
	constructor(gender)
	{
		super();
		this._gender = gender;
		this._updatePresent;
	}
	
	_updatePresent()
	{
		if (this._gender == "Male")
		{
			this._present = "Boots";
		}
		else 
		{
			this._present = "High Heels";
		}
	}
	
	get gender() { return this._gender; }
	set gender(value) {
		if (value != this._gender) {
			this._gender = value;
			this._present = null;
		}
	}
	
	get present()
	{
		if (this._present == null) 
		{
			this._updatePresent();
		}
		return this._present;
	}
}

let console = new Console("console");
let k1 = new Child(5,"Male");
console.log("You should get this person: " + k1.present);
k1.gender = "Female";
console.log("You should get this person: " + k1.present);
let a1 = new Adult("Female");
console.log("You should get this person: " + a1.present);
a1.gender = "Male";
console.log("You should get this person: " + a1.present);