#pragma once

enum Jednostka						//Jednostki poszczególnych wartoœci czasu
{
	ROK = 0,						//Rok
	MIESIAC = 1,					//Miesi¹c
	DZIEN = 2,						//Dzieñ
	GODZINA = 3,					//Godzina
	MINUTA = 4,						//Minuta
	SEKUNDA = 5						//Sekunda
};

class JednostkaCzasu
{
public:
	JednostkaCzasu();
	~JednostkaCzasu();
	JednostkaCzasu(Jednostka jednostka, int ilosc);
	const Jednostka getJednostka();
	const int getIlosc();
	void setIlosc(int);
	void setJednostka(Jednostka);

private:
	int ilosc;
	Jednostka jednostka;
};
