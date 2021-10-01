#pragma once
class Czas
{
public:
	Czas();
	~Czas();
	const int getSekunda();
	const int getMinuta();
	const int getGodzina();
	void setGodzina(int godzina);
	void setSekunda(int sekunda);
	void setMinuta(int minuta);

private:
	int sekunda = 0;
	int minuta = 0;
	int godzina = 0;
};
