#include <iostream>
//#include <filesystem>
#include <fstream>

using namespace std;

int validate(string path)
{
    ifstream file(path);
    return file.good();
}

void copy(string src, string des)
{
    ifstream SOURCE(src);
    ofstream DESTINATION(des);
    char znak;

    SOURCE.seekg(-1, ios::end);
    int pos = SOURCE.tellg();
    for(int i = 0; i <= pos; i++ )
    {
        znak = SOURCE.get();
        DESTINATION << znak;
        SOURCE.seekg(-2, ios::cur);
    }
    SOURCE.close();
    DESTINATION.close();
}

int main()
{
    string src, des;
    cout << "Podaj sciezke do pliku zrodlowego: ";
    cin >> src;
    if(validate(src) == 0)
    {
        cout << "Podany plik nie istnieje" << endl;
        return -1;
    }
    cout << "Podaj sciezke pliku docelowego: ";
    cin >> des;
    copy(src, des);
    return 0;
}
