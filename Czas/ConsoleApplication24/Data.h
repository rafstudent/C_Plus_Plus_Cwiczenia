#pragma once
#include <map>
using namespace std;

class Data
{
public:
	Data();
	~Data();
	static map<int, int> dniWMiesiacu;				//Mapa
	const int getDzien();					
	const int getMiesiac();
	const int getRok();
	//Ustalenie dni i miesiêcy
	void setDzien(int dzien);
	void setMiesiac(int miesiac);

private:
	int dzien = 1;
	int miesiac = 1;
	int rok = 2017;
	static map<int, int> initDniWMiesiacu();		//Zapis wartosci do mapy  
};

