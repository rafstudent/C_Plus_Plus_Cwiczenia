#include "stdafx.h"
#include "BazaDanych.h"
#include "Pracownik.h"

BazaDanych::BazaDanych()
{
}


BazaDanych::~BazaDanych()
{
}

//Ustalenie Adresu dla Pracownika i Pracodawcy
Adres* enter_Adres(string pracownikpracodawca)
{
	Adres *adres = new Adres();
	cout << "Adres " << pracownikpracodawca << ": " << endl;
	
	string Miejscowosc;
	cout << "Wpisz Miejscowosc: " << endl;
	cin >> Miejscowosc;
	adres->setMiejscowosc(Miejscowosc);

	string kod_pocztowy;
	cout << "Wpisz Kod pocztowy: " << endl;
	cin >> kod_pocztowy;
	adres->setKodPocztowy(kod_pocztowy);

	int numer_lokalu;
	cout << "Wpisz Numer Lokalu" << endl;
	cin >> numer_lokalu;
	adres->setNumerLokalu(numer_lokalu);

	//Przy wyborze Kraju nie wpisujemy nazwy Kraju lecz podajemy jeden z trzech numerów 0 - ANGLIA 1 - BELGIA 2 - POLSKA
	cout << "Wpisz numer Kraju (numery 0 - ANGLIA, 1 - BELGIA lub 2 - POLSKA)" << endl;
	int numer_kraju = (0, 1, 2);
	cin >> numer_kraju;
	switch (numer_kraju)
	{
	case 0:
		adres->setKraj(ANGLIA);
		break;
	case 1:
		adres->setKraj(BELGIA);
		break;
	case 2:
		adres->setKraj(POLSKA);
		break;
	}
	cout << endl;

return adres;
}

//Podanie danych Pracownika do Bazy wraz z danymi Pracodawcy
Pracownik BazaDanych::dodaj()
{
	Pracownik pracownik;
	string noweimie;
	cout << "Wpisz imie" << endl;
	cin >> noweimie;
	pracownik.setImie(noweimie);

	string nowenazwisko;
	cout << "Wpisz Nazwisko" << endl;
	cin >> nowenazwisko;
	pracownik.setNazwisko(nowenazwisko);

	int rok_urodzenia;
	cout << "Wpisz Rok Urodzenia" << endl;
	cin >> rok_urodzenia;
	pracownik.setRokUrodzenia(rok_urodzenia);

	Adres *adresPracownika = enter_Adres("pracownika");
	pracownik.setAdres(adresPracownika);
	
	Pracodawca *pracodawca = new Pracodawca();
	
	//Proœba o wpisanie danych Pracodawcy
	cout << "Dane Pracodawcy Pracownika: " << endl;

	string nazwaPracodawcy;
	cout << "Wpisz Nazwe pracodawcy: ";
	cin >> nazwaPracodawcy;
	pracodawca->setNazwa(nazwaPracodawcy);

	int rokZalozenia;
	cout << "Wpisz rok zalozenia" << endl;
	cin >> rokZalozenia;
	pracodawca->setRokZalozenia(rokZalozenia);

	int nip;
	cout << "Wpisz NIP" << endl;
	cin >> nip;
	pracodawca->setNip(nip);

	Adres *adresPracodawcy = enter_Adres("pracodawcy");
	pracodawca->setAdres(adresPracodawcy);
	pracownik.setPracodawca(pracodawca);
	
	return pracownik;
}

void BazaDanych::set_worker(Pracownik pracownik)
{
	pracownicy.push_back(pracownik);
}

//Usuwanie ostatniego pracownika
void BazaDanych::usun_ostatniego()
{
	pracownicy.pop_back();
}

//Wyœwietlanie bazy danych
	void BazaDanych::wyswietl_baze()
	{
			for (int numer_pracownika = 0; numer_pracownika < pracownicy.size(); numer_pracownika++)
			{
				//Wyœwietlenie numeru pracownika którego dane bêd¹ wypisane
				cout << endl << "Dane Pracownika numer " << numer_pracownika + 1 << ": " << endl;
				//Wyœwietlenie wszystkich podanych danych pracownika
				cout << "Imie: " << pracownicy.at(numer_pracownika).getImie() << endl;
				cout << "Nazwisko: " << pracownicy.at(numer_pracownika).getNazwisko() << endl;
				cout << "Rok urodzenia: " << pracownicy.at(numer_pracownika).getRokUrodzenia() << endl << endl;
				cout << "Adres Pracownika: " << endl;
				cout << "Miejscowosc: " << pracownicy.at(numer_pracownika).getAdres()->getMiejscowosc() << endl;
				cout << "Kod pocztowy: " << pracownicy.at(numer_pracownika).getAdres()->getKodPocztowy() << endl;
				cout << "Numer lokalu: " << pracownicy.at(numer_pracownika).getAdres()->getNumerLokalu() << endl;
				cout << "Kraj: ";
				switch (pracownicy.at(numer_pracownika).getAdres()->getKraj())
				{
				case 0:
					cout << "ANGLIA";
					break;
				case 1:
					cout << "BELGIA";
					break;
				case 2:
					cout << "POLSKA";
					break;
				}
				cout << endl;
				cout << "------------" << endl;
				//Wyœwietlenie wszystkich podanych danych pracodawcy
				cout << "Dane Pracodawcy: " << endl;
				cout << "Nazwa: " << pracownicy.at(numer_pracownika).getPracodawca()->getNazwa() << endl;
				cout << "Rok zalozenia: " << pracownicy.at(numer_pracownika).getPracodawca()->getRokZalozenia() << endl;
				cout << "NIP: " << pracownicy.at(numer_pracownika).getPracodawca()->getNip() << endl << endl;
				cout << "Adres Pracodawcy: " << endl;
				cout << "Miejscowosc: " << pracownicy.at(numer_pracownika).getPracodawca()->getAdres()->getMiejscowosc() << endl;
				cout << "Kod pocztowy: " << pracownicy.at(numer_pracownika).getPracodawca()->getAdres()->getKodPocztowy() << endl;
				cout << "Numer lokalu: " << pracownicy.at(numer_pracownika).getPracodawca()->getAdres()->getNumerLokalu() << endl;
				cout << "Kraj: ";
				switch (pracownicy.at(numer_pracownika).getPracodawca()->getAdres()->getKraj())
				{
				case 0:
					cout << "ANGLIA";
					break;
				case 1:
					cout << "BELGIA";
					break;
				case 2:
					cout << "POLSKA";
					break;
				}
				cout << endl;
			}
			cout << endl;
	}
	

