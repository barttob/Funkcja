#include <iostream>

using namespace std;

int main()
{
    float a, b, wynik;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    if(a == 0){
        cout << "Funkcja stala, wartosc: " << b;
    } else {
        wynik = -b / a;
        cout << "Wynik: " << wynik;
    }

    return 0;
}
