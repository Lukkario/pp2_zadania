#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

void wczytaj(int *l_ptr)
{
    int c;
    c = scanf("%d", l_ptr);
    fflush(stdin);
    while(c != 1)
    {
        c = scanf("%d", l_ptr);
        fflush(stdin);
    }
}

void wyswietl(int *wielkosc, int tab[])
{
    for(int i = 0; i < (*wielkosc); i++)
        cout << tab[i] << " ";
    cout << endl;
}

void wypelnij(int *wielkosc, int *pocz, int *kon, int tab[])
{
    for(int i = 0; i < (*wielkosc); i++)
    {
        tab[i] = rand() % (*kon) + (*pocz);
    }
}

void b_sort(int *wielkosc, int tab[])
{
    for(int i = 0; i < (*wielkosc); i++)
        for(int j = 0; j < (*wielkosc)-1; j++)
            if(tab[j]>tab[j+1])
                swap(tab[j], tab[j+1]);
}

int main()
{
    srand(time(NULL));

    int wielkosc;
    int poczatek;
    int koniec;
    int *w_ptr = &wielkosc;
    int *p_ptr = &poczatek;
    int *k_ptr = &koniec;

    cout << "Podaj wielkosc tablicy: ";
    wczytaj(w_ptr);

    int tab[wielkosc];

    cout <<"Podaj poczatek przedzialu: ";
    wczytaj(p_ptr);

    cout << "Podaj koniec przedzialu: ";
    wczytaj(k_ptr);

    //wypelnij(w_ptr, p_ptr, k_ptr, tab);
    wyswietl(w_ptr, tab);
    b_sort(w_ptr, tab);
    cout << "Liczby po posortowaniu: ";
    wyswietl(w_ptr, tab);

    return 0;
}
