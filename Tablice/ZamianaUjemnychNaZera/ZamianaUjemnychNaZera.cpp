#include <iostream>
using namespace std;

int main()
{
    static int WIELKOSC = 5;
    int liczby[5];
    cout << "Wprowadz " << WIELKOSC << " liczb calkowitych:" << endl;
    for (int i = 0; i < WIELKOSC; i++) {
        int numer;
        cin >> numer;
        if (cin.fail()) {
            cout << "Niepoprawna wartosc. Sprobuj ponownie." << endl;
            return 1;
        }
        if (numer < 0) {
            numer = 0;
        }
        liczby[i] = numer;
    }
    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < WIELKOSC; i++) {
        cout << liczby[i];
        if (i < WIELKOSC - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}