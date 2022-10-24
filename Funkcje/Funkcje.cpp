#include <iostream>

using namespace std;

void f_liniowa_1() {
    float a, b, wynik;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    if (a == 0) {
        cout << "Funkcja stala, wartosc: " << b;
    }
    else {
        wynik = -b / a;
        cout << "Wynik: " << wynik;
    }
}

void f_liniowa_2() {
    float a, b, c, wynik;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    if (a == 0) {
        cout << "Funkcja stala, wartosc: " << b;
    }
    else if (b == 0) {
        cout << "Funkcja wartosc: 0";
    }
    else {
        wynik = (-c / a) / -b;
        cout << "Wynik: " << wynik;
    }
}

int main()
{
    int opcja;
    float wynik;

    cout << "Wybierz opcje: " << endl;
    cout << "1. ax+b=y" << endl;
    cout << "2. Ax+By+C=0" << endl;

    cin >> opcja;

    switch (opcja)
    {
    case 1:
        f_liniowa_1();
        break;

    case 2:
        f_liniowa_2();
        break;

    default:
        break;
    }

    return 0;
}
