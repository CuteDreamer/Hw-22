#include <iostream>
#include "Cat.h"
#include "Tech.h"
#include "Transport.h"
#include "Window.h"
#include "Plant.h"
#include "MyString.h"
#include "ArrayList.h"

using namespace std;


int main()
{
	//Plant Valera("blue", false, 1.85, 5);
	//Valera.Print();

	//Plant original("green", true, 1.8, 4);
	//original.Print();

	//Plant copy = original;
	//copy.Print();

	//Tech phone("Huyowiy", "brown", 7000.1, false, 5); // я честно хотел написать ксяоми
	//phone.Print();

	//Tech copy1 = phone;
	//copy1.Print();

	//cout << "You have 2 Huyowiy phones...Good Luck!\n";

	//MyString string("Artemkgfdsadf :D");
	//string.PrintLn();
	//string.Print();
	////string.GetLine();
	//string.Reverse();


    ArrayList arr;

    // Добавляем несколько элементов
    arr.PushBack(1);
    arr.PushBack(2);
    arr.PushBack(3);

    // Выводим размер и вместимость
    cout << "Size: " << arr.GetSize() << endl;
    cout << "Capacity: " << arr.GetCapacity() << endl;

    // Выводим все элементы
    arr.Print();

    // Используем EnsureCapacity
    cout << "Ensuring capacity for 20 elements..." << endl;
    arr.EnsureCapacity(20);
    cout << "New capacity: " << arr.GetCapacity() << endl;

    // Добавляем больше элементов
    for (int i = 4; i < 20; i++) {
        arr.PushBack(i);
    }

    // Выводим размер и вместимость
    cout << "Size: " << arr.GetSize() << endl;
    cout << "Capacity: " << arr.GetCapacity() << endl;

    // Выводим все элементы
    arr.Print();


} 