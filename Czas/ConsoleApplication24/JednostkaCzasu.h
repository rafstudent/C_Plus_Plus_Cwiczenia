#pragma once

enum Jednostka						//Jednostki poszczeg�lnych warto�ci czasu
{
	ROK = 0,						//Rok
	MIESIAC = 1,					//Miesi�c
	DZIEN = 2,						//Dzie�
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
