#include <iostream>
using namespace std;

int main()
{
    const int wiersze = 2;
    const int kolumny = 3;
    int macierz[wiersze][kolumny];
    int transponowana[kolumny][wiersze];

    cout << "Podaj 6 liczb calkowitych do macierzy 2x3:" << endl;
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1 << ": ";
            cin >> macierz[i][j];
            if (cin.fail()) {
                cout << "Niepoprawna wartosc. Sprobuj ponownie." << endl;
                return 1;
            }
        }
    }

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            transponowana[j][i] = macierz[i][j];
        }
    }

    cout << endl << "Transponowana macierz:" << endl;
    for (int i = 0; i < kolumny; i++) {
        for (int j = 0; j < wiersze; j++) {
            cout << transponowana[i][j] << " ";
        }
        cout << endl;
    }
}