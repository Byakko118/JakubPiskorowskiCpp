#include <iostream>

double Suma(double liczba1, double liczba2)
{
    return liczba1 + liczba2;
}

double Roznica(double liczba1, double liczba2)
{
    return liczba1 - liczba2;
}

double Iloczyn(double liczba1, double liczba2)
{
    return liczba1 * liczba2;
}

double Iloraz(double liczba1, double liczba2)
{
    return liczba1 / liczba2;
}

int main()
{
    int wybor;

    do {
        std::cout << "Wybierz funkcje:\n";
        std::cout << "1. Suma\n";
        std::cout << "2. Roznica\n";
        std::cout << "3. Iloczyn\n";
        std::cout << "4. Iloraz\n";
        std::cout << "0. Wyjscie\n";
        std::cout << "Wybrana funkcja: ";
        std::cin >> wybor;

        if (std::cin.fail()) {
            std::cout << "Niepoprawny wybor!";
            return 1;
        }

        if (wybor == 0) {
            std::cout << "Koniec programu.";
            break;
        }

        double liczba1, liczba2;
        std::cout << "Podaj pierwsza liczbe: ";
        std::cin >> liczba1;

        if (std::cin.fail()) {
            std::cout << "Niepoprawna liczba!";
            return 1;
        }

        std::cout << "Podaj druga liczbe: ";
        std::cin >> liczba2;

        if (std::cin.fail()) {
            std::cout << "Niepoprawna liczba!";
            return 1;
        }

        double wynik;

        switch (wybor) {
        case 1:
            wynik = Suma(liczba1, liczba2);
            break;
        case 2:
            wynik = Roznica(liczba1, liczba2);
            break;
        case 3:
            wynik = Iloczyn(liczba1, liczba2);
            break;
        case 4:
            if (liczba2 == 0) {
                std::cout << "Nie mozna dzielic przez zero!\n\n";
                continue;
            }
            wynik = Iloraz(liczba1, liczba2);
            break;
        default:
            std::cout << "Nieznana funkcja!\n\n";
            continue;
        }

        std::cout << "Wynik: " << wynik << "\n\n";

    } while (true);

    return 0;
}