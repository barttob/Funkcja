#include <iostream>
#include <cmath>


using namespace std;

void f_liniowa_1() {
    float a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    if (a == 0)
        cout << "Funkcja stala, wartosc: " << b;
    else 
        cout << "Wynik: " << b / a;
}

void f_liniowa_2() {
    float a, b, c;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    if (a == 0) 
        cout << "Funkcja stala, wartosc: " << b;
    else if (b == 0) 
        cout << "Funkcja wartosc: 0";
    else 
        cout << "Wynik: " << (-c / a) / -b;
}

void f_kwadratowa() {
    float a, b, c, delta;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    if (a != 0){
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
    else 
        cout << "a = 0, funkcja liniowa, miejsce zerowe: " << - c / b;
}

void f_kwadratowa_kanoniczna() {
    float a, b, c, p, q, delta;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj p: ";
    cin >> p;
    cout << "Podaj q: ";
    cin >> q;
    b = -2 * a * p;
    c = a * p * p + q;
    if (a != 0) {
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
    else
        cout << "a = 0, funkcja liniowa, miejsce zerowe: " << -c / b;
}

int main()
{
    int opcja;
    float wynik;

    cout << "Wybierz opcje: " << endl;
    cout << "1. ax+b=y" << endl;
    cout << "2. Ax+By+C=0" << endl;
    cout << "3. ax2+by+c=0" << endl;
    cout << "4. a(x-p)2+q=y" << endl;

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

    case 4:
        f_kwadratowa_kanoniczna();
        break;

    default:
        break;
    }

    return 0;
}
