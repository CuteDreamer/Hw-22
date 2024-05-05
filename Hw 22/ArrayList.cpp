#include "ArrayList.h"
#include <iostream>
using namespace std;

int ArrayList::GetCapacity() const
{
	return capacity;
}

int ArrayList::GetSize() const
{
	return size;
}

void ArrayList::EnsureCapacity(int minCapacity) {            // realization
    if (minCapacity > capacity) {
        int* newArr = new int[minCapacity * 2];
        for (int i = 0; i < size; i++) {
            newArr[i] = data[i];
        }
        delete[] data;
        data = newArr;
        capacity = minCapacity * 2;
    }
}

void ArrayList::PushBack(int value) {
    data[size] = value; // EnsureCapacity(); // проверка, хватит ли места для нового элемента
    size++;
}
void ArrayList::PushFront(int value) {
    // EnsureCapacity();
    for (int i = size; i > 0; i--) // i = 1
    {
        data[i] = data[i - 1]; // data[1] = data[0]
    }
    data[0] = value;
    size++;
}
void ArrayList::Clear()
{
    size = 0;
}
bool ArrayList::IsEmpty() const
{
    return size == 0;
}
void ArrayList::Print() const
{
    if (IsEmpty())
    {
        cout << "Vector is empty.\n";
        return;
    }

    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";
}