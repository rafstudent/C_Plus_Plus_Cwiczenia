#include "stdafx.h"
#include "Rower.h"


Rower::Rower()
{
}


Rower::~Rower()
{
}

void Rower::typ_pojazdu()
{
	std::cout << "Rower: " << std::endl;
	Jednosladowy::typ_pojazdu();
	Pojazd::Marka("mtb");
	Pojazd::Model("davos");
	Pojazd::rok_produkcji(2010);
}
