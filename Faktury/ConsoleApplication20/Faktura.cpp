#include "stdafx.h"
#include "Faktura.h"
#include <string>



Faktura::Faktura()
{
}

Faktura::~Faktura()
{
}

Faktura::Usluga::Usluga()
{
}

Faktura::Usluga::~Usluga()
{
}

void Faktura::Usluga::setnazwa_uslugi(const std::string &nazwa_uslugi)
{
	this->nazwa_uslugi = nazwa_uslugi;
}

const std::string & Faktura::Usluga::getnazwa_uslugi()
{
	return nazwa_uslugi;
}

const int & Faktura::Usluga::getcena()
{
	return cena;
}

void Faktura::Usluga::setcena(const int &cena)
{
	this->cena = cena;
}

const double & Faktura::Usluga::getvat()
{
	return vat;
}

void Faktura::Usluga::setvat(const double &vat)
{
	this->vat = vat;
}


const int & Faktura::getcena()
{
	return cena_netto;
}

void Faktura::setcena(const int &cena_netto)
{
	this->cena_netto = cena_netto;
}

const int & Faktura::getIdFaktury()
{
	return id_faktury;
}

void Faktura::setIdFaktury(const int &id_faktury)
{
	this->id_faktury = id_faktury;
}

void Faktura::setnazwa_uslugi(const std::string &nazwa_uslugi)
{
	this->nazwa_uslugi = nazwa_uslugi;
}

const std::string & Faktura::getnazwa_uslugi()
{
	return nazwa_uslugi;
}

const int & Faktura::getilosc()
{
	return ilosc;
}

void Faktura::setilosc(const int &ilosc)
{
	this->ilosc = ilosc;
}

void Faktura::setkategoria_jednostek_sprzedazy(const std::string &kategoria_jednostek_sprzedazy)
{
	this->kategoria_jednostek_sprzedazy = kategoria_jednostek_sprzedazy;
}

const std::string & Faktura::getkategoria_jednostek_sprzedazy()
{
	return kategoria_jednostek_sprzedazy;
}
