#pragma once
#include <iostream>
using namespace std;

class Plant {
	string color;
	bool alive;
	float height;

public:
	Plant() : Plant("green", true, 3.1)
	{
		cout << "Std c-tor\n";
	}

	Plant(string color) : Plant(color, true, 3.1)
	{
		SetColor(color);
		cout << "with color\n";
	}
	Plant(string color, bool alive) : Plant(color, alive, 3.1)
	{
		SetColor(color);
		SetIsAlive(alive);
		cout << "with color, alive\n";
	}

	Plant(string color, bool alive, float height) {
		SetColor(color);               
		SetIsAlive(alive);
		SetHeight(height);
		cout << "Plant was created with all params!!\n";
	}
	



	// main конструктор
	/*Plant(string color, bool alive, float height)  
	{
		this->color = color;
		this->alive = alive;
		this->height = height;
	}*/
	~Plant()
	{
		cout << "Plant was destoyed!!!\n";
	}

	void SetColor(string color);
	void SetIsAlive(bool alive);
	void SetHeight(float height);

	string GetColor();
	bool GetAlive() const;
	float GetHeight() const;

	void Print();
	void Stay() const;
	void WindReaction();
	void DroughtReaction();
};

