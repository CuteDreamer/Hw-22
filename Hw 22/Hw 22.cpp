#include <iostream>

using namespace std;

class Cat {
	unsigned short age;
	unsigned short legs;
	unsigned short ears;
	string color;
	string name;

public:

	void SetName(string name)
	{
		if (name != "Alex") {
			cout << "Error, name is not " << name << ". True name is Alex!!";
		}
		else {
			cout << "Ok, name is " << name;
		}
		this->name = name;
	}

	void SetColor(string color)
	{
		this->color = color;
	}

	string GetColor() const
	{
		return color;
	}

	void SetAge(unsigned short age)
	{
		if (age > 33 && age < 40) {
			cout << "Ok!!";
		}
		else { cout << "Fatal ERROR!! :D "; }
		this->age = age;
	}

	void SetEars(unsigned short ears)
	{
		if (ears < 1 || ears > 2) {
			cout << "You must go to the psychiatrist :D";
		}
		else { cout << "Ok"; }
		this->ears = ears;
	}
	
	void SetLegs(unsigned short legs) {
		if (legs < 4 || legs > 5) {
			cout << "Welcome to our clinic :D";
		}
		else if (legs > 1 && legs < 4) {
			cout << "Pure cat...it's not Alex, it's Mr.Crabs";
		}
		else { cout << "Ok"; }
		this->legs = legs;
	}

	string GetName() const
	{
		return name;
	}
	unsigned short GetAge() const
	{
		return age;
	}
	unsigned short GetEars() const
	{
		return ears;
	}
	unsigned short GetLegs() const
	{
		return legs;
	}

	void Play() { cout << "Playing with 5 leg...:D"; }
	void Voice() { cout << "Go to ATB! Dont touch my beer! Miu-miu-miu"; }
	void Eating() { cout << "Nice Shaurma, guys!!"; }
	void Walking() { cout << "Walking with beer...."; }
};



class Window {

	string color;
	unsigned short glasses;
	string material;
	bool clean;
	bool working;

public:
	void SetColor(string color)
	{
		this->color = color;
	} 
	string GetColor() const
	{
		return color;
	}
	void SetGlasses(unsigned short glasses)
	{
		if (glasses < 1 || glasses > 3) {
			cout << "You are drunked! Go to sleep..";
		}
		else { cout << "Ok"; }
		this->glasses = glasses;
	}
	unsigned short GetGlasses() const
	{
		return glasses;
	}

	void SetMaterial(string material)
	{
		this->material = material;
	}

	string GetMaterial() const
	{
		return material;
	}
	void SetClean(bool clean)
	{
		if (clean == 1) {
			cout << "Its clean!";
		}
		else {
			cout << "Not clean...";
		}
		this->clean = clean;
	}
	bool GetClean() const
	{
		return clean;
	}
	void SetWork(bool working)
	{
		if (working == 1) {
			cout << "It works!";
		}
		else {
			cout << "Not works...";
		}
		this->working = working;
	}
	bool GetWorking() const
	{
		return working;
	}

	void Open() const { cout << "Open..."; }
	void Close() const { cout << "Closed"; }
	void Broken() const { cout << "Broken!!"; }

};

class Technic {
	string brand;
	string color;
	float price;
	bool working;

public:
	void SetBrand(string brand)
	{
		this->brand = brand;
	}
	string GetBrand() const
	{
		return brand;
	}
	void SetColor(string color)
	{
		this->color = color;
	}
	string GetColor() const
	{
		return color;
	}
	void SetPrice(float price)
	{
		this->price = price;
	}
	float GetPrice() const
	{
		return price;
	}
	void SetWorking(bool working)
	{
		if (working == 1) {
			cout << "It works!";
		}
		else {
			cout << "Not works...";
		}
		this->working = working;
	}
	bool GetWorking() const
	{
		return working;
	}
	void On() const { cout << "Power on..."; }
	void Off() const { cout << "Power off..."; }
	void Charge() { cout << "Charging..."; }
};

class Transport {
	string brand;
	string model;
	unsigned short max_speed;
	unsigned short wheels;
	bool working;

public:
	void SetBrand(string brand)
	{
		this->brand = brand;
	}
	string GetBrand() const
	{
		return brand;
	}
	void SetModel(string model)
	{
		this->model = model;
	}
	string GetModel() const
	{
		return model;
	}
	void SetMaxSpeed(unsigned short max_speed)
	{
		this->max_speed = max_speed;
	}
	unsigned short GetMaxSpeed() const
	{
		return max_speed;
	}
	void SetWheels(unsigned short wheels)
	{
		this->wheels = wheels;
	}
	unsigned short GetWheels() const
	{
		return wheels;
	}
	void SetWork(bool working)
	{
		if (working == 1) {
			cout << "It works!";
		}
		else {
			cout << "Not works...";
		}
		this->working = working;
	}
	bool GetWorking() const
	{
		return working;
	}
	void IsGoing() { cout << "Going..."; }
	void Stay() const { cout << "Parking..."; }
	void Sale() { cout << "For Sale!!"; }
};

class Plant {
	string color;
	bool alive;
	float height;

public:
	void SetColor(string color)
	{
		this->color = color;
	}
	void IsAlive(bool alive)
	{
		if (alive == 1) {
			cout << "It works!";
		}
		else {
			cout << "Not works...";
		}
		this->alive = alive;
	}
	bool GetAlive() const
	{
		return alive;
	}
	void SetHeight(float height)
	{
		this->height = height;
	}
	float GetHeight() const
	{
		return height;
	}
	void Stay() const { cout << "Staying..."; }
	void WindReaction() { cout << "Reacting on wind...."; }
	void DroughtReaction() { cout << "Small chance to be alive..."; }
};

int main()
{

}