//Zadanie wskaźniki
//Rafał Wiktor Informatyka Rok 2 Semestr 3
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int* Sorting(int* array);	

int main()
{
	string twoja_decyzja;							//Potrzebne do określenia czy wyświetlić tablicę
	int** int_pointers = new int *[10];				//Tablica wskaźników
	int** temp_int_pointers = &(*int_pointers);

	for (int i = 0; i < 12; i++)
	{
		int_pointers[i] = new int[12];
	}

	//Wypisanie adresu zmiennej temp_int_pointers
	cout << "Adres zmiennej temp_int_pointers: " << &(*temp_int_pointers) << endl;
	cout << endl;
	cout << "Aby zobaczyc tablice wpisz 'tak'" << endl;						   //Aby w programie zobaczyć odświeżoną tablicę należy wpisać "tak" małymi literami

	do {
		cout << "Czy chcesz zobaczyc odswiezona tablice? (tak/nie)" << endl;   //Pytanie aby uzyskać decyzję używaną przy późniejszym "if" 
		cin >> twoja_decyzja;
			system("cls");													   //Oczyszczenie ekranu konsoli po otrzymaniu decyzji

			if (twoja_decyzja == "tak")										   //Jeżeli wpisane zostało "tak" wykonaj dalszą część
			{
				for (int j = 0; j < 12; j++)								   //Generowanie tablicy (wielkość)
			{
					for (int i = 0; i < 10; i++)
					{
						temp_int_pointers[j][i] = (rand() % 99) + 1;		   //Ustalenie losowych liczb z zakresu 1 do 99
					}
					temp_int_pointers[j][10] = -1;							   //Wstawienie -1 na końcu
					temp_int_pointers[j] = Sorting(temp_int_pointers[j]);      //Użycie funkcji sortowania
			}

			for (int j = 0; j < 12; j++)
			{
				for (int i = (rand() % 5) + 0; i < 10; i++)					   //Wyświetlenie 5 do 10 elementów
				{
					if (temp_int_pointers[j][i] != -1)						   //Nie branie pod uwagę -1
					{
						cout << temp_int_pointers[j][i] << " ";			       //Wyświetlenie tablicy
					}
				}			
				cout << endl;
			}		
		}
			} 
		while (twoja_decyzja == ("tak"));									   //Jeżeli wpiszemy "tak" wygenerowana zostanie nowa tablica, również posortowana
		cout << endl;														   //Wyświetlane jeżeli nie chcemy zobaczyć odświeżonej tablicy
		cout << "Dziekuje za uzycie programu" << endl;						
		cout << "RAFAL WIKTOR INFORMATYKA" << endl;
		system("PAUSE");													   //Zatrzymanie programu															  
	
	return 0;
}

int* Sorting(int* array)   //Sortuje elementy
{
	int i = 0;				//Deklarowanie i 

	while (array[i] != -1)  //Elementy do momentu wystąpienia -1
	{
		i++;
	}
	i++;

	vector<int>vector_1(array, array + i);	//Stworzenie wektora na potrzeby sortowania
	sort(vector_1.begin(), vector_1.end()); //Sortowanie

	for (int j = 0; j < i; j++)
	{
		array[j] = vector_1.back();				
		vector_1.pop_back();
	}

	vector_1.~vector();
	return array;				//Zwrócenie array
}


