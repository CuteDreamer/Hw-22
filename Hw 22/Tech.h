#pragma once
#include <iostream>
using namespace std;
class Tech {
	string brand;
	string color;
	float price;
	bool working;

public:
	Tech() : Tech("Samsung", "black", 15000, true)
	{
		cout << "Default c-tor\n";
	}

	Tech(string brand) : Tech(brand, "black", 15000, true)
	{
		cout << "With brand\n";
	}
	Tech(string brand, string color) : Tech(brand, color, 15000, true)
	{
		cout << "With brand, color\n";
	}
	Tech(string brand, string color, float price) : Tech(brand, color, price, true)
	{
		cout << "With brand, color, price\n";
	}


	Tech(string brand, string color, float price, bool working) // main c-tor
	{
		SetBrand(brand);
		SetColor(color);
		SetPrice(price);
		SetWorking(working);
		cout << "main c-tor\n";
	}


	//Tech(string brand, string color, float price, bool working)
	//{
	//	this->brand = brand;
	//	this->color = color;
	//	this->price = price;
	//	this->working = working;
	//}

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
