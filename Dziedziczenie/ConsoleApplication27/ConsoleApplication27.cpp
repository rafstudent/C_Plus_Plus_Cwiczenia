// ConsoleApplication27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Rower.h"
#include "Van.h"
#include "Bus.h"
#include "Motocykl.h"
#include "Ciezarowe.h"

int main()
{
	Ciezarowe ciezarowe;
	ciezarowe.typ_pojazdu();

	std::cout << std::endl;

	Motocykl motocykl;
	motocykl.typ_pojazdu();

	std::cout << std::endl;

	Van van;
	van.typ_pojazdu();

	std::cout << std::endl;

	Rower rower;
	rower.typ_pojazdu();

	std::cout << std::endl;

	Bus bus;
	bus.typ_pojazdu();

	system("pause");
    return 0;
}

