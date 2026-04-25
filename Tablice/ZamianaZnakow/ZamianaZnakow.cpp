#include <iostream>
using namespace std;

int main()
{
    const int WIELKOSC = 21;
    char ciag[WIELKOSC];

    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(ciag, WIELKOSC);

    for (int i = 0; ciag[i] != '\0'; i++) {
        if (ciag[i] == 'a') {
            ciag[i] = 'o';
        }
    }

    cout << "Zmodyfikowany ciag znakow: " << ciag << endl;
}
