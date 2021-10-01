#include "stdafx.h"
#include "BazaDanych.h"
#include <iostream>
#include <string>

BazaDanych::BazaDanych()
{
}


BazaDanych::~BazaDanych()
{
}

//Dodawanie nowej faktury
void BazaDanych::dodaj_fakture()
{
	Faktura faktura;
		
		int id_faktury;
		std::cout << "Podaj id faktury: " << std::endl;
		std::cin >> id_faktury;
		faktura.setIdFaktury(id_faktury);
		
		int cena_netto;
		std::cout << "Podaj cene" << std::endl;
		std::cin >> cena_netto;
		faktura.setcena(cena_netto);
		
		std::string nazwa_uslugi;
		std::cout << "Podaj nazwe uslugi" << std::endl;
		std::cin >> nazwa_uslugi;
		faktura.setnazwa_uslugi(nazwa_uslugi);

		int ilosc;
		std::cout << "Podaj ilosc" << std::endl;
		std::cin >> ilosc;
		faktura.setilosc(ilosc);

		std::string kategoria_jednostek_sprzedazy;
		std::cout << "Podaj kategorie jednostek sprzedazy" << std::endl;
		std::cin >> kategoria_jednostek_sprzedazy;
		faktura.setkategoria_jednostek_sprzedazy(kategoria_jednostek_sprzedazy);

		this->faktury_niezaplacone.push_back(faktura); //dodanie nowej faktury niezap³aconej
}

//Zap³aæ fakture 
void BazaDanych::zaplac_fakture(int id_faktury)
{
	for (std::list<Faktura>::iterator it = faktury_niezaplacone.begin(); it != faktury_niezaplacone.end(); it++)
	{
		if (it->get_id_faktury() == id_faktury)
		{
			Faktura::StatusFaktury status;
			status.zaplacona = false;
			status.niezaplacona = true;
			faktury_zaplacone.push_back(*it);
			it = faktury_niezaplacone.erase(it);
			break;
		}
	}
}

//Dodawanie nowego kontrahenta
void BazaDanych::dodaj_kontrahenta()
{
	Kontrahent kontrahent;

	int NIP;
	std::cout << "Podaj NIP Kontrahenta: " << std::endl;
	std::cin >> NIP;
	kontrahent.setNIP(NIP);

	std::string nazwa_firmy;
	std::cout << "Podaj nazwe firmy" << std::endl;
	std::cin >> nazwa_firmy;
	kontrahent.setnazwa_firmy(nazwa_firmy);

	std::string Miasto;
	std::cout << "Podaj Miasto" << std::endl;
	std::cin >> Miasto;
	kontrahent.setMiasto(Miasto);

	std::string Ulica;
	std::cout << "Podaj Ulice" << std::endl;
	std::cin >> Ulica;
	kontrahent.setnazwaUlica(Ulica);

	this->kontrahenci.push_back(kontrahent);
}

//Dodawanie nowej us³ugi
void BazaDanych::dodaj_usluge()
{
	Faktura::Usluga usluga;
	
	std::string nazwa_uslugi;
	std::cout << "Podaj Nazwe Uslugi" << std::endl;
	std::cin >> nazwa_uslugi;
	usluga.setnazwa_uslugi(nazwa_uslugi);

	int cena;
	std::cout << "Podaj cene: " << std::endl;
	std::cin >> cena;
	usluga.setcena(cena);

	double vat;
	std::cout << "Podaj wartosc vat: " << std::endl;
	std::cin >> vat;
	usluga.setvat(vat);

	this->uslugi.push_back(usluga);
}

//Wypisywanie dodanych faktur
void BazaDanych::wypisz_faktury()
{
	std::cout << "===Faktury niezaplacone===" << std::endl;
	for (std::list<Faktura>::iterator it = faktury_niezaplacone.begin();
		it != faktury_niezaplacone.end(); it++)
	{
		std::cout << "ID=" << it->get_id_faktury() << std::endl;
	}
	std::cout << "===Faktury zaplacone===" << std::endl;
	for (std::list<Faktura>::iterator it = faktury_zaplacone.begin();
		it != faktury_zaplacone.end(); it++)
	{
		std::cout << "ID=" << it->get_id_faktury() << std::endl;
	}
	}

//Zliczanie cen wszystkich faktur zap³aconych
double BazaDanych::podlicz_faktury_zaplacone()
{
	double suma = 0;
	for (std::list<Faktura>::iterator it = faktury_zaplacone.begin(); it != faktury_zaplacone.end(); it++)
	{
		suma += it->getcena();
	}
	std::cout << "Zaplacona cena: " << suma << std::endl;
	return suma;
}

//Zliczanie cen wszytskich faktur niezap³aconych
double BazaDanych::podlicz_faktury_niezaplacone()
{
	double suma1 = 0;
	for (std::list<Faktura>::iterator it = faktury_niezaplacone.begin(); it != faktury_niezaplacone.end(); it++)
	{
		suma1 += it->getcena();
	}
	std::cout << "Pozostalo do zaplaty: " << suma1;
	return suma1;
}

