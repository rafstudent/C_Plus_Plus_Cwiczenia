#include "stdafx.h"
#include "Pojazd.h"


Pojazd::Pojazd()
{
}


Pojazd::~Pojazd()
{
}

void Pojazd::rok_produkcji(int rok_produkcji)
{
	std::cout << "Rok produkcji: " << rok_produkcji << std::endl;
}

void Pojazd::Marka(std::string Marka)
{
	std::cout << "Marka: " << Marka << std::endl;
}

void Pojazd::Model(std::string Model)
{
	std::cout << "Model: " << Model << std::endl;
}

void Pojazd::przebieg(int przebieg)
{
	std::cout << "Przebieg: " << przebieg << std::endl;
}


