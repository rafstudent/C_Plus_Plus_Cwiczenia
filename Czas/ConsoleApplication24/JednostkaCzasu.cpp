#include "stdafx.h"
#include "JednostkaCzasu.h"

JednostkaCzasu::JednostkaCzasu(Jednostka jednostka, int ilosc)
{
	this->jednostka = jednostka;
	this->ilosc = ilosc;
}

JednostkaCzasu::JednostkaCzasu()
{
}

JednostkaCzasu::~JednostkaCzasu()
{
}

const Jednostka JednostkaCzasu::getJednostka()
{
	return jednostka;
}

const int JednostkaCzasu::getIlosc()
{
	return ilosc;
}

void JednostkaCzasu::setJednostka(Jednostka jednostka)
{
	this->jednostka = jednostka;
}

void JednostkaCzasu::setIlosc(int ilosc)
{
	this->ilosc = ilosc;
}
