#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

using namespace std;

void male(char *ptr_c, short *wielk)
{
    for(int i = 0; i < (*wielk); i++)
    {
        //cout << *(ptr_c+i);
        *(ptr_c+i) = tolower(*(ptr_c+i));
    }
}

void wielkie(char *ptr_c, short *wielk)
{
    for(int i = 0; i < (*wielk); i++)
    {
        *(ptr_c+i) = toupper(*(ptr_c+i));
    }
}

void wypisz(char *ptr_c, short *wielk)
{
    for(short i = 0; i < (*wielk); i++)
    {
        cout << *(ptr_c+i);
    }
}

int main()
{
    char wyraz[21];
    char *ptr_wyr = wyraz;
    short wybor;
    short wielkosc;
    short *ptr_wielk = &wielkosc;
    cout << "Podaj wyraz: ";
    cin >> wyraz;
    fflush(stdin);
    cout << "1 - male, 2 - wielkie: ";
    cin >> wybor;
    while( wybor != 1 || wybor != 2 )
    {
        fflush(stdin);
        cin >> wybor;
    }
    wielkosc = strlen(wyraz);
    if(wybor == 1)
    {
        male(ptr_wyr, ptr_wielk);
        wypisz(ptr_wyr, ptr_wielk);
    }
    if(wybor == 2)
    {
        wielkie(ptr_wyr, ptr_wielk);
        wypisz(ptr_wyr, ptr_wielk);
    }

    return 0;

}
