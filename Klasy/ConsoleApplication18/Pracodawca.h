#pragma once
#include <string>
#include <iostream>
#include "Adres.h"

using namespace std;

class Pracodawca
{
public:
	//Podanie i ustalenie Nazwy, Roku Za³o¿enia, NIPu i adresu Pracodawcy
	Pracodawca();
	~Pracodawca();
	const string& getNazwa();
	void setNazwa(const string&);
	const int& getRokZalozenia();
	void setRokZalozenia(const int&);
	const int& getNip();
	void setNip(const int&);
	Adres* getAdres();
	void setAdres(Adres*);
private:
	string nazwa;
	int rokZalozenia;
	int nip;
	Adres* adres;
};

