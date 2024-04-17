#pragma once
#include <iostream>
using namespace std;
class Tech {
	string brand;
	string color;
	float price;
	bool working;

public:
	Tech()
	{
		brand = "Samsung";
		color = "black";
		price = 15000;
		working = true;
	}
	~Tech()
	{
		cout << "Tech was destoyed!!!\n";
	}
	void SetBrand(string brand);
	void SetColor(string color);
	void SetPrice(float price);
	void SetWorking(bool working);

	bool GetWorking() const;
	string GetBrand() const;
	float GetPrice() const;
	string GetColor() const;

	void Print();
	void On() const;
	void Off() const;
	void Charge();
};
