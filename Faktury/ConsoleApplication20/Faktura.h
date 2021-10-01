#pragma once
#include <string>
//G³owna klasa Faktura
class Faktura
{
private:
	//Podawane przy dodawaniu nowej faktury
	int id_faktury;
	int cena_netto;
	std::string nazwa_uslugi;
	int ilosc;
	std::string kategoria_jednostek_sprzedazy;
public:
	Faktura();
	~Faktura();
	
	//Klasa zagnie¿d¿ona 
	class Usluga
	{
	public:
		Usluga();
		~Usluga();
		void setnazwa_uslugi(const std::string&);
		const std::string& getnazwa_uslugi();
		const int& getcena();
		void setcena(const int&);
		const double& getvat();
		void setvat(const double&);
	private:
		//Przy dodawaniu nowej us³ugi
		std::string nazwa_uslugi;
		int cena;
		double vat;
	};
	
	//ID faktury
	int get_id_faktury() 
	{
		return id_faktury;
	}

	struct StatusFaktury							//Ustalenie statusu faktury
	{
		bool zaplacona = false;
		bool niezaplacona = false;
	};

	bool status;
	const int& getcena();
	void setcena(const int&);
	const int& getIdFaktury();
	void setIdFaktury(const int&);
	void setnazwa_uslugi(const std::string&);
	const std::string& getnazwa_uslugi();
	const int& getilosc();
	void setilosc(const int&);
	void setkategoria_jednostek_sprzedazy(const std::string&);
	const std::string& getkategoria_jednostek_sprzedazy();
};

