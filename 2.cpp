#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void wypelnij(int tab[], int ile)
{
    for(int i = 0; i < ile; i++)
        //tab[i] = i+1;
        tab[i] = rand() % 100 + 1;
}

void wypisz(int tab[], int M, int N)
{
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
            cout << tab[i*N+j] << " ";
        cout << endl;
    }
}

void pozycja(int *x, int *y)
{
    int c;
    c = scanf("%d %d", x, y);
    while ( c != 2 )
    {
        c = scanf("%d %d", x, y);

    }
}

void lewo(int tab[], int x, int y, int N, int M, int *i_ptr)
{
    int x1 = x+1;
    int y1 = y+1;

    for(x,y; y >= 0 || x >= 0; x--, y--)
        (*i_ptr) *= tab[y*N+x];
        //cout << tab[y*N+x] << "  ";
    //cout << endl;

    for(x1, y1; y1 < M || x1 < N; x1++, y1++)
        (*i_ptr) *= tab[y1*N+x1];
        //cout << tab[y1*N+x1] << "  ";
    //cout << endl;
    //cout << (*i_ptr);

}

void prawo(int tab[], int x, int y, int N, int M, int *i_ptr)
{
    int x1 = x-1;
    int y1 = y+1;

    for(x = x+1, y = y-1; y > 0 || x < M; y--, x++)
        (*i_ptr) *= tab[y*N+x];

    for(x1, y1; y1 < M || x1 > 0; x1--, y1++)
        (*i_ptr) *= tab[y1*N+x1];


}

int main()
{
    srand(time(NULL));

    int m = 4;
    int n = 4;
    int A[m*n];
    int x, y;
    int iloczyn = 1;
    int *x_ptr = &x;
    int *y_ptr = &y;
    int *i_ptr = &iloczyn;


    wypelnij(A, m*n);
    wypisz(A, m, n);
    pozycja(x_ptr, y_ptr);
    lewo(A, x, y, n, m, i_ptr);
    prawo(A, x, y, n, m, i_ptr);
    cout << "Iloczyn wynosi: " << iloczyn;
    return 0;
}
