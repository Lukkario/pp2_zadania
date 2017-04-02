#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void wypelnij(int tab[])
{
    for(int i = 0; i < 10; i++)
    {
        *(tab+i) = rand() % 75 + 25;
    }
}

void wypelnij_float(float tab[])
{
    int a = 1 * 10;
    int b = 10 * 10;
    for(int i = 0; i < 10; i++)
        *(tab+i) = ((rand()%(b-a)+a)/10.0);
    //cout << tab[0];
}

void wyswietl1(int tab[])
{
    for(int i = 0; i < 10; i+=2)
    {
        cout << *(tab+i) << endl;
    }
}

void wyswietl2(float tab[])
{
    for(int i = 0; i < 10; i+=3)
        cout << *(tab+i) << endl;
}

void wyswietl3(char tab[])
{
    for(int i = 0; i < 10; i+=3)
        cout << *(tab+i) << endl;
}

int main()
{
    srand(time(NULL));
    int tab[10];
    float tab2[10];
    char tab3[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    wypelnij(tab);
    wyswietl1(tab);
    wypelnij_float(tab2);
    wyswietl2(tab2);
    wyswietl3(tab3);
    return 0;
}
