#include "stdafx.h"
#include "Kontrahent.h"
#include <string>


Kontrahent::Kontrahent()
{
}


Kontrahent::~Kontrahent()
{
}

const int & Kontrahent::getNIP()
{
	return NIP;
}

void Kontrahent::setNIP(const int &NIP)
{
	this->NIP = NIP;
}

void Kontrahent::setnazwa_firmy(const std::string &nazwa_firmy)
{
	this->nazwa_firmy = nazwa_firmy;
}

const std::string & Kontrahent::getnazwa_firmy()
{
	return nazwa_firmy;
}

void Kontrahent::setMiasto(const std::string &Miasto)
{
	this->Miasto = Miasto;
}

const std::string & Kontrahent::getMiasto()
{
	return Miasto;
}

void Kontrahent::setnazwaUlica(const std::string &Ulica)
{
	this->Ulica = Ulica;
}

const std::string & Kontrahent::getnazwaUlica()
{
	return Ulica;
}
