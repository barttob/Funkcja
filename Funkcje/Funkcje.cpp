#include <iostream>
#include <cmath>


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

void f_kwadratowa() {
    float a, b, c, wynik, delta;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    delta = (b * b) - (4 * a * c);
    if (delta > 0) {
        cout << "X1: " << (-b - sqrt(delta)) / (2 * a) << endl;
        cout << "X2: " << (-b + sqrt(delta)) / (2 * a);
    }
    else if (delta == 0)
        cout << "X: " << (-b) / (2 * a);
    else
        cout << "Brak miejsc zerowych";
    
}

int main()
{
    int opcja;
    float wynik;

    cout << "Wybierz opcje: " << endl;
    cout << "1. ax+b=y" << endl;
    cout << "2. Ax+By+C=0" << endl;
    cout << "3. ax2+by+c=0" << endl;

    cin >> opcja;

    switch (opcja)
    {
    case 1:
        f_liniowa_1();
        break;

    case 2:
        f_liniowa_2();
        break;

    case 3:
        f_kwadratowa();
        break;

    default:
        break;
    }

    return 0;
}
