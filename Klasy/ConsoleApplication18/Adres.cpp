#include "stdafx.h"
#include "Adres.h"


Adres::Adres()
{
}


Adres::~Adres()
{
}

const string & Adres::getMiejscowosc()
{
	return miejscowosc;
}

void Adres::setMiejscowosc(const string &miejscowosc)
{
	this->miejscowosc = miejscowosc;
}

const string & Adres::getKodPocztowy()
{
	return kodPocztowy;
}

void Adres::setKodPocztowy(const string &kodPocztowy)
{
	this->kodPocztowy = kodPocztowy;
}

const int & Adres::getNumerLokalu()
{
	return numerLokalu;
}

void Adres::setNumerLokalu(const int &numerLokalu)
{
	this->numerLokalu = numerLokalu;
}

const Kraj & Adres::getKraj()
{
	return kraj;
}

void Adres::setKraj(const Kraj &kraj)
{
	this->kraj = kraj;
}

