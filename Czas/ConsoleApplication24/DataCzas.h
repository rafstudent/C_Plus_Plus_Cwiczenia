#pragma once
#include "Data.h"
#include "Czas.h"
#include "JednostkaCzasu.h"

class DataCzas
{
public:
	DataCzas();											//Do konstruktora bezargumentowego
	DataCzas(const Data& data, const Czas& czas);		//Do zwyklego konstruktora
	explicit DataCzas(const Data& data);				//Do konstruktora explicit
	DataCzas(const DataCzas &dataCzas);					//Do konstruktora kopiujacego
	~DataCzas();

	//przeciazenie operacji dodawania i porownania
	DataCzas operator+ (JednostkaCzasu Jednostka_czas);
	bool operator> (DataCzas& dataCzas);
	void wypisz();										//Wypisanie daty i czasu
	typedef void(*Wskazik_do_wypisz) ();				//Wskaünik

	const Data getData();
	const Czas getCzas();
	void setCzas(Czas czas);
	void setData(Data data);

private:
	Czas czas;
	Data data;
};

