#pragma once
#include <iostream>
#include "Pracodawca.h"
#include "Adres.h"

using namespace std;

class Pracownik
{
public:
	//Podanie i ustalenie Imienia, Nazwiska, Roku Urodzenia i adresu Pracownika oraz dodanie danych Pracodawcy.
	Pracownik();
	~Pracownik();
	const string& getImie();
	void setImie(const string&);
	const string& getNazwisko();
	void setNazwisko(const string&);
	const int& getRokUrodzenia();
	void setRokUrodzenia(const int&);
	Adres* getAdres();
	void setAdres(Adres*);
	Pracodawca* getPracodawca();
	void setPracodawca(Pracodawca*);
private:
	string imie;
	string nazwisko;
	int rokUrodzenia;
	Adres* adres;
	Pracodawca* pracodawca;
};