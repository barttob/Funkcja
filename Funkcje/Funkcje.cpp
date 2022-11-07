#include <iostream>
#include <cmath>
#include <stdlib.h>

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
        cout << "Wynik: " << -b / a;
    cin.get(); cin.get();
    system("CLS");
}

void f_liniowa_2() {
    float a, b, c;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    if (b == 0)
        cout << "Funkcja wartosc: 0";
    else if (a == 0)
        cout << "Funkcja stala, wartosc: " << c / -b;
    else 
        cout << "Wynik: " << (-(c / -b) / (a / -b));
    cin.get(); cin.get();
    system("CLS");
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
        cout << "a = 0, funkcja liniowa, miejsce zerowe: " << -c / b;
    cin.get(); cin.get();
    system("CLS");
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
    cin.get(); cin.get();
    system("CLS");
}

void o_to_ki() {
    float a, b, c, delta, p, q;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    delta = (b * b) - (4 * a * c);
    p = -b / (2 * a);
    q = -delta / (4 * a);
    cout << "Postac kanoniczna: f(x)=" << a << "(x" << (p < 0 ? "+" : "-") << fabs(p) << ")^2+" << q << endl;
    
    if (a != 0) {
        if (delta > 0) 
            cout << "Postac iloczynowa: " << "f(x)=" << a << "(x" << 
                ((-b - sqrt(delta)) / (2 * a) < 0 ? "+" : "-") << fabs((-b - sqrt(delta)) / (2 * a)) << 
                ")(x" << ((-b + sqrt(delta)) / (2 * a) < 0 ? "+" : "-") << fabs((-b + sqrt(delta)) / (2 * a)) << ")" << endl;
        else if (delta == 0)
            cout << "Postac iloczynowa: " << "f(x)=" << a << "(x" << ((-b) / (2 * a) < 0 ? "+" : "-") << fabs((-b) / (2 * a)) << ")^2";
        else
            cout << "Brak miejsc zerowych, postac iloczynowa nie istnieje";
    }
    else
        cout << "a = 0, funkcja liniowa";

    cin.get(); cin.get();
    system("CLS");
}

void k_to_oi() {
    float a, b, c, delta, p, q;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    delta = (b * b) - (4 * a * c);
    p = -b / (2 * a);
    q = -delta / (4 * a);
    cout << "Postac kanoniczna: f(x)=" << a << "(x" << (p < 0 ? "+" : "-") << fabs(p) << ")^2+" << q << endl;

    if (a != 0) {
        if (delta > 0)
            cout << "Postac iloczynowa: " << "f(x)=" << a << "(x" <<
            ((-b - sqrt(delta)) / (2 * a) < 0 ? "+" : "-") << fabs((-b - sqrt(delta)) / (2 * a)) <<
            ")(x" << ((-b + sqrt(delta)) / (2 * a) < 0 ? "+" : "-") << fabs((-b + sqrt(delta)) / (2 * a)) << ")" << endl;
        else if (delta == 0)
            cout << "Postac iloczynowa: " << "f(x)=" << a << "(x" << ((-b) / (2 * a) < 0 ? "+" : "-") << fabs((-b) / (2 * a)) << ")^2";
        else
            cout << "Brak miejsc zerowych, postac iloczynowa nie istnieje";
    }
    else
        cout << "a = 0, funkcja liniowa";

    cin.get(); cin.get();
    system("CLS");
}

int main()
{
    char opcja;
    while(true) {
        cout << "Wybierz opcje: " << endl;
        cout << "   Obliczanie miejsca zerowego: " << endl;
        cout << "       1. ax+b=y" << endl;
        cout << "       2. Ax+By+C=0" << endl;
        cout << "       3. ax2+by+c=0" << endl;
        cout << "       4. a(x-p)^2+q=y" << endl;
        cout << "   Zmiana postaci funkcji kwadratowej: " << endl;
        cout << "       5. ogolna na kanoniczna i iloczynowa" << endl;
        cout << "       6. kanoniczna na ogolna i ilocyznowa" << endl;
        cout << "       7. iloczynowa na ogolna i kanonicyna" << endl;
        cout << endl << "   9. Koniec" << endl;

        cin >> opcja;
        system("CLS");

        switch (opcja)
        {
        case '1':
            f_liniowa_1();
            break;

        case '2':
            f_liniowa_2();
            break;

        case '3':
            f_kwadratowa();
            break;

        case '4':
            f_kwadratowa_kanoniczna();
            break;

        case '5':
            o_to_ki();
            break;

        case '6':
            k_to_oi();
            break;

        case '9':
            return 0;
            break;

        default:
            break;
        }
    }
    return 0;
}