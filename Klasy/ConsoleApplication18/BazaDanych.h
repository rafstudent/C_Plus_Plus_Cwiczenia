#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Pracownik.h"

using namespace std;

class BazaDanych
{
public:
	BazaDanych();
	~BazaDanych();
	Pracownik dodaj();								//Dodawanie nowego pracownika i danych jego pracodawcy
	void set_worker(Pracownik pracownik);			
	void usun_ostatniego();							//Usuni�cie ostatniego 
	void wyswietl_baze();							//Wy�wietlenie bazy danych
private:
	Pracownik* pracownik;
	vector<Pracownik> pracownicy;
};

