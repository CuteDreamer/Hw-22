#pragma once
#include <iostream>
using namespace std;

class Plant {
	string color;
	bool alive;
	float height;
	int* leaves = nullptr;                                            // ��� ����� �������� ���������
	int leaves_count = 0;

public:
	Plant() : Plant("green", true, 3.1, leaves_count)
	{
		cout << "Std c-tor\n";
	}

	Plant(string color) : Plant(color, true, 3.1, leaves_count)
	{
		cout << "with color\n";
	}
	Plant(string color, bool alive) : Plant(color, alive, 3.1, leaves_count)
	{
		cout << "with color, alive\n";
	}

	Plant(string color, bool alive, float height, int leaves_count) {
		SetColor(color);               
		SetIsAlive(alive);
		SetHeight(height);
		SetLeavesCount(leaves_count);
		leaves = new int[leaves_count];                        // ����� ������� ������
		for (int i = 0; i < leaves_count; i++) {
			leaves[i] = rand() % leaves_count + 1;
			cout << leaves[i] << "\n";                   // �������� ���������� �� ������
		}
		cout << "Plant was created with all params!!\n";
	}

	~Plant()
	{
		delete leaves;
		cout << "Plant was destoyed!!!\n";
		cout << leaves[1];                               // �������� ���������� �� ������
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

