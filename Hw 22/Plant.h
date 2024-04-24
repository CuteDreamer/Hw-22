#pragma once
#include <iostream>
using namespace std;

class Plant {
	string color;
	bool alive;
	float height;
	int* leaves = nullptr;                                            // вот здесь применил указатель
	int leaves_count = 0;

public:
	Plant() : Plant("green", true, 3.1, 0)
	{
		cout << "Std c-tor\n";
	}

	Plant(string color) : Plant(color, true, 3.1, 0)
	{
		cout << "with color\n";
	}
	Plant(string color, bool alive) : Plant(color, alive, 3.1, 0)
	{
		cout << "with color, alive\n";
	}

	Plant(string color, bool alive, float height, int leaves_count) {               // main constructor
		SetColor(color);               
		SetIsAlive(alive);
		SetHeight(height);
		SetLeavesCount(leaves_count);
		leaves = new int[leaves_count];                  // здесь выделил память
		for (int i = 0; i < leaves_count; i++) {
			leaves[i] = rand() % leaves_count + 1;
			cout << leaves[i] << "\n";                   // проверка выделилась ли память
		}
		cout << "Plant was created with all params!!\n";
	}

	Plant(const Plant& original)                         // конструктор копирования
	{
		SetColor(original.color);
		SetIsAlive(original.alive);
		SetHeight(original.height);
		SetLeavesCount(original.leaves_count);
		leaves = new int[original.leaves_count];
		for (int i = 0; i < original.leaves_count; i++) {
			this->leaves[i] = original.leaves[i];
			cout << original.leaves[i] << "\n";
		}
		cout << "Copy of Plant was created!!\n";
	}

	~Plant()
	{
		delete[] leaves;
		cout << "Plant was destoyed!!!\n";
		cout << leaves[1] << "\n";                               // проверка очистилась ли память
		leaves = nullptr;
	}

	void SetColor(string color);
	void SetIsAlive(bool alive);
	void SetHeight(float height);
	void SetLeavesCount(int leaves_count);

	string GetColor() const; 
	bool GetAlive() const;
	float GetHeight() const;
	int GetLeavesCount()const;

	void Print();
	void Stay() const;
	void WindReaction();
	void DroughtReaction();
};

