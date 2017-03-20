#include <iostream>

using namespace std;

void wypelnij(int *tab, int a, int b, int wielkosc)
{
    for(int i = 0; i<wielkosc; i++)
    {
        *(tab+i) = rand()%b + a;
    }
}

void wyswietl_cale(int *tab, int wielkosc)
{
    for(int i = 0; i<wielkosc; i++)
    {
        cout << *(tab+i) << " ";
    }
    cout << endl;
}

int znajdz_min(int *tab, int wielkosc)
{
    int min;
    min = *(tab);
    for(int i = 0; i<wielkosc; i++)
    {
        if( *(tab+i) < min)
            min = *(tab+i);
    }
    return min;
}

int max(int *tab, int wielkosc)
{
    int max = -1;


    return max;
}

int main()
{
    srand(time(NULL));
    int wielkosc, a, b, min, max;

    cout << "Podaj wielkosc tablicy: ";
    cin >> wielkosc;
    cout << "Podaj poczatek przedzialu: ";
    cin >> a;
    cout << "Podaj koniec przedzialu: ";
    cin >> b;

    int *tab = new int[wielkosc];
    wypelnij(tab, a, b, wielkosc);
    wyswietl_cale(tab, wielkosc);
    min = znajdz_min(tab, wielkosc);
    cout << min;
    return 0;
}
