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
	Transport()
	{
		brand = "Infinity";
		model = "q50";
		max_speed = 260;
		wheels = 4;
		working = true;
	}
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
