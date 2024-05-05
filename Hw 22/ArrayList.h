#pragma once
#include <iostream>
using namespace std;
class ArrayList // Vector
{
	unsigned int size = 0; // количество действительно присутствующих элементов в контейнере
	unsigned int capacity = 10; // ёмкость (вместительность, запас памяти)
	int* data = nullptr; // указатель на динамический массив целых чисел

public:
	ArrayList() : ArrayList(10)
	{
		// cout << "C-TOR WITHOUT PARAMS!\n";
	}

	ArrayList(unsigned int capacity)
	{
		if (capacity < 10)
		{
			capacity = 10;
		}
		this->capacity = capacity;
		data = new int[capacity];
		// cout << "C-TOR WITH PARAMS!\n";
	}

	~ArrayList()
	{
		// cout << "DESTRUCTOR!\n";
		if (data != nullptr)
		{
			delete[] data;
			data = nullptr;
		}
	}


	int GetCapacity() const;
	int GetSize() const;

	void EnsureCapacity(int minCapacity);
	void PushBack(int value);
	void PushFront(int value);
	void Clear();
	bool IsEmpty() const;
	void Print() const;

};
