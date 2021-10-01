#pragma once
#include "Osobowe.h"
#include "Dwusladowy.h"
class Van : protected Osobowe, Dwusladowy
{
public:
	Van();
	~Van();
	void typ_pojazdu();
};

