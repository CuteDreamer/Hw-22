#pragma once
#include <iostream>
using namespace std;

class Plant {
	string color;
	bool alive;
	float height;

public:
	Plant() {
		color = "green";
		alive = true;
		height = 1.30;
	}
	Plant(string color, bool alive, float height)
	{
		this->color = color;
		this->alive = alive;
		this->height = height;
	}
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

