#include "MyString.h"
#include <iostream>
using namespace std;


void MyString::SetString(const char* text, unsigned int capacity)     // Setter
{
	length = strlen(text);

	if (capacity <= length)
		capacity = length + 1;
	this->capacity = capacity;

	delete[] this->text;
	this->text = new char[capacity];
	strcpy_s(this->text, length + 1, text);
}


int MyString::GetLength() const                                           // getters
{
	return length;
}

// метода SetLength не должно быть!

int MyString::GetCapacity() const
{
	return capacity;
}

MyString MyString::GetString() const
{
	MyString copy = text;
	return copy;
}


// methods

void MyString::Clear()
{
	text[0] = 0;
	length = 0;
}

void MyString::ShrinkToFit()
{
	if (length + 1 <= capacity)
	{
		return;
	}

	capacity = length + 1;
	char* temp = new char[capacity];
	strcpy_s(temp, capacity, text);
	delete[] text;
	text = temp;
}

void MyString::ShowInfo() const
{
	cout << "Text: " << text << "\n";
	cout << "Length: " << length << "\n";
	cout << "Capacity: " << capacity << "\n";
}
void MyString::Print()
{
	cout << text;
	cout << GetCapacity();
}
void MyString::PrintLn()
{
	cout << text << "\n";
}
void MyString::GetLine() const              // Not working without const (why???)
{
	cout << "Enter your string...\n";
	cin >> text;
	cout << text << "\n";
}

void MyString::Reverse()
{
	for (int i = length - 1; i >= 0; i--) {
		cout << text[i] << "\n";
	}
}
void MyString::Concat(const MyString& other) {
	unsigned int newLength = this->length + other.length;
	if (newLength >= this->capacity) {
	char* newText = new char[newLength + 5];
	strcpy(newText, this->text);
	delete[] this->text;
	this->text = newText;
	this->capacity = newLength + 5;
	strcat(this->text, other.text);                              // Copy-Paste....
	this->length = newLength;
	}
}