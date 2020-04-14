#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double r;
    double v;
    int liczba;
    double obliczenie;
    double obliczenie2;
    cout << "Hello world! V.1.1 ()seba0456" << endl;
    cout << "Witaj w kalkulatorze rozpuszczalnoœci!" << endl;
    cout << "Oto krotka instrukcja." << endl;
    cout << "1.Prosze by wartosc rozpuszczalnoœci byla podawana w g na 100g wody" << endl;
    cout << "2.Prosze by wartosc wody by³a podawana w g" << endl;
    cout << "Dzieki tym zabiegom nie muszisz podawac jednostek" << endl;
    cout << "3.Prosze o zapoznanie sie z tabela rozpuszczalnosci przed przystapieniem do pracy z programem" << endl;
    cout << "Zaczynamy!" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Wpisz odpowiednia cyfre:" << endl;
    cout << "1.Znam rozpuszczalnosæ w 100g wody." << endl;
    cout << "2.nie znam rozpuszczalnosæ w 100g wody-to czesc zadania." << endl;
    cout << "3.nie znam rozpuszczalnosæ w 100g wody." << endl;
    cin >> liczba;
    if ( liczba == 1 )
    {
        cout << "Podaj ilosc rozpuszczalnoœci w 100g wody" << endl;
    cin >> r;
    cout << "x rozpuszca sie w (podaj wartosc wody innej niz 100g ) wody" << endl;
    cin >> v;
    obliczenie = r * v;
    obliczenie = obliczenie / 100;
    cout << "Szukana liczba to: " << obliczenie << endl;
    cout << "Dziekuje za uzycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    }
    else if ( liczba == 2)
    {
        cout << "Podaj ilosc rozpuszczalnoœci w x g wody" << endl;
    cin >> r;
    cout << "Ilosc rozpuszczanej substancji" << endl;
    cin >> v;
    obliczenie = r / 100;
    obliczenie2 = v / obliczenie;
    cout << "Szukana liczba to: " << obliczenie2 << endl;
    cout << "Dziekuje za uzycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    }
    else if ( liczba == 3)
    {
    cout << "Zobacz tabele krzywych rozpuszczalnosci i sroboj ponownie." << endl;
    cout << "Dziekuje za uzycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    return 0;
    }


}

