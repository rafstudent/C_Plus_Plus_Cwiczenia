#pragma once
#include <list>
#include <string>
#include "Faktura.h"
#include "Kontrahent.h"
#include "Usluga.h"

class BazaDanych
{
private:
	//Listy faktur, kontrahentow oraz uslug
	std::list<Faktura> faktury_zaplacone;				
	std::list<Faktura> faktury_niezaplacone;
	std::list<Kontrahent> kontrahenci;
	std::list<Faktura::Usluga> uslugi;

public:
	BazaDanych();
	virtual ~BazaDanych();
	//Funkcje programu 
	void dodaj_fakture();
	void zaplac_fakture(int id_faktury);
	void dodaj_kontrahenta();
	void dodaj_usluge();
	double podlicz_faktury_zaplacone();
	double podlicz_faktury_niezaplacone();
	void wypisz_faktury();
};

