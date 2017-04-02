#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string filename;
    string tresc;
    ofstream file;
    cout << "Podaj nazwe pliku: ";
    cin >> filename;
    file.open(filename);
    if(file.is_open())
    {
        cin >> tresc;
        file << tresc;
        file.close();
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku" << endl;
        return 1;
    }
    //file.open(filename, )
    return 0;
}
