#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double r;
    double v;
    double t;
    double obliczenie;
    cout << "Hello world! V.1.0 ()seba0456" << endl;
    cout << "Witaj w kalkulatorze rozpuszczalnoœci!" << endl;
    cout << "Oto krotka instrukcja." << endl;
    cout << "1.Prosze by wartosc rozpuszczalnoœci byla podawana w g na 100g wody" << endl;
    cout << "2.Prosze by wartosc wody by³a podawana w g" << endl;
    cout << "Dzieki tym zabiegom nie muszisz podawac jednostek" << endl;
    cout << "3.Prosze o zapoznanie sie z tabela rozpuszczalnosci przed przystapieniem do pracy z programem" << endl;
    cout << "Zaczynamy!" << endl;
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
    return 0;

}

