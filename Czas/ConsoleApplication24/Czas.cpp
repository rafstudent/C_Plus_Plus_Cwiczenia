#include "stdafx.h"
#include "Czas.h"


Czas::Czas()
{
}


Czas::~Czas()
{
}

const int Czas::getSekunda()
{
	return sekunda;
}

const int Czas::getMinuta()
{
	return minuta;
}

const int Czas::getGodzina()
{
	return godzina;
}

void Czas::setGodzina(int godzina)
{
	this->godzina = godzina;
}

void Czas::setSekunda(int sekunda)
{
	this->sekunda = sekunda;
}

void Czas::setMinuta(int minuta)
{
	this->minuta = minuta;
}
