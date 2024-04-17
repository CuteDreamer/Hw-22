#include "Transport.h"
#include <iostream>
using namespace std;


void Transport::SetBrand(string brand)
{
	this->brand = brand;
}

void Transport::SetModel(string model)
{
	this->model = model;
}

void Transport::SetMaxSpeed(unsigned short max_speed)
{
	this->max_speed = max_speed;
}

void Transport::SetWheels(unsigned short wheels)
{
	this->wheels = wheels;
}

void Transport::SetWork(bool working)
{
	if (working == 1) {
		cout << "It works!";
	}
	else {
		cout << "Not works...";
	}
	this->working = working;
}
bool Transport::GetWorking() const
{
	return working;
}
string Transport::GetBrand() const
{
	return brand;
}
unsigned short Transport::GetMaxSpeed() const
{
	return max_speed;
}
unsigned short Transport::GetWheels() const
{
	return wheels;
}
string Transport::GetModel() const
{
	return model;
}
void Transport::IsGoing() { cout << "Going..."; }
void Transport::Stay() const { cout << "Parking..."; }
void Transport::Sale() { cout << "For Sale!!"; }
