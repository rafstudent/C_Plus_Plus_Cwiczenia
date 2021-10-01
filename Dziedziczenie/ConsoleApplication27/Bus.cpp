#include "stdafx.h"
#include "Bus.h"

Bus::Bus()
{
}


Bus::~Bus()
{
}

void Bus::typ_pojazdu()
{
	std::cout << "Bus: " << std::endl;
	Dwusladowy::typ_pojazdu();
	Silnikowy::typ_pojazdu();
	Osobowe::typ_pojazdu();
	Pojazd::Marka("Mercedes");
	Pojazd::Model("Sprinter");
	Pojazd::rok_produkcji(2012);
	Pojazd::przebieg(10000);
}
