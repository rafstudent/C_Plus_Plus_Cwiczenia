#pragma once
#include <string>
//Klasa Kontrahent
class Kontrahent
{
public:
	Kontrahent();
	~Kontrahent();
	const int& getNIP();
	void setNIP(const int&);
	void setnazwa_firmy(const std::string&);
	const std::string& getnazwa_firmy();
	void setMiasto(const std::string&);
	const std::string& getMiasto();
	void setnazwaUlica(const std::string&);
	const std::string& getnazwaUlica();
private:
		//Podawane przy dodawaniu nowego kontrahenta
		std::string nazwa_firmy;
		int NIP;
		std::string Miasto;
		std::string Ulica;
	Kontrahent* kontrahenci;
};

