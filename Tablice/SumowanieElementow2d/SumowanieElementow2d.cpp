#include <iostream>
using namespace std;

int main()
{
    const int WIELKOSC = 3;
    int macierz[WIELKOSC][WIELKOSC];
    int suma = 0;

    cout << "Podaj 9 liczb calkowitych do macierzy 3x3:" << endl;
    for (int i = 0; i < WIELKOSC; i++) {
        for (int j = 0; j < WIELKOSC; j++) {
            cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1 << ": ";
            cin >> macierz[i][j];
            if (cin.fail()) {
                cout << "Niepoprawna wartosc. Sprobuj ponownie." << endl;
                return 1;
            }
            suma += macierz[i][j];
        }
    }

    cout << "Suma elementow macierzy: " << suma << endl;
}