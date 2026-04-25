#include <iostream>
using namespace std;

int main()
{
    const int wielkosc = 10;
    int liczby[wielkosc];

    cout << "Podaj 10 liczb calkowitych:" << endl;
    for (int i = 0; i < wielkosc; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
        if (cin.fail()) {
            cout << "Niepoprawna wartosc. Sprobuj ponownie." << endl;
            return 1;
        }
    }

    int najmniejsza = liczby[0];
    for (int i = 1; i < wielkosc; i++) {
        if (liczby[i] < najmniejsza) {
            najmniejsza = liczby[i];
        }
    }

    cout << "Najmniejsza liczba to: " << najmniejsza << endl;
}