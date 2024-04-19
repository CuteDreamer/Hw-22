#pragma once
#include <iostream>
using namespace std;

class Window {

	string color;
	unsigned short glasses;
	string material;
	bool clean;
	bool working;

public:
	Window()
	{
		color = "brown";
		glasses = 2;
		material = "plastic";
		clean = false;
		working = true;
	}
	Window(string color, unsigned short glasses, string material, bool clean, bool working)
	{
		this->color = color;
		this->glasses = glasses;
		this->material = material;
		this->clean = clean;
		this->working = working;
	}
	~Window()
	{
		cout << "Window was destoyed!!!\n";
	}
	void SetColor(string color);
	void SetGlasses(unsigned short glasses);
	void SetMaterial(string material);
	void SetClean(bool clean);
	void SetWork(bool working);

	bool GetWorking() const;
	string GetColor() const;
	bool GetClean() const;
	string GetMaterial() const;
	unsigned short GetGlasses() const;

	void Open() const;
	void Close() const;
	void Broken() const;

};
