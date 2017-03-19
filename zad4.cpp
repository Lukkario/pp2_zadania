#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

void wypelnij(int *tab, int a, int b, int wielkosc)
{
	for(int i = 0; i < wielkosc; i++)
		*(tab+i) = rand() % b + a;
}

void wypisz(int *tab, int wielkosc)
{
	for(int i = 0; i < wielkosc; i++)
		cout << *(tab+i) << " ";
}

int main()
{
	srand(time(NULL));
	int wielkosc;
	int srodek, koniec;
	int a , b;
	cout << "Podaj wielkosc tablicy: ";
	cin >> wielkosc;
	while(cin.fail() == 1)
	{
		cin.clear();
		cin.ignore(1024, '\n');
		cout << "Podaj wielkosc tablicy: ";
		cin >> wielkosc;
	}
	if(wielkosc % 2 == 0)
	{
		cout << "Nie mozna wyznaczyc srodka";
		return 1;
	}
	
	cout << "Podaj poczatek przedzialu: ";
	cin >> a;
	cout << "Podaj koniec przedzialu: ";
	cin >> b;

	int * tab = new int[wielkosc];

	wypelnij(tab, a, b, wielkosc);
	//cout << *(tab+0) << " " << *(tab+1) << " " << *(tab+2) << " " << *(tab+wielkosc-1) << endl;
	wypisz(tab, wielkosc);
	srodek = wielkosc/2;
	koniec = wielkosc-1;
	int pomoc;

	for(int i = 0; i < srodek; i++, koniec--)
	{
		//pomoc = *(tab+i);
		//*(tab+i) = *(tab+wielkosc-i);
		//*(tab+wielkosc-i) = pomoc;
		swap(*(tab+i), *(tab+koniec));
	}
	cout << endl;
	wypisz(tab, wielkosc);

	delete [] tab;
	return 0;
}
