#pragma once
#include <iostream>
using namespace std;
class ArrayList
{
    int* arr; // Указатель на массив
    int capacity; // Вместимость массива
    int size; // Текущий размер массива

    void EnsureCapacity(int minCapacity);         // private prototype


public:
    // Конструктор
    ArrayList() {
        arr = new int[1];
        capacity = 1;
        size = 0;
    }

    // Деструктор
    ~ArrayList() {
        delete[] arr;
    }

    int GetSize() const;            // prototypes getters
    int GetCapacity() const;
};

