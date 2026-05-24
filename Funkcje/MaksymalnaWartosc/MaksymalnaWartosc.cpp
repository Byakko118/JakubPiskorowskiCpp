#include <iostream>

bool GetArrayFromUser(int liczby[], int wielkosc)
{
    for (int i = 0; i < wielkosc; i++) {
        std::cout << "Podaj liczbe nr " << i + 1 << ": ";
        std::cin >> liczby[i];

        if (std::cin.fail()) {
            std::cout << "Niepoprawna wartosc!";
            return false;
        }
    }

    return true;
}

int FindMaxValue(const int liczby[], int wielkosc)
{
    int maksymalna = liczby[0];

    for (int i = 1; i < wielkosc; i++) {
        if (liczby[i] > maksymalna) {
            maksymalna = liczby[i];
        }
    }

    return maksymalna;
}

void DisplayResult(int maksymalna)
{
    std::cout << "Najwieksza liczba: " << maksymalna;
}

int main()
{
    const int WIELKOSC = 5;
    int liczby[WIELKOSC];

    if (!GetArrayFromUser(liczby, WIELKOSC)) {
        return 1;
    }

    int maksymalna = FindMaxValue(liczby, WIELKOSC);
    DisplayResult(maksymalna);

    return 0;
}