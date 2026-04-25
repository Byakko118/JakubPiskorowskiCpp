#include <iostream>
using namespace std;

int main()
{
    const int WIELKOSC = 101;
    char ciag[WIELKOSC];
    char znak;
    int licznik = 0;
    int pozycje[WIELKOSC];

    cout << "Podaj ciag znakow: ";
    cin.getline(ciag, WIELKOSC);

    cout << "Podaj znak do zliczenia: ";
    cin >> znak;

    for (int i = 0; ciag[i] != '\0'; i++) {
        if (ciag[i] == znak) {
            pozycje[licznik] = i + 1;
            licznik++;
        }
    }

    cout << "Liczba wystapien znaku '" << znak << "': " << licznik << endl;
    if (licznik > 0) {
        cout << "Pozycje wystapien: ";
        for (int i = 0; i < licznik; i++) {
            cout << pozycje[i];
            if (i < licznik - 1) cout << ", ";
        }
        cout << endl;
    }
}