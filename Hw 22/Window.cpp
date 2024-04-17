#include "Window.h"
#include <iostream>
using namespace std;


void Window::SetColor(string color)
{
	this->color = color;
}
void Window::SetWork(bool working)
{
	if (working == 1) {
		cout << "It works!";
	}
	else {
		cout << "Not works...";
	}
	this->working = working;
}
void Window::SetGlasses(unsigned short glasses)
{
	if (glasses < 1 || glasses > 3) {
		cout << "You are drunked! Go to sleep..";
	}
	else { cout << "Ok"; }
	this->glasses = glasses;
}
void Window::SetMaterial(string material)
{
	this->material = material;
}
void Window::SetClean(bool clean)
{
	if (clean == 1) {
		cout << "Its clean!";
	}
	else {
		cout << "Not clean...";
	}
	this->clean = clean;
}

string Window::GetColor() const
{
	return color;
}

unsigned short Window::GetGlasses() const
{
	return glasses;
}
string Window::GetMaterial() const
{
	return material;
}
bool Window::GetClean() const
{
	return clean;
}
bool Window::GetWorking() const
{
	return working;
}

void Window::Open() const { cout << "Open..."; }
void Window::Close() const { cout << "Closed"; }
void Window::Broken() const { cout << "Broken!!"; }
