#include "Cat.h"
#include <iostream>
using namespace std;

void Cat::SetName(string name)
{
	if (name != "Alex") {
		cout << "Error, name is not " << name << "\nTrue name is Alex!!" << "\n";
	}
	else {
		cout << "Ok, name is " << name << "\n";
	}
	this->name = name;
}

void Cat::SetColor(string color)
{
	this->color = color;
}

void Cat::SetAge(unsigned short age)
{
	if (age > 33 && age < 40) {
		cout << "Ok!!" << "\n";
	}
	else { cout << "Fatal ERROR!! :D Age must be from 33 to 40 :D " << "\n"; }
	this->age = age;
}

void Cat::SetEars(unsigned short ears)
{
	if (ears < 1 || ears > 2) {
		cout << "You must go to the psychiatrist :D" << "\n";
	}
	else { cout << "Ok" << "\n"; }
	this->ears = ears;
}

void Cat::SetLegs(unsigned short legs) {
	if (legs < 4 || legs > 5) {
		cout << "Welcome to our clinic :D" << "\n" ;
	}
	else if (legs > 1 && legs < 4) {
		cout << "Pure cat...it's not Alex, it's Mr.Crabs" << "\n";
	}
	else { cout << "Ok" << "\n"; }
	this->legs = legs;
}

string Cat::GetName() const
{
	return name;
}
unsigned short Cat::GetAge() const
{
	return age;
}
unsigned short Cat::GetEars() const
{
	return ears;
}
unsigned short Cat::GetLegs() const
{
	return legs;
}

string Cat::GetColor() const
{
	return color;
}

void Cat::Print() {
	cout << "Name: " << GetName() << "\n";
	cout << "Age: " << GetAge() << "\n";
	cout << "Ears: " << GetEars() << "\n";
	cout << "Legs: " << GetLegs() << "\n";
	cout << "Color: " << GetColor() << "\n\n\n";
}
void Cat::Play() { cout << "Playing with 5 leg...:D"; }
void Cat::Voice() { cout << "Go to ATB! Dont touch my beer! Miu-miu-miu"; }
void Cat::Eating() { cout << "Nice Shaurma, guys!!"; }
void Cat::Walking() { cout << "Walking with beer...."; }