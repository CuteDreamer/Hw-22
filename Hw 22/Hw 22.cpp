#include <iostream>
#include "Cat.h"
#include "Tech.h"
#include "Transport.h"
#include "Window.h"
#include "Plant.h"
#include "MyString.h"
#include "ArrayList.h"
#include <stack>

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
    cout << "Size: " << arr.GetSize() << "\n";
    cout << "Capacity: " << arr.GetCapacity() << "\n";

    // Выводим все элементы
    arr.Print();

    // Используем EnsureCapacity
    cout << "Ensuring capacity for 20 elements..." << "\n";
    arr.EnsureCapacity(20);
    cout << "New capacity: " << arr.GetCapacity() << "\n";

    // Добавляем больше элементов
    for (int i = 4; i < 20; i++) {
        arr.PushBack(i);
    }

    // Выводим размер и вместимость
    cout << "Size: " << arr.GetSize() << "\n";
    cout << "Capacity: " << arr.GetCapacity() << "\n";

    // Выводим все элементы
    arr.Print();

stack<int> WTF;                           
WTF.push(1);
WTF.push(2);
WTF.push(3);
WTF.push(4);
WTF.push(5);
WTF.pop();
WTF.pop();

stack<int> temp;

while (!WTF.empty()) {
    temp.push(WTF.top());
    WTF.pop();
}

while (!temp.empty()) {
    cout << temp.top() << "\n";
    WTF.push(temp.top());                 // по вашему примеру
    temp.pop();
}

} 
