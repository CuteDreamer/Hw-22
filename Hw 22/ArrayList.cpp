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
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity = minCapacity * 2;
    }
}