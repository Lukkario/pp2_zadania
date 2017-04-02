#include "lib.h"
#include <fstream>

using namespace std;

float wylicz1(int x)
{
    return 2*sin(x);
}

float wylicz2(int x)
{
    float a = (x*x + 3*x)/((x+1)*(x+2));
    cout << a << endl;
    return a;
}

float wylicz3(int x)
{
    return sqrt(x*x +5);
}

void pisz(int *a, int *b, string path)
{
    ofstream file(path);
    if(!file.is_open())
    {
        cout << "Nie udalo sie utworzyc pliku" << endl;
        return;
    }
    file << "\tX\t" << " | " << "\tF(X)\t" <<endl;
    file << "---------|---------" <<endl;
    for(int i = *a; i < *b; i++)
    {
        if(i <= -1 || i >= 10)
        {
            file << "\t" << i << "\t | \t" << wylicz3(i) << endl;
            continue;
        }
        if(i > 0 && i < 10)
        {
            file<< "\t" << i << "\t | \t" << wylicz2(i) << endl;;
            continue;
        }
        if(i > -1 && i <= 0 )
            file << "\t" << i << "\t | \t" << wylicz1(i) << endl;
    }
    file.close();

}


int main()
{
    int a, b;
    int *pocz = &a, *kon = &b;
    wczytaj_int(pocz, "Podaj poczatek przedzialu: ");
    wczytaj_int(kon, "Podaj koniec przedzialu: ");
    if(a > b)
        swap(a,b);
    pisz(pocz, kon, "pliczek.txt");
    return 0;
}
