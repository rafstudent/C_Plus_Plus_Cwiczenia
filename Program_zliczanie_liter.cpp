// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

//Rafał Wiktor Informatyka Rok 2 
//Semestr 3
#include "stdafx.h"
#include <string>
#include <vector>
#include <sstream>
#include <iostream>	
using namespace std;

// Zliczanie liczby słów 
int Words_number(string text, vector<string> WORD)
{
	int words_in_text = 0;
	istringstream iss(text);
	while (iss >> text)
	{
		words_in_text++;
	}
	return words_in_text;
}

int main()
{
	int number_of_lines = 0;
	int words_in_text = 0;
	string text;
	vector<string> WORD;
	int a_letter_all = 0, space_button_all = 0;   //Używane podczas zliczania wystąpień znaków spacji i litery a 
	int l;
	char p = 'a';								 //Używane podczas zliczania wystąpień litery 'a'
	char t = ' ';							     //Używane podczas zliczania liczby znaków spacji
	{
		do
		{
			cout << "Podaj nastepna linie tekstu: ";			//Wprowadzanie kolejnej linii tekstu
			getline(cin, text);									//Zapis wpisanego tekstu do 'text'

																//Zliczanie ilości słów
			words_in_text += Words_number(text, WORD);

			//Zliczanie ilości wystąpień litery 'a'
			{
				l = text.size();
				for (int i = 0; i < l; i++) if (text[i] == p)
				{
					a_letter_all++;
				}
				for (int u = 0; u < l; u++) if (text[u] == 'A')
				{
					a_letter_all++;
				}
			}

			//Zliczanie wystąpień znaków spacji
			{
				for (int o = 0; o < l; o++)
					if (text[o] == t)
					{
						space_button_all++;
					}
			}

			//Zliczanie ilości linii
			number_of_lines++;

		}
		//Koniec działania gdy wpiszemy słowo "KONIEC"
		while (text.find(" KONIEC ") && text.find(" KONIEC") && text.find("KONIEC ") && text.find("KONIEC"));
		cout << endl;
		cout << "Liczba linii: " << number_of_lines << endl;
		cout << "Liczba slow w tekscie: " << words_in_text << endl;
		cout << "Liczba liter 'a' w tekscie: " << a_letter_all << endl;
		cout << "Liczba znakow spacji w tekscie: " << space_button_all << endl;
		cout << endl;
		cout << "Rafal Wiktor Informatyka Rok 2" << endl;
	
	}
	system("pause");
	return 0;
}