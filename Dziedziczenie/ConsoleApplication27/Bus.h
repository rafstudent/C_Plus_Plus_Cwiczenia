#pragma once
#include "Osobowe.h"
#include "Dwusladowy.h"
class Bus : protected Osobowe, Dwusladowy
{
public:
	Bus();
	~Bus();
	void typ_pojazdu();
};

