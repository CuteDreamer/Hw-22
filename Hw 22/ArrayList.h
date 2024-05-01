#pragma once
#include <iostream>
using namespace std;
class ArrayList
{
    int* arr; // ��������� �� ������
    int capacity; // ����������� �������
    int size; // ������� ������ �������

    void EnsureCapacity(int minCapacity);         // private prototype


public:
    // �����������
    ArrayList() {
        arr = new int[1];
        capacity = 1;
        size = 0;
    }

    // ����������
    ~ArrayList() {
        delete[] arr;
    }

    int GetSize() const;            // prototypes getters
    int GetCapacity() const;
};

