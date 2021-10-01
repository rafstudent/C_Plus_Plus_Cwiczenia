#pragma once
#include <string>
#include <iostream>

enum Kraj
{
	ANGLIA, BELGIA, POLSKA					//Kraje dostêpne do wyboru
};

using namespace std;

class Adres
{
public:
	Adres();
	~Adres();
	//Podanie i ustalenie miejscowosci, kodu pocztowego, numeru lokalu i Kraju
	const string& getMiejscowosc();						
	void setMiejscowosc(const string&);
	const string& getKodPocztowy();
	void setKodPocztowy(const string&);
	const int& getNumerLokalu();
	void setNumerLokalu(const int&);
	const Kraj& getKraj();
	void setKraj(const Kraj&);
private:
	string miejscowosc;
	string kodPocztowy;
	int numerLokalu;
	Kraj kraj;
};