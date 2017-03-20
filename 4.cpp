#include <iostream>

using namespace std;

int main()
{
    int a;
    int *ptr_a;

    a = 10;
    ptr_a = &a;

    cout << "Zawartosc zmiennej bezposrednio: " << a << endl;
    cout << "Zawartosc zmiennej ze wskaznika: " << (*ptr_a) << endl;
    cout << "Adres zmiennej: " << ptr_a << endl;
    *ptr_a = 20;
    cout << "Zawartosc zmiennej po zmianie: " << a;
    return 0;
}
