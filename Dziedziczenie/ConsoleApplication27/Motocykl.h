#pragma once
#include "Silnikowy.h"
#include "Jednosladowy.h"
class Motocykl : protected Jednosladowy, Silnikowy
{
public:
	Motocykl();
	~Motocykl();
	void typ_pojazdu();
};

