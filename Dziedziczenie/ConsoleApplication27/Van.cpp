#include "stdafx.h"
#include "Van.h"


Van::Van()
{
}


Van::~Van()
{
}

void Van::typ_pojazdu()
{
	std::cout << "Van: " << std::endl;
	Dwusladowy::typ_pojazdu();
	Silnikowy::typ_pojazdu();
	Osobowe::typ_pojazdu();
	Pojazd::Marka("Chevrolet");
	Pojazd::Model("Express");
	Pojazd::rok_produkcji(2010);
	Pojazd::przebieg(100000);
}
