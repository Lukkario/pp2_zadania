#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cmath>
#include <ctype.h>
#include <limits>

int losuj_int(int poczatek, int koniec);
float losuj_float(float poczatek, float koniec);
void wczytaj_int(int *zmienna, std::string napis);
void wczytaj_int_przedzial(int *zmienna, int poczatek, int koniec);
void wczytaj_float(float *zmienna, std::string napis);
void wczytaj_float_przedzial(float *zmienna, float poczatek, float koniec);
void wypisz_tablice_int(int *zmienna, int wielkosc);
void wypisz_tablice_float(float *zmienna, int wielkosc);

int losuj_int(int poczatek, int koniec)
{
	if(poczatek > koniec)
		std::swap(poczatek, koniec);
	return rand()%koniec + poczatek;
}

float losuj_float(float poczatek, float koniec)
{
	if(poczatek > koniec)
		std::swap(poczatek, koniec);
	return rand() / (float)RAND_MAX *(koniec-poczatek) + poczatek;
}

void wczytaj_int(int *zmienna, std::string napis)
{
	for(;;)
	{
		std::cout << napis;
		if(std::cin >> *(zmienna))
			break;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}

void wczytaj_float(float *zmienna, std::string napis)
{
	for(;;)
	{
		std::cout << napis;
		if(std::cin >> *(zmienna))
			break;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}

void wczytaj_int_przedzial(int *zmienna, int poczatek, int koniec, std::string napis)
{
	for(;;)
	{
		std::cout << napis;
		if(std::cin >> *(zmienna) && *(zmienna) >= poczatek && *(zmienna) <= koniec )
			break;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}

void wczytaj_float_przedzial(float *zmienna, float poczatek, float koniec, std::string napis)
{
	for(;;)
	{
		std::cout << napis;
		if(std::cin >> *(zmienna) && *(zmienna) >= poczatek && *(zmienna) <= koniec )
			break;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}	
}

void wypisz_tablice_int(int *zmienna, int wielkosc)
{
	for(int i = 0; i < wielkosc; i++)
		std::cout << *(zmienna+i) << " ";
}

void wypisz_tablice_float(float *zmienna, int wielkosc)
{
	for(int i = 0; i < wielkosc; i++)
		std::cout << *(zmienna+i) << " ";
}
