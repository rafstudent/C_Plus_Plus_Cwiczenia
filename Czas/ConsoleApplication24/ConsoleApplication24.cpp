// Laboratoria5.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.

#include "stdafx.h"
#include <string>
#include <iostream>
#include "Czas.h"
#include "DataCzas.h"
#include "Data.h"
using namespace std;

int main()
{
	int wybor;
	cout << "Wpisz dane 2 czasow " << endl;
	DataCzas dodaj(const int i);							//Zawarte w DataCzas.cpp
	DataCzas pierwszy = dodaj(1);
	DataCzas drugi = dodaj(2);

	cout << "Wybierz czynnosc: " << endl;
	cout << "1. Dodaj jednostke czasu" << endl << "2. Porownaj" << endl << "3. Przejdz dalej" << endl;
	cin >> wybor;
	JednostkaCzasu czas1;
	
	if (wybor == 1)
	{
		int wybrany_typ;
		int ilosc;
		cout << "Wpisz dane dla jednostki czasu:" << endl;
		cout << "Wybierz typ jednostki:" << endl << "1. Miesiac" << endl << "2. Dzien" << endl;
		cin >> wybrany_typ;
		cout << "Wpisz ile chcesz dodac: ";
		cin >> ilosc;
		if (wybrany_typ == 1)
		{
			{
				czas1.setJednostka(Jednostka::MIESIAC);
				czas1.setIlosc(ilosc);
			}
		}
		if (wybrany_typ == 2)
		{
			czas1.setJednostka(Jednostka::DZIEN);
			czas1.setIlosc(ilosc);
		}

		int wybor1;
		cout << "Wybierz DataCzas: " << endl << "1. Pierwszy" << endl << "2. Drugi" << endl;
		cin >> wybor1;
		if (wybor1 == 1)
		{
			pierwszy = pierwszy + czas1;
			cout << "Dane po zakonczeniu operacji: " << endl;
			pierwszy.wypisz();
			cout << "Po kliknieciu nastapi rozpoczecie dalszej czesci (dzialanie konstruktorow)" << endl;
			system("pause");
		}
		if (wybor1 == 2)
		{
			drugi = drugi + czas1;
			cout << "Dane po zakonczeniu operacji: " << endl;
			drugi.wypisz();
			cout << "Po kliknieciu nastapi rozpoczecie dalszej czesci (dzialanie konstruktorow)" << endl;
			system("pause");
		}
	}

		if (wybor == 2)
		{
				if (pierwszy > drugi)
				{
					cout << endl << "Podana pierwsza data i czas jest wieksza od drugiej" << endl << endl;
					cout << "Po kliknieciu nastapi rozpoczecie dalszej czesci (dzialanie konstruktorow)" << endl;
					system("pause");
				}
				else
				{
					cout << endl << "Podana pierwsza data i czas jest mniejsza od drugiej" << endl << endl;
					cout << "Po kliknieciu nastapi rozpoczecie dalszej czesci (dzialanie konstruktorow)" << endl;
					system("pause");
				}	
		}
		
	//Po dokonaniu wyboru lub po wybraniu opcji 3
	Data Data;
	Czas Czas;

	DataCzas pierwszy_data_czas(pierwszy);
	pierwszy_data_czas.wypisz();									//wypisanie daty i czasu

	DataCzas konstruktor_bezargumentowy_data_czas;					//Uzycie konstruktora bez podania argumentow (konstruktor bezargumentowy)
	cout << "Konstruktor bezargumentowy" << endl;
	konstruktor_bezargumentowy_data_czas.wypisz();					//Wypisanie daty i czasu

	DataCzas konstruktor_zwykly_data_czas = { Data, Czas };			//Uzycie konstruktora zwyklego 
	cout << "Konstruktor zwykly" << endl;
	konstruktor_zwykly_data_czas.wypisz();							//Wypisanie daty i czasu

	DataCzas konstruktor_explicit_data_czas(Data);					//Uzycie konstruktora explicit 
	konstruktor_explicit_data_czas.setCzas(Czas);					//Ustalenie daty i czasu 
	cout << "Konstruktor explicit" << endl;
	konstruktor_explicit_data_czas.wypisz();						//Wypisanie daty i czasu

	system("pause");												//Zatrzymanie programu po wykonaniu operacji
	return 0;
}
