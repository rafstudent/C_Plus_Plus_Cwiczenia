//Rafał Wiktor Informatyka Rok 2 Semestr 3
//Klasy

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Pracownik.h"
#include "Pracodawca.h"
#include "Adres.h"
#include "BazaDanych.h"

using namespace std;

int main()
{
	cout << "Rafal Wiktor Informatyka Rok 2 Semestr 3 Zadanie nr. 3 " << endl;
	BazaDanych base;
	int wybrana_liczba_pracownikow;					//Potrzebne do podania liczby dodawanych pracownikow
	cout << "Wpisz ilosc pracownikow: ";			//Prośba o podanie liczby pracownikow
	cin >> wybrana_liczba_pracownikow;				//Zapisanie liczby do zmiennej "wybrana_liczba_pracownikow"

	if (wybrana_liczba_pracownikow <= 3)			//Warunek nie pozwalający dodać wiecej niz 3 nowych pracownikow
		{
				for (int i = 0; i < wybrana_liczba_pracownikow; i++)
				{
					cout << "Wprowadz dane Pracownika: " << i + 1 << endl;		//Wyświetlenie prośby o podanie danych Pracownika oraz jego numeru (którego pracownika podajemy)
					Pracownik pracownik = base.dodaj();							//Dodawanie Pracownika
					base.set_worker(pracownik);
				}
				base.wyswietl_baze();											//Wyświetlenie całej bazy danych
				base.usun_ostatniego();											//Usunięcie ostatniego Pracownika
				cout << "Po usunieciu ostatniego pracownika" << endl;
				base.wyswietl_baze();											//Ponowne wyświetlenie bazy po usunięciu ostatniego pracownika
	}
	else
		cout << "Nie mozna dodac wiecej niz 3 pracownikow" << endl;		//Wyświetlane jeżeli chcemy dodać więcej niż 3 pracowników
	cout << "Dziekuje za uzycie programu" << endl;
	system("pause");
	return 0;
}










