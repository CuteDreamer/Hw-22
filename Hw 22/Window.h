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
	Window() : Window("brown", 2, "wood", true, true)
	{
		cout << "std c-tor\n";
	}
	Window(string color) : Window(color, 2, "wood", true, true)
	{
		SetColor(color);
		cout << "with color\n";

	}
	Window(string color, unsigned short glasses) : Window(color, glasses, "wood", true, true)
	{
		SetColor(color);
		SetGlasses(glasses);
		cout << "with color, glasses\n";

	}
	Window(string color, unsigned short glasses, string material) : Window(color, glasses, material, true, true)
	{
		SetColor(color);
		SetGlasses(glasses);
		SetMaterial(material);
		cout << "with color, glasses, material\n";

	}
	Window(string color, unsigned short glasses, string material, bool clean) : Window(color, glasses, material, clean, true)
	{
		SetColor(color);
		SetGlasses(glasses);
		SetMaterial(material);
		SetClean(clean);
		cout << "with color, glasses, material, clean\n";

	}
	Window(string color, unsigned short glasses, string material, bool clean, bool working)
	{
		SetColor(color);
		SetGlasses(glasses);
		SetMaterial(material);
		SetClean(clean);
		SetWork(working);
		cout << "with all params";
	}



	/*Window(string color, unsigned short glasses, string material, bool clean, bool working)
	{
		this->color = color;
		this->glasses = glasses;
		this->material = material;
		this->clean = clean;
		this->working = working;
	}*/
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
