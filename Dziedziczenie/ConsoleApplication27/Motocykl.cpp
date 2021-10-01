#include "stdafx.h"
#include "Motocykl.h"


Motocykl::Motocykl()
{
}


Motocykl::~Motocykl()
{
}

void Motocykl::typ_pojazdu()
{
	std::cout << "Motocykl: " << std::endl;
	Silnikowy::typ_pojazdu();
	Jednosladowy::typ_pojazdu();
	Pojazd::Marka("Yamaha");
	Pojazd::Model("700");
	Pojazd::rok_produkcji(2017);
	Pojazd::przebieg(10000);
}
