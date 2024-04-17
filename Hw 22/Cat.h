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
	Cat() {
		age = 7;
		legs = 5;
		ears = 2;
		color = "red";
		name = "Alex";
	}
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
