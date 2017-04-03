#include "pbs.h"
#define SIZE 20
using namespace std;

struct stos{
int tab[SIZE];
int wsk = 0;

void init()
{
    for(int i = 0; i < SIZE; i++)
        tab[i] = NULL;
}

void push(int x)
{
    if(wsk == SIZE-1)
    {
        if(tab[wsk] == NULL)
            tab[wsk] = x;
    }
    else if(wsk == 0)
    {
        if(tab[wsk] == NULL)
            tab[wsk] = x;
        else
        {
            wsk += 1;
            tab[wsk] = x;
        }

    }
    else{
        wsk++;
        tab[wsk] = x;
    }
}

void pop()
{
    if(wsk == 0)
    {
        tab[wsk] = NULL;
    }
    else
    {
        tab[wsk] = NULL;
        wsk--;
    }
}

bool isEmpty()
{
    if(wsk != 0)
        return false;
    if(wsk == 0)
    {
        if(tab[wsk] == NULL)
            return true;
        else
            return false;
    }
}

bool isFull()
{
    if(wsk != SIZE-1)
        return false;
    if(wsk == SIZE-1)
    {
        if(tab[wsk] == NULL)
            return false;
        else
            return true;
    }
}

void print()
{
    if(wsk == 0 && tab[wsk] == NULL)
        cout << "Brak elementow na stosie" << endl;
    else
    {
        for(int i = 0; i <= wsk; i++)
            cout << tab[i] << endl;
    }
}

void clear()
{
    if(wsk == 0 && tab[wsk] == NULL)
        cout << "Brak elementow na stosie" << endl;
    else
    {
        for(int i = 0; i <= wsk; i++)
            tab[i] = NULL;
        wsk = 0;
        cout << "Stos zostal wyczyszcony" << endl;
    }
}

};


int main()
{
    bool xd;
    stos st1;
    st1.init();
    st1.clear();
    st1.push(10);
    st1.print();
    st1.push(11);
    st1.print();
    st1.push(12);
    st1.print();
    st1.pop();
    st1.print();
    xd = st1.isEmpty();
    cout << xd << endl;
    st1.clear();
    return 0;
}
