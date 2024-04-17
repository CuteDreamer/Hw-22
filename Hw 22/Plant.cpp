#include "Plant.h"
#include <iostream>
using namespace std;


void Plant::SetColor(string color)
{
	this->color = color;
}
void Plant::SetIsAlive(bool alive)
{
	if (alive == 1) {
		cout << "It works!";
	}
	else {
		cout << "Not works...";
	}
	this->alive = alive;
}
void Plant::SetHeight(float height)
{
	this->height = height;
}

bool Plant::GetAlive() const
{
	return alive;
}
float Plant::GetHeight() const
{
	return height;
}
string Plant::GetColor()
{
	return color;
}
void Plant::Print() {
	cout << "Is alive: " << GetAlive() << "\n";
	cout << "Age: " << GetHeight() << "\n";
	cout << "Color: " << GetColor() << "\n\n\n";
}

void Plant::Stay() const { cout << "Staying..."; }
void Plant::WindReaction() { cout << "Reacting on wind...."; }
void Plant::DroughtReaction() { cout << "Small chance to be alive..."; }