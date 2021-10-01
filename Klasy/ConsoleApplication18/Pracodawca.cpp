#include "stdafx.h"
#include "Pracodawca.h"


Pracodawca::Pracodawca()
{
}


Pracodawca::~Pracodawca()
{
}

const string & Pracodawca::getNazwa()
{
	return nazwa;
}

void Pracodawca::setNazwa(const string &nazwa)
{
	this->nazwa = nazwa;
}

const int & Pracodawca::getRokZalozenia()
{
	return rokZalozenia;
}

void Pracodawca::setRokZalozenia(const int &rokZalozenia)
{
	this->rokZalozenia = rokZalozenia;
}

const int & Pracodawca::getNip()
{
	return nip;
}

void Pracodawca::setNip(const int &nip)
{
	this->nip = nip;
}

Adres * Pracodawca::getAdres()
{
	return adres;
}

void Pracodawca::setAdres(Adres *adres)
{
	this->adres = adres;
}
