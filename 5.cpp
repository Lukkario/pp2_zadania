#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void wypelnij(int *tab, int wielkosc)
{
	for(int i = 0; i < wielkosc; i++)
		*(tab+i) = rand() % 100 + 1;
}

void wypisz(int *tab, int wielkosc)
{
	for(int i = 0; i < wielkosc; i++)
		cout << *(tab+i) << " ";
	cout << endl;
}

int Znajdz(int *tab, int wielkosc, int wartosc)
{
	int szukana = -1;
	for(int i = 0; i < wielkosc; i++)
	{
		if( *(tab+i) == wartosc)
			szukana = i;
	}
	return szukana;
}

int main()
{
	srand(time(NULL));
	int *tab = new int[10];
	int index;
	int wartosc;

	wypelnij(tab, 10);
	wypisz(tab, 10);
	cout << "Podaj wartosc: ";
	cin >> wartosc;

	index = Znajdz(tab, 10, wartosc);
	if(index == -1)
	{
		cout << "Nie udalo znalesc indexu" << endl;
	}
	else
	{
		cout << "Znaleziono index: "<< index << endl;
	}

	return 0;
}
