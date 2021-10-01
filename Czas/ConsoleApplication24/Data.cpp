#include "stdafx.h"
#include "Data.h"


map<int, int> Data::initDniWMiesiacu()
{
	map<int, int> mapa;
	mapa[1] = 31;
	mapa[2] = 28;
	mapa[3] = 31;
	mapa[4] = 30;
	mapa[5] = 31;
	mapa[6] = 30;
	mapa[7] = 31;
	mapa[8] = 31;
	mapa[9] = 30;
	mapa[10] = 31;
	mapa[11] = 30;
	mapa[12] = 31;

	return mapa;
}

map<int, int> Data::dniWMiesiacu = Data::initDniWMiesiacu();

Data::Data()
{
}


Data::~Data()
{
}

const int Data::getDzien()
{
	return dzien;
}

const int Data::getMiesiac()
{
	return miesiac;
}

const int Data::getRok()
{
	return rok;
}

void Data::setMiesiac(int miesiac)
{
	this->miesiac = miesiac;
}

void Data::setDzien(int dzien)
{
	this->dzien = dzien;
}