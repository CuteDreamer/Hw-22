#pragma once
#include <iostream>
using namespace std;
class Tech {
	string brand;
	string color;
	float price;
	bool working;
	int* count;
	int count_tech;

public:
	Tech() : Tech("Samsung", "black", 15000, true, count_tech)
	{
		cout << "Default c-tor\n";
	}

	Tech(string brand) : Tech(brand, "black", 15000, true, count_tech)
	{
		cout << "With brand\n";
	}
	Tech(string brand, string color) : Tech(brand, color, 15000, true, count_tech)
	{
		cout << "With brand, color\n";
	}
	Tech(string brand, string color, float price) : Tech(brand, color, price, true, count_tech)
	{
		cout << "With brand, color, price\n";
	}


	Tech(string brand, string color, float price, bool working, int count_tech) // main c-tor
	{
		SetBrand(brand);
		SetColor(color);
		SetPrice(price);
		SetWorking(working);
		SetCountTech(count_tech);
		count = new int[count_tech];
		for (int i = 0; i < count_tech; i++) {
			count[i] = rand() % count_tech + 1;
			cout << count[i] << "\n";
		}
		cout << "main c-tor\n";
	}

	Tech(const Tech& original)                                   // тут тоже конструктор копирования
	{
		SetBrand(original.brand); 
		SetColor(original.color);
		SetPrice(original.price);
		SetWorking(original.working);
		SetCountTech(original.count_tech);
		count = new int[original.count_tech];
		for (int i = 0; i < original.count_tech; i++) {
			this->count[i] = original.count[i];
			cout << original.count[i] << "\n";
		}
		cout << "Copy was created!!!\n";

	}



	~Tech()
	{
		delete[] count;
		cout << "Tech was destoyed!!!\n";
	}
	void SetBrand(string brand);
	void SetColor(string color);
	void SetPrice(float price);
	void SetWorking(bool working);
	void SetCountTech(int count_tech);

	bool GetWorking() const;
	string GetBrand() const;
	float GetPrice() const;
	string GetColor() const;
	int GetCountTech() const;

	void Print();
	void On() const;
	void Off() const;
	void Charge();
};
