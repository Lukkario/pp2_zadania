#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int wylicz_wielkosc_pliku(string path)
{
    ifstream file(path, ios::binary);
    if(file.is_open())
    {
        streampos poczatek, koniec;
        poczatek = file.tellg();
        file.seekg(0, ios::end);
        koniec = file.tellg();
        file.close();
        return (koniec-poczatek);
    }
    else
    {
        return -1;
    }
}

int main()
{
    string path;
    int ile;
    cout << "Podaj sciezke do pliku: ";
    cin >> path;
    ile = wylicz_wielkosc_pliku(path);
    if(ile == -1)
    {
        cout << "Nie udalo sie otworzyc pliku" << endl;
        return -1;
    }
    cout << "Wielkosc pliku wynosi: " << ile << "B" << endl;
    return 0;
}
