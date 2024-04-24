#pragma once
#include <iostream>
using namespace std;

class MyString
{
	char* text = nullptr;
	unsigned int length = 0;
	unsigned int capacity = length + 5; // i dont understand why it was 80. 

public:
	MyString() : MyString("", 10) {} // 10 at standart. if string will be bigger then 10, capacity = length + 5

	MyString(const char* text) : MyString(text, 10) {}

	MyString(unsigned int capacity) : MyString("", capacity) {}

	MyString(const MyString& original) : MyString(original.text, original.capacity) {}

	MyString(const char* text, unsigned int capacity)
	{
		SetString(text, capacity);
	}

	~MyString()
	{
		if (text != nullptr)
		{
			delete[] text;
			text = nullptr;
		}
	}


	// setter
	void SetString(const char* text, unsigned int capacity = 80); // why 80 ??

	// getters
	int GetLength() const;
	int GetCapacity() const;
	MyString GetString() const;
	


		// methods
	void Clear();
	void ShrinkToFit();
	void ShowInfo() const;

	// homework

	void Print();
	void PrintLn();
	void GetLine() const;     // Not working without const
	void Reverse();
	void Concat(const MyString& other);
};

