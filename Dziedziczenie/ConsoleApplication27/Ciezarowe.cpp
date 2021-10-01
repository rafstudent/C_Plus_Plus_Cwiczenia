#include "stdafx.h"
#include "Ciezarowe.h"


Ciezarowe::Ciezarowe()
{
}


Ciezarowe::~Ciezarowe()
{
}

void Ciezarowe::typ_pojazdu()
{
	std::cout << "Ciezarowy: " << std::endl;
	Dwusladowy::typ_pojazdu();
	Silnikowy::typ_pojazdu();
	Pojazd::Marka("Man");
	Pojazd::Model("ikw");
	Pojazd::rok_produkcji(2000);
	Pojazd::przebieg(10000);
}
