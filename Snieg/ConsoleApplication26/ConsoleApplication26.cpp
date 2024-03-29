// Zadanie nr.6 Śnieg
//Rafał Wiktor Informatyka Rok 2 Semestr 3
#include "stdafx.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include <tchar.h>
#include <stdio.h>
#include <thread>
#include <windows.h>
using namespace std::chrono_literals;
using std::chrono::system_clock;

void generowanie_sniegu(char**);				//Odpowiedzialne za generowanie sniegu
void opadanie_platkow_sniegu(char**, int);		//Odpowiedzialne za opadanie płatków
void wypelnianie_tablicy(char**);				//Odpowiedzialne za wypełnianie tablicy
void wyswietlanie(char**, int);					//Funkcja - wyświetlania
void czyszczenie_sniegu();						//Funkcja - czyszczenie

int main()
{
	
	srand((unsigned int)time(NULL));

	int poziomy_spadania;															//Potrzebne do wyboru poziomu do którego ma spadać śnieg
	std::cout << "Wybierz do ktorego poziomu ma spadac snieg: " << std::endl;				
	std::cin >> poziomy_spadania;													//Wpisanie poziomu do którego ma spadać śnieg
	while (poziomy_spadania > 40)													//Pętla - nie można podać wartości większej niż 40
	{
		std::cout << "Wpisana wartosc jest wieksza niz 40!" << std::endl;
		std::cout << "Wybierz do ktorego poziomu ma spadac snieg: ";				//Jeżeli tak się stanie należy podać nową wartość
		std::cin >> poziomy_spadania;
	}
	czyszczenie_sniegu();															//Czyszczenie linii

	char ** tab = new char *[80];													//Utworzenie tablicy
	for (int i = 0; i < 80; i++)
	{
		tab[i] = new char[40];
	}

	wypelnianie_tablicy(tab);

	//Pętla kolejne linie śniegu - nieskończona
	while (1)	
	{
		generowanie_sniegu(tab);
		czyszczenie_sniegu();
		wyswietlanie(tab, poziomy_spadania);
		std::this_thread::sleep_for(80ms);
		opadanie_platkow_sniegu(tab, poziomy_spadania);
	}

	for (int i = 0; i < 80; i++)
	{
		delete[] & tab[i];
	}
	delete[] & tab;
	
	std::system("pause");
	return 0;
}

//Odpowiedzialne za generowanie śniegu
void generowanie_sniegu(char** tab)
{
	int punkt[10];
	for (int i = 0; i < 8; i++)
	{
	punkt[i] = (std::rand() % 79) + 0;
	}
	for (int i = 0; i < 80; i++)
	{
	for (int j = 0; j < 8; j++)
	{
				if (i == punkt[j])
				{
					tab[0][i] = '*';
				}
			}
		}
}

//Opadanie płatków
void opadanie_platkow_sniegu(char** tab, int poziomy_spadania)
{
	for (int i = poziomy_spadania; i > 0; i--)
	{
		for (int j = 0; j < 80; j++)
		{
			tab[i][j] = tab[i - 1][j];
			tab[i - 1][j] = ' ';
		}
	}
}

void wypelnianie_tablicy(char** tab)
{
	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 80; j++)
		{
			tab[i][j] = ' ';
		}
	}
}

void wyswietlanie(char** tab, int poziomy_spadania)
{
	for (int i = 0; i < poziomy_spadania; i++)
	{
		for (int j = 0; j < 80; j++)
		{
			std::cout << tab[i][j];
		}
		std::cout << std::endl;
	}
}

void czyszczenie_sniegu() {
	COORD topLeft = { 0, 0 };
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen;
	DWORD written;

	GetConsoleScreenBufferInfo(console, &screen);
	FillConsoleOutputCharacterA(
		console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	FillConsoleOutputAttribute(
		console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
		screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	SetConsoleCursorPosition(console, topLeft);
}