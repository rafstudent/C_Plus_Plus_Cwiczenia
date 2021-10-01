#pragma once
#include <iostream>
#include <string>
class Pojazd
{
public:
	Pojazd();
	~Pojazd();

	void rok_produkcji(int rok_produkcji);
	void Marka(std::string Marka);
	void Model(std::string Model);
	void przebieg(int przebieg);
};

