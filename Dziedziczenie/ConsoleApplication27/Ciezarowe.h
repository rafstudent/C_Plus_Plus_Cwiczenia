#pragma once
#include "Dwusladowy.h"
#include "Silnikowy.h"
class Ciezarowe : protected Dwusladowy, Silnikowy
{
public:
	Ciezarowe();
	~Ciezarowe();
	void typ_pojazdu();
};

