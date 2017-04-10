#include "lib.h"
#include <cstdlib>
#define SIZE 20
using namespace std;

struct stos{
int *tab[SIZE];
int wsk = 0;

void init()
{
    for(int i = 0; i < SIZE; i++)
        tab[i] = NULL;
}

void push(int *x)
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
        //cout << "Brak elementow na stosie" << endl;
        return;
    else
    {
        for(int i = 0; i <= wsk; i++)
            cout << *tab[i] << endl;
    }
}

void clear()
{
    if(wsk == 0 && tab[wsk] == NULL)
        //cout << "Brak elementow na stosie" << endl;
        return;
    else
    {
        for(int i = 0; i <= wsk; i++)
            tab[i] = NULL;
        wsk = 0;
        //cout << "Stos zostal wyczyszcony" << endl;
    }
}

};


int main()
{
    bool xd;
    int a = 10, b = 11, c = 12;
    int *pa = &a, *pb = &b, *pc =&c;
    stos st1;
    st1.init();
    st1.clear();
    xd = st1.isEmpty();
    cout << xd << endl;
    st1.push(pa);
    st1.print();
    cout << endl;
    st1.push(pb);
    st1.print();
    cout << endl;
    st1.push(pc);
    st1.print();
    cout << endl;
    st1.pop();
    st1.print();
    cout << endl;
    xd = st1.isEmpty();
    cout << xd << endl;
    st1.clear();
    //getchar();
    return 0;
}
