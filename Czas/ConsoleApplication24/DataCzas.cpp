#include "stdafx.h"
#include "DataCzas.h"
#include <iostream>

DataCzas::DataCzas()
{
	Data data;
	Czas czas;
	this->data = data;
	this->czas = czas;
}

DataCzas::DataCzas(const Data & data, const Czas & czas)
{
	this->data = data;
	this->czas = czas;
}

DataCzas::DataCzas(const Data & data)
{
	this->data = data;
}

DataCzas::DataCzas(const DataCzas & dataCzas)
{
	this->data = dataCzas.data;
	this->czas = dataCzas.czas;
}

DataCzas::~DataCzas()
{
}

//Porownywanie dat i czasow za pomoca operatora >
bool DataCzas::operator>(DataCzas& dataCzas)
{
	if (data.getRok() > data.getRok())
	{
		return true;
	}
	else if (data.getRok() == data.getRok())
	{
		if (data.getMiesiac() > data.getMiesiac())
		{
			return true;
		}
		else if (data.getMiesiac() == data.getMiesiac())
		{
			if (data.getDzien() > data.getDzien())
			{
				return true;
			}
			else if (data.getDzien() == data.getDzien())
			{
				if (czas.getGodzina() > czas.getGodzina())
				{
					return true;
				}
				else if (data.getDzien() == data.getDzien())
				{
					if (czas.getMinuta() > czas.getMinuta())
					{
						return true;
					}
					else if (czas.getMinuta() == czas.getMinuta())
					{
						if (czas.getSekunda() > czas.getSekunda())
						{
							return true;
						}
						else if (czas.getSekunda() == czas.getSekunda())
						{
							return false;
						}
						else
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

DataCzas DataCzas::operator+(JednostkaCzasu czas1)
{
	Data data;

	switch (czas1.getJednostka())
	{
	case Jednostka::ROK:
		cout << "Podano rok poza dostepnym zakresem" << endl;
		break;
	case Jednostka::MIESIAC:
	{
		int miesiac = data.getMiesiac() + czas1.getIlosc();
		if (miesiac > 12)
		{
			cout << "Podano miesiac poza dostepnym zakresem" << endl;
			break;
		}
		else
		{
			data.setMiesiac(miesiac);
		}
		break;
	}
	case Jednostka::DZIEN:
	{
		int miesiac = data.getMiesiac();
		int iloscDni = Data::dniWMiesiacu.at(miesiac);
		int dni = data.getDzien() + czas1.getIlosc();

		int i = 0;
		while (dni > iloscDni)
		{
			miesiac++;
			if (miesiac > 12)
			{
				cout << "Przekroczono zakres miesiecy!" << endl;
				break;
			}
			iloscDni = Data::dniWMiesiacu.at(miesiac);
			dni -= iloscDni;
			i++;
		}
		if (miesiac > 12)
		{
			break;
		}
		data.setMiesiac(miesiac);
		data.setDzien(dni);

		break;
	}
	}
	return DataCzas(data, czas);
}

DataCzas dodaj(const int i)
{
		Data data;
		Czas czas;
		
		cout << "Dane daty " << i << endl << endl;
		cout << "Rok = 2017 " << endl;
		cout << "Podaj miesiac = ";
		int miesiac;
		cin >> miesiac;
		cout << "Podaj dzien = ";
		int dzien;
		cin >> dzien;
		cout << endl;
		cout << "Dane czasu " << i << endl;
		cout << "Podaj godzine = ";
		int godzina;
		cin >> godzina;
		cout << "Podaj minute = ";
		int minuta;
		cin >> minuta;
		cout << "Podaj sekunde = ";
		int sekunda;
		cin >> sekunda;
		cout << endl << endl;

		data.setMiesiac(miesiac);
		data.setDzien(dzien);
		czas.setGodzina(godzina);
		czas.setMinuta(minuta);
		czas.setSekunda(sekunda);

		return DataCzas(data, czas);
	}

void DataCzas::wypisz()
{
	cout << "Rok = " << data.getRok() << endl;
	cout << "Miesiac = " << data.getMiesiac() << endl;
	cout << "Dzien = " << data.getDzien() << endl;
	cout << "Godzina = " << czas.getGodzina() << endl;
	cout << "Minuta = " << czas.getMinuta() << endl;
	cout << "Sekunda = " << czas.getSekunda() << endl << endl;
}

const Data DataCzas::getData()
{
	return data;
}

void DataCzas::setData(Data data)
{
	this->data = data;
}

const Czas DataCzas::getCzas()
{
	return czas;
}

void DataCzas::setCzas(Czas czas)
{
	this->czas = czas;
}
