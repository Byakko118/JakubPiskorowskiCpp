#include <iostream>

int main()
{
    while (true) {
        int N;
        std::cout << "Podaj liczbe: ";
        std::cin >> N;

        if (std::cin.fail()) {
            std::cout << "Nieprawidlowa liczba. Podaj liczbe calkowita." << std::endl;
            continue;
        }

        char choice;
        while (true) {
            std::cout << "Wprowadziles liczbe: " << N << std::endl;
            std::cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
            std::cin >> choice;

            if (choice == 't' || choice == 'T') {
                break;
            }
            if (choice == 'n' || choice == 'N') {
                std::cout << "Dziekuje za wprowadzenie liczb!";
                return 0;
            }
            std::cout << "Nieprawidlowy wybor. Wprowadz 't' lub 'n'." << std::endl;
        }
    }
}
