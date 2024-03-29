// ConsoleApplication20.cpp : Defines the entry point for the console application.
// Rafał Wiktor 
#include <string>
#include "stdafx.h"
#include "Faktura.h"
#include "BazaDanych.h"
#include <iostream>
int main()
{
	BazaDanych bazaDanych;
	int miesiac;
	int id_faktury;
	int ilosc_nowych_faktur;
	int ilosc_nowych_kontrahentow;
	int ilosc_nowych_uslug;

	//Unia zawierająca decyzję użytkownika programu
	union moja_unia
	{
		int decyzja_1;
	};
	moja_unia zadanie;
	
	//MENU
	do
	{
		std::cout << "Wybierz co chcesz zrobic: " << std::endl;
		std::cout << "1. Dodaj faktury" << std::endl;
		std::cout << "2. Zaplac fakture" << std::endl;
		std::cout << "3. Dodaj kontrahenta" << std::endl;
		std::cout << "4. Dodaj usluge" << std::endl;
		std::cout << "5. Zobacz dodane faktury" << std::endl;
		std::cout << "6. Zakoncz program" << std::endl;

		std::cin >> zadanie.decyzja_1;				//Pobranie decyzji od użytkownika
		
		//Dodanie nowej faktury
		if (zadanie.decyzja_1 == 1)
		{
			std::cout << "Ile nowych faktur chcesz dodac?" << std::endl;
			std::cin >> ilosc_nowych_faktur;
			for (int i = 0; i < ilosc_nowych_faktur; i++)
			{
				Faktura faktura;
				std::cout << "Podaj dane faktury: " << i + 1 << std::endl;
				bazaDanych.dodaj_fakture();
				std::cout << std::endl;
			};

			bazaDanych.wypisz_faktury();			//Po dodaniu nowych faktur zostaje wyświetlony ich numer ID
			std::cout << std::endl;
		};

		//Jeżeli użytkownik chce zapłacić za fakture
		if (zadanie.decyzja_1 == 2)
			{
					bazaDanych.wypisz_faktury();
					std::cout << std::endl;
					std::cout << "Ktora fakture chcesz zaplacic (podaj ID)?" << std::endl;
					std::cin >> id_faktury;
					bazaDanych.zaplac_fakture(id_faktury);
					std::cout << std::endl << "Aktualny stan faktur" << std::endl;
					bazaDanych.wypisz_faktury();
					bazaDanych.podlicz_faktury_zaplacone();
					bazaDanych.podlicz_faktury_niezaplacone();
					std::cout << std::endl;
					std::cout << std::endl;
		};

		//Dodanie nowych kontrahentów
		if (zadanie.decyzja_1 == 3)
		{
			std::cout << "Ile Kontrahentow chcesz dodac?" << std::endl;
			std::cin >> ilosc_nowych_kontrahentow;
			for (int i = 0; i < ilosc_nowych_kontrahentow; i++)
			{
				Kontrahent kontrahent;
				std::cout << "Podaj dane kontrahenta: " << i + 1 << std::endl;
				bazaDanych.dodaj_kontrahenta();
				std::cout << std::endl;
			};
		}

		//Dodanie nowych usług
		if (zadanie.decyzja_1 == 4)
		{
			std::cout << "Ile Uslug chcesz dodac?" << std::endl;
			std::cin >> ilosc_nowych_uslug;
			for (int i = 0; i < ilosc_nowych_uslug; i++)
			{
				Faktura::Usluga usluga;
				std::cout << "Podaj dane nowej uslugi: " << i + 1 << std::endl;
				bazaDanych.dodaj_usluge();
				std::cout << std::endl;
			};
		}

		//Wypisanie dodanych faktur z podziałem na zapłacone i niezapłacone
		if (zadanie.decyzja_1 == 5)
		{
			std::cout << "Dodane faktury: " << std::endl;
			bazaDanych.wypisz_faktury();
			std::cout << std::endl;
		};
	} while (zadanie.decyzja_1 != 6);
	
	std::cout << "Dziekuje za uzycie programu" << std::endl;

	system("pause");
    return 0;
}

