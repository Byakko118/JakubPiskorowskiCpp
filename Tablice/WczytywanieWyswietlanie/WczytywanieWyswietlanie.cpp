#include <iostream>
using namespace std;

int main()
{
    const int WIELKOSC = 21;
    char ciag[WIELKOSC];

    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(ciag, WIELKOSC);

    cout << "Wprowadzony ciag znakow: " << ciag << endl;
}