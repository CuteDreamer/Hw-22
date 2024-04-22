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

	Cat Fedor(7, 5, 2);
	Fedor.Print();
}