#include <iostream>
#include <ctype.h>
#include <string>
//
using namespace std;

int wprowadz_napisy(string napis[])
{
	int ile_napisow = 0;
	cout << "Wprowadz napis (wcisnij enter aby zakonczyc wczesniej)" << endl;
	while(ile_napisow < 10)
	{
		cout << "wpradz napis: ";
		getline(cin, napis[ile_napisow]);
		if (napis[ile_napisow] == "")
			break;
		ile_napisow++;
	}
	return ile_napisow;
}

void wypisz(int ile, string napis[])
{
	for(int i = 0; i < ile; i++)
		cout << napis[i] << endl;
}

void licz_male_litery(int ile, int ile_malych[], string napis[])
{
	int licznik;
	for(int i = 0; i < ile; i++)
	{
		licznik = 0;
		for(int j = 0; j < napis[i].length(); j++)
		{
			if(islower(napis[i][j]))
				licznik++;
		}
		ile_malych[i] = licznik;
	}
}

void sortuj(int ile, int ile_malych[], string napis[])
{
	string spomoc;
	int ipomoc;
	for(int i = 0; i < ile; i++)
	{
		for(int j = 0; j < ile-1; j++)
		{
			if(ile_malych[j] < ile_malych[j+1])
			{
				ipomoc = ile_malych[j];
				spomoc = napis[j];
				ile_malych[j] = ile_malych[j+1];
				napis[j] = napis[j+1];
				ile_malych[j+1] = ipomoc;
				napis[j+1] = spomoc;
			}
		}
	}
}

int main()
{
	string napis[10];
	int ile;
	ile = wprowadz_napisy(napis);
	int ile_malych[ile];
	licz_male_litery(ile, ile_malych, napis);
	sortuj(ile, ile_malych, napis);
	wypisz(ile, napis);
	return 0;
}
