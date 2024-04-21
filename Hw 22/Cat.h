#pragma once
#include <iostream>
using namespace std;
class Cat {
	unsigned short age;
	unsigned short legs;
	unsigned short ears;
	string color;
	string name;

public:

	Cat() : Cat(35, 5, 2, "red", "Alex")
	{
		cout << "Def c-tor";
	}

	Cat(unsigned short age) : Cat(age, 5, 2, "red", "Alex")
	{
		SetAge(age);
	}

	Cat(unsigned short age, unsigned short legs) : Cat(age, legs, 2, "red", "Alex")
	{
		SetAge(age);
		SetLegs(legs);
	}

	Cat(unsigned short age, unsigned short legs, unsigned short ears) : Cat(age, legs, ears, "red", "Alex")
	{
		SetAge(age);
		SetLegs(legs);
		SetEars(ears);
	}

	Cat(unsigned short age, unsigned short legs, unsigned short ears, string color) : Cat(age, legs, ears, color, "Alex")
	{
		SetAge(age);
		SetLegs(legs);
		SetEars(ears);
		SetColor(color);
	}

	// main конструктор (главный)

	Cat(unsigned short age, unsigned short legs, unsigned short ears, string color, string name) {
		SetName(name);
		SetColor(color);
		SetAge(age);
		SetEars(ears);
		SetLegs(legs);
		cout << "Cat was created!!!\n";
	}




	/*Cat(unsigned short age, unsigned short legs, unsigned short ears, string color, string name) {
		this->age = age;
		this->legs = legs;
		this->ears = ears;
		this->color = color;
		this->name = name;
		cout << "Cat main was created!\n";
	}*/

	~Cat()
	{
		cout << "Cat was destoyed!!!\n";
	}
	void SetName(string name);
	void SetColor(string color);
	void SetAge(unsigned short age);
	void SetEars(unsigned short ears);
	void SetLegs(unsigned short legs);

	string GetName() const;
	unsigned short GetAge() const;
	unsigned short GetEars() const;
	unsigned short GetLegs() const;
	string GetColor() const;

	void Play(); 
	void Voice(); 
	void Eating(); 
	void Walking();
	void Print();
};
