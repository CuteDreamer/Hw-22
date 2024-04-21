#pragma once
#include <iostream>
using namespace std;

class Transport {
	string brand;
	string model;
	unsigned short max_speed;
	unsigned short wheels;
	bool working;

public:
	Transport() : Transport("Infinity", "q50", 260, 4, true)
	{
		cout << "Base c-tor";
	}

	Transport(string brand) : Transport(brand, "q50", 260, 4, true)
	{
		SetBrand(brand);
		cout << "with brand";
	}

	Transport(string brand, string model) : Transport(brand, model, 260, 4, true)
	{
		SetBrand(brand);
		SetModel(model);
		cout << "with brand, model";
	}
	Transport(string brand, string model, unsigned short max_speed) : Transport(brand, model, max_speed, 4, true)
	{
		SetBrand(brand);
		SetModel(model);
		SetMaxSpeed(max_speed);
		cout << "with brand, model, speed";
	}
	Transport(string brand, string model, unsigned short max_speed, unsigned short wheels) : Transport(brand, model, max_speed, wheels, true)
	{
		SetBrand(brand);
		SetModel(model);
		SetMaxSpeed(max_speed);
		SetWheels(wheels);
		cout << "with brand, model, speed";
	}

	Transport(string brand, string model, unsigned short max_speed, unsigned short wheels, bool working)
	{
		SetBrand(brand);                  
		SetModel(model);
		SetMaxSpeed(max_speed);
		SetWheels(wheels);
		SetWork(working);
	}


	/*Transport(string brand, string model, unsigned short max_speed, unsigned short wheels, bool working)
	{
		this->brand = brand;
		this->model = model;
		this->max_speed = max_speed;
		this->wheels = wheels;
		this->working = working;
	}*/
	~Transport()
	{
		cout << "Transport was destoyed!!!\n";
	}
	void SetBrand(string brand);
	void SetModel(string model);
	void SetMaxSpeed(unsigned short max_speed);
	void SetWheels(unsigned short wheels);
	void SetWork(bool working);

	bool GetWorking() const;
	string GetBrand() const;
	unsigned short GetMaxSpeed() const;
	unsigned short GetWheels() const;
	string GetModel() const;

	void IsGoing();
	void Stay() const;
	void Sale();
};
