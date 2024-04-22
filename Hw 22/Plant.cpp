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
		cout << "It alive!\n";
	}
	else {
		cout << "Not alive...\n";
	}
	this->alive = alive;
}
void Plant::SetHeight(float height)
{
	this->height = height;
}

void Plant::SetLeavesCount(int leaves_count)
{
	this->leaves_count = leaves_count;
}

bool Plant::GetAlive() const
{
	return alive;
}
float Plant::GetHeight() const
{
	return height;
}
string Plant::GetColor() const
{
	return color;
}
int Plant::GetLeavesCount() const
{
	return leaves_count;
}

void Plant::Print() {
	cout << "Is alive: " << GetAlive() << "\n";
	cout << "Age: " << GetHeight() << "\n";
	cout << "Color: " << GetColor() << "\n";
	cout << "Leaves: " << GetLeavesCount() << "\n\n";
}

void Plant::Stay() const { cout << "Staying..."; }
void Plant::WindReaction() { cout << "Reacting on wind...."; }
void Plant::DroughtReaction() { cout << "Small chance to be alive..."; }