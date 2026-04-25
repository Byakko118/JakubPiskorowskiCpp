#include <iostream>
using namespace std;

int main()
{
    const int WIELKOSC = 10;
    int liczby[WIELKOSC];
    int suma = 0;

    for (int i = 0; i < WIELKOSC; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
        if (cin.fail()) {
            cout << "Niepoprawna wartosc. Sprobuj ponownie." << endl;
            return 1;
        }
    }

    cout << "Liczby parzyste: ";
    for (int i = 0; i < WIELKOSC; i++) {
        if (liczby[i] % 2 == 0) {
            cout << liczby[i] << ", ";
            suma += liczby[i];
        }
    }
    cout << endl;
    cout << "Suma liczb parzystych: " << suma << endl;
}