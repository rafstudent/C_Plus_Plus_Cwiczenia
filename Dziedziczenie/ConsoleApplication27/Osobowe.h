#pragma once
#include "Silnikowy.h"
#include "Dwusladowy.h"
class Osobowe : protected Silnikowy, Dwusladowy
{
public:
	Osobowe();
	~Osobowe();
	void typ_pojazdu();
};

