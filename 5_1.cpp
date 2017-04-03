#include "pbs.h"

using namespace std;

struct student{
 string imie;
 string nazwisko;
 int nr_indexu;
 string kierunek_stud;
 string wydzial;
 float sr_ocen;
 int rok_stud;

 void setStudentData()
 {
     cout << "Podaj imie studenta: ";
     cin >> imie;
     cout << "Podaj nazwisko studenta: ";
     cin >> nazwisko;
     wczytaj_int(&nr_indexu, "Podaj nr indeksu: ");
     while(nr_indexu < 0)
        wczytaj_int(&nr_indexu, "Podaj nr indeksu: ");
     cout << "Podaj kierunek studiow: ";
     cin >> kierunek_stud;
     cout << "Podaj nazwe wydzialu: ";
     cin >> wydzial;
     wczytaj_float(&sr_ocen, "Podaj sredna ocen: ");
     while(sr_ocen < 0)
        wczytaj_float(&sr_ocen, "Podaj sredna ocen: ");
    wczytaj_int(&rok_stud, "Podaj rok studiow: ");
     while(rok_stud < 0)
        wczytaj_int(&nr_indexu, "Podaj rok studiow: ");
 }

 void setStudent_imie(){
     cout << "Podaj imie studenta: ";
     cin >> imie;
 }

 void setStudent_nazwisko(){
     cout << "Podaj nazwisko studenta: ";
     cin >> nazwisko;
 }

 void setStudent_nr_indexu()
 {
     wczytaj_int(&nr_indexu, "Podaj nr indeksu: ");
     while(nr_indexu < 0)
     wczytaj_int(&nr_indexu, "Podaj nr indeksu: ");
 }

 void setStudent_kierunek()
 {
     cout << "Podaj kierunek studiow: ";
     cin >> kierunek_stud;
 }

 void setStudent_wydzial()
 {
     cout << "Podaj nazwe wydzialu: ";
     cin >> wydzial;
 }

 void setStudent_sr_ocen()
 {
        wczytaj_float(&sr_ocen, "Podaj sredna ocen: ");
     while(sr_ocen < 0)
        wczytaj_float(&sr_ocen, "Podaj sredna ocen: ");
 }

 void setStudent_rok_studiow()
 {
     wczytaj_int(&rok_stud, "Podaj rok studiow: ");
     while(rok_stud < 0)
        wczytaj_int(&nr_indexu, "Podaj rok studiow: ");
 }

 void printStudentData()
 {
     cout << "Imie: " << imie << endl;
     cout << "Nazwisko: " << nazwisko << endl;
     cout << "Numer indeksu: " << nr_indexu << endl;
     cout << "Kierunek studiow: " << kierunek_stud << endl;
     cout << "Wydzial: " << wydzial << endl;
     cout << "Srednia ocen: " << sr_ocen << endl;
     cout << "Rok studiow: " << rok_stud << endl;
 }

 void printStudent_imie(){
    cout << "Imie: " << imie << endl;
 }

 void printStudent_nazwisko(){
     cout << "Nazwisko: " << nazwisko << endl;
 }

 void printStudent_nr_indexu()
 {
     cout << "Numer indeksu: " << nr_indexu << endl;
 }

 void printStudent_kierunek()
 {
     cout << "Wydzial: " << wydzial << endl;
 }

 void printStudent_wydzial()
 {
     cout << "Wydzial: " << wydzial << endl;
 }

 void printStudent_sr_ocen()
 {
     cout << "Srednia ocen: " << sr_ocen << endl;
 }

 void printStudent_rok_studiow()
 {
     cout << "Rok studiow: " << rok_stud << endl;
 }

};

int main()
{
    student s1;
    s1.setStudentData();
    s1.printStudentData();
    return 0;
}
