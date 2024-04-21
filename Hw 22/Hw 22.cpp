#include <iostream>
#include "Cat.h"
#include "Tech.h"
#include "Transport.h"
#include "Window.h"
#include "Plant.h"

using namespace std;


int main()
{
	Cat Alex;
	Alex.Print();

	Plant Ficus;
	Ficus.Print();

	Cat Fedor(7, 5, 2, "red", "Fedor");
	Fedor.Print();

	Tech phone("samsung");
	phone.Print();

	Tech iphone("apple", "blue");
	iphone.Print();
	
	Tech Sony("Sony", "grey", 25000);
	Sony.Print();

	Tech Huyowiy("Noname", "white", 7000, false);
	Huyowiy.Print();
}