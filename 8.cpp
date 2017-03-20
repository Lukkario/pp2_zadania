#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

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

void wyswietl_pa(int *tab, int wielkosc)
{
    char temp[11];
    for(int i = 0; i<wielkosc; i++)
    {
        sprintf(temp, "%ld", *(tab+i));
        int j = 0, ok = 1;
        while( temp[j] != 0 )
        {
            if( temp[j]%2 != 0)
            {
                ok = 0;
                break;
            }
            j++;
        }
        if(ok == 1)
            cout << *(tab+i) << " ";
    }
}

int main()
{
    srand(time(NULL));
    int wielkosc, a, b;

    cout << "Podaj wielkosc tablicy: ";
    cin >> wielkosc;
    cout << "Podaj poczatek przedzialu: ";
    cin >> a;
    cout << "Podaj koniec przedzialu: ";
    cin >> b;

    int *tab = new int[wielkosc];
    wypelnij(tab, a, b, wielkosc);
    wyswietl_cale(tab, wielkosc);
    wyswietl_pa(tab, wielkosc);

    return 0;
}
