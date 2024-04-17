#include "Tech.h"
#include <iostream>
using namespace std;

void Tech::SetBrand(string brand)
{
	this->brand = brand;
}

void Tech::SetColor(string color)
{
	this->color = color;
}

void Tech::SetPrice(float price)
{
	this->price = price;
}

void Tech::SetWorking(bool working)
{
	if (working == 1) {
		cout << "It works!";
	}
	else {
		cout << "Not works...";
	}
	this->working = working;
}
bool Tech::GetWorking() const
{
	return working;
}
string Tech::GetBrand() const
{
	return brand;
}
float Tech::GetPrice() const
{
	return price;
}
string Tech::GetColor() const
{
	return color;
}
void Tech::Print()
{
	cout << "Is working: " << GetWorking() << "\n";
	cout << "Brand: " << GetBrand() << "\n";
	cout << "Price: " << GetPrice() << "\n";
	cout << "Color: " << GetColor() << "\n\n\n";
}

void Tech::On() const { cout << "Power on..."; }
void Tech::Off() const { cout << "Power off..."; }
void Tech::Charge() { cout << "Charging..."; }
