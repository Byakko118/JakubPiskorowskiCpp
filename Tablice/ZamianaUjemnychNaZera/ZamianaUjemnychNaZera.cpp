#include <iostream>
using namespace std;

int main()
{
    static int wielkosc = 5;
    int liczby[5];
    cout << "Wprowadz " << wielkosc << " liczb calkowitych:" << endl;
    for (int i = 0; i < wielkosc; i++) {
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
    for (int i = 0; i < wielkosc; i++) {
        cout << liczby[i];
        if (i < wielkosc - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}