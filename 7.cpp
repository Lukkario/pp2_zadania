#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int czy_pierwsza(int *liczba)
{
    if( (*liczba) == 1 || (*liczba) == 2 || (*liczba) == 3 ) return 1;
    if((*liczba) <= 0) return 0;
    for(int i = 2; i <= sqrt((*liczba)); i++)
    {
        if((*liczba)%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int wielk;
    int liczba;
    int *ptr_liczba = &liczba;
    cout << "Podaj wielkosc tablicy: ";
    cin >> wielk;

    while(cin.fail() == 1)
    {
        //fflush(stdin);
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podaj wielkosc tablicy: ";
        cin >> wielk;
    }

    int *tab = new int[wielk];
    for(int i=0; i < wielk; i++)
    {
        cout << "Podaj liczbe nr " << i+1 << ": ";
        cin >> liczba;
        while( czy_pierwsza(ptr_liczba) == 0 )
        {
            cout << "Podaj liczbe nr " << i+1 << ": ";
            cin >> liczba;
        }
        *(tab+i) = liczba;
        //cout << *(tab+i) << endl;
    }

    delete [] tab;
    return 0;
}
