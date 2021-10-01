#include "stdafx.h"
#include "Pracownik.h"


Pracownik::Pracownik()
{
}


Pracownik::~Pracownik()
{
}


const string & Pracownik::getImie()
{
	return imie;
}

void Pracownik::setImie(const string &imie)
{
	this->imie = imie;
}

const string & Pracownik::getNazwisko()
{
	return nazwisko;
}

void Pracownik::setNazwisko(const string &nazwisko)
{
	this->nazwisko = nazwisko;
}

const int & Pracownik::getRokUrodzenia()
{
	return rokUrodzenia;
}

void Pracownik::setRokUrodzenia(const int &rokUrodzenia)
{
	this->rokUrodzenia = rokUrodzenia;
}

Adres * Pracownik::getAdres()
{
	return adres;
}

void Pracownik::setAdres(Adres *adres)
{
	this->adres = adres;
}

Pracodawca * Pracownik::getPracodawca()
{
	return pracodawca;
}

void Pracownik::setPracodawca(Pracodawca *pracodawca)
{
	this->pracodawca = pracodawca;
}
